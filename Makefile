# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smakarov <smakarov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 00:08:38 by antondob          #+#    #+#              #
#    Updated: 2020/02/22 09:07:41 by smakarov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS =  -Wall -Wextra -Werror
SRCDIR = srcs
OBJDIR = objs
FUNCS = ft_isdigit.c\
		ft_lstmap.c\
		ft_memdel.c\
		ft_putnbr.c\
		ft_strcmp.c\
		ft_strjoin.c\
		ft_strncpy.c\
		ft_strsub.c\
		ft_isprint.c\
		ft_lstnew.c\
		ft_memmove.c\
		ft_putnbr_fd.c\
		ft_strcpy.c\
		ft_strlcat.c\
		ft_strnequ.c\
		ft_strtrim.c\
		ft_atoi.c\
		ft_itoa.c\
		ft_memalloc.c\
		ft_memset.c\
		ft_putstr.c\
		ft_strdel.c\
		ft_strlen.c\
		ft_strnew.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_lstadd.c\
		ft_memccpy.c\
		ft_putchar.c\
		ft_putstr_fd.c\
		ft_strdup.c\
		ft_strmap.c\
		ft_strnstr.c\
		ft_toupper.c\
		ft_isalnum.c\
		ft_lstdel.c\
		ft_memchr.c\
		ft_putchar_fd.c\
		ft_strcat.c\
		ft_strequ.c\
		ft_strmapi.c\
		ft_strrchr.c\
		ft_isalpha.c\
		ft_lstdelone.c\
		ft_memcmp.c\
		ft_putendl.c\
		ft_strchr.c\
		ft_striter.c\
		ft_strncat.c\
		ft_strsplit.c\
		ft_isascii.c\
		ft_lstiter.c\
		ft_memcpy.c\
		ft_putendl_fd.c\
		ft_strclr.c\
		ft_striteri.c\
		ft_strncmp.c\
		ft_strstr.c\
		ft_split_whitespaces.c\
		ft_sort_integer_table.c\
		ft_factorial.c\
		ft_is_prime.c\
		ft_power.c\
		ft_strchr_num.c\
		ft_strjoin_free.c\
		ft_strsub_free.c\
		ft_delete_table.c\
		ft_do_table.c\
		get_next_line.c\
		ft_max_2.c\
		ft_max_3.c\
		ft_min_2.c\
		ft_min_3.c\
		ft_putocta.c\
		ft_puthex_up.c\
		ft_puthex_low.c\
		ft_putpointer.c\
		ft_reverse_str.c\
		ft_strfill.c\
		pf_apply_params.c\
		pf_parse_params_1.c\
		pf_parse_params_2.c\
		pf_char_str.c\
		pf_itoa.c\
		pf_print_all.c\
		pf_process_arguments.c\
		pf_refresh_params.c\
		ft_printf.c\
		f_big_int_print.c\
		f_conv_float.c\
		f_get_fl.c\
		f_la_help.c\
		f_mult.c\
		f_pf_help.c\
		f_pow_mult.c\
		f_read_ll.c\
		ft_strndup.c\
		f_mem_error.c
OBJCS = $(patsubst %.c, %.o, $(FUNCS))
SRCS = $(addprefix $(SRCDIR)/, $(FUNCS))
HEADERS = -I includes

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRCS) $(HEADERS)
		ar rc $(NAME) $(OBJCS)
		ranlib $(NAME)

clean:
		rm -f $(OBJCS)

fclean: clean
		rm -f $(NAME)

re: fclean all
