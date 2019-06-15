/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 13:46:05 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/06/15 21:51:01 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_cur_line(char **str)
{
	char	*line;
	char	*str_temp;
	int		len;

	len = 0;
	str_temp = NULL;
	line = NULL;
	while (str[0][len] != '\n' && str[0][len] != '\0')
		len++;
	if (ft_strlen(*str))
		line = ft_strsub(*str, 0, len);
	if (str[0][len] != '\0')
		str_temp = ft_strdup(&str[0][len + 1]);
	ft_strdel(str);
	*str = str_temp;
	return (line);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str;
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*temp;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!str)
		str = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		temp = ft_strjoin(str, buf);
		ft_strdel(&str);
		str = ft_strdup(temp);
		ft_strdel(&temp);
		if (ft_strchr(str, '\n') && (*line = get_cur_line(&str)))
			return (1);
	}
	if (ret == -1)
		return (-1);
	if ((ft_strlen(str)) && (*line = get_cur_line(&str)))
		return (1);
	return (0);
}
