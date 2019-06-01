# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwyl-way <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 22:09:10 by dwyl-way          #+#    #+#              #
#    Updated: 2019/05/04 14:38:03 by dwyl-way         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
srcs = *.c
obj = $(srcs:%.c=%.o)
includes = *.h

all: $(NAME)

$(NAME): $(obj)
	ar rc $(NAME) $(obj)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Werror -Wextra -I $(includes) -c $^

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
