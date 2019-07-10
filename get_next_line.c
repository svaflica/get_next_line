/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 10:36:18 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/14 15:36:43 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*ft_lst_search(t_list *list, int *work, const int fd)
{
	t_list		*tmp;

	*work = 1;
	tmp = list;
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
			if (tmp->content)
				return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

static char		*ft_add_to_lists(t_list **list, t_stor *st, const int fd)
{
	t_list		*tmp;

	tmp = *list;
	st->work = 0;
	st->buf_size = 0;
	st->newl = 0;
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
			if (tmp->content)
				return ((char *)tmp->content);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", 1);
	tmp->content_size = (size_t)fd;
	ft_lstadd(list, tmp);
	return ((char *)tmp->content);
}

static char		*ft_st_change(char *last, t_list *list, t_stor *st)
{
	char	*new;
	char	*new_content;

	if (!(new = ft_strcut(last, '\n')))
		return (NULL);
	new_content = ft_strdup(ft_strchr(last, '\n') + 1);
	free(last);
	list->content = new_content;
	st->work = 1;
	return (new);
}

static char		*ft_join(char *s1, char *s2, t_stor *st)
{
	char	*res;

	s2[st->buf_size] = '\0';
	st->work = 1;
	res = ft_strjoin(s1, s2);
	free(s1);
	return (res);
}

int				get_next_line(const int fd, char **line)
{
	static t_list		*list;
	t_stor				st;
	char				buf[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || read(fd, NULL, 0) == -1)
		return (-1);
	st.buf = ft_add_to_lists(&list, &st, fd);
	while ((st.buf_size = read(fd, buf, BUFF_SIZE)))
	{
		st.buf = ft_join(st.buf, buf, &st);
		if (ft_strchr(st.buf, '\n') || st.buf_size < BUFF_SIZE)
			break ;
	}
	if (!(st.newl = ft_strchr(st.buf, '\n')) && st.buf_size < BUFF_SIZE)
		(ft_lst_search(list, &st.work, fd))->content_size = -1;
	if (st.buf_size < BUFF_SIZE && !ft_strlen(st.buf))
		return (0);
	if (st.newl)
		st.buf = ft_st_change(st.buf, ft_lst_search(list, &st.work, fd), &st);
	if (!st.work)
		(ft_lst_search(list, &st.work, fd))->content_size = -1;
	*line = st.buf;
	return (1);
}
