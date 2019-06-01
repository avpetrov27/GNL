/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 15:07:46 by dwyl-way          #+#    #+#             */
/*   Updated: 2019/06/01 17:06:17 by dwyl-way         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 6

void	 ft_putstr(char *c)
{
	while (*c)
	{
		write(1, c, 1);
	   c++;	
	}
}


int	main(int argc, char **argv)
{
    int		fd;
	int		fd2;
//    char	ch;
	char	buf[BUF_SIZE + 1];
	int		ret;

    if (argc < 2)
    {
        write(2, "File name missing.\n", 19);
        return (0);
    }
    if (argc > 2)
    {
        write(2, "Too many arguments.\n", 20);
        return (0);
    }
    fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[1], O_RDONLY);
	//fd = argv[1];
//    printf("fd = %i\n", fd);
//	printf("fd2= %i\n", fd2);
	if (fd > 0)
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
//			printf("ret = %i\n", ret);
			ft_putstr(&buf[0]);
			//printf("buf = %s\n", buf);
		}
	}
    close(fd);
//	while ((display = read(fd2, &ch, 1)) > 0)
//		write(1, &ch, 1);
	close(fd2);
    return (0);
}
