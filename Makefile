CFLAGS := -Wall -Wextra -Werror

NAME := libftprintf.a

LIBS := libft

INC_DIRS := libft

INC_FLAGS := $(addprefix -I,$(INC_DIRS))

SRCS := ft_printf.c

OBJS := $(SRCS:.c=.o)

debug: fcleanm all
	clear
	cc $(CFLAGS) -fsanitize=address main.c $(NAME) $(INC_FLAGS)
	./a.out

all: $(NAME)

.PHONY := clean fclean re

$(NAME): $(OBJS)
	mv libft/libft.a $@
	ar rcs $@ $?

$(OBJS): %.o: %.c | sub-make
	cc $(CFLAGS) -c $< -o $@ $(INC_FLAGS)

sub-make:
	make -C $(LIBS)

clean:
	make -C libft clean
	rm -rf *.o

fclean:
	make -C libft fclean
	rm -rf *.o
	rm -rf $(NAME)

fcleanm:
	rm -rf *.o
	rm -rf $(NAME)

re: fclean all

