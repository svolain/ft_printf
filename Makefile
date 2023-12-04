NAME = libftprintf.a
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)\libft.a
MAKE = make
SRCS =	ft_printf.c \
			ft_print_specifiers.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) all bonus -C $(LIBFTDIR)
		@ar -rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
		@rm -f $(OBJS)
		@$(MAKE) clean -C ./libft

fclean: clean
		@rm -f $(NAME)
		@rm -f libft.a
		@$(MAKE) fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re
