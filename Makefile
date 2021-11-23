CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap 

OBJ = $(SRC:.c=.o)

SRC = ./srcs/push_swap.c ./srcs/ft_lstnew.c ./srcs/ft_lstadd_front.c \
./srcs/ft_atoi.c ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
./srcs/main.c ./srcs/parse.c ./srcs/push.c ./srcs/sort_utilities_1.c \
./srcs/reverse_rotate.c ./srcs/rotate.c ./srcs/swap.c ./srcs/securities.c \
./srcs/sort_2.c ./srcs/sort_3.c ./srcs/sort_5.c \
./srcs/ft_split.c ./srcs/ft_strcmp.c ./srcs/ft_substr.c ./srcs/ft_strlen.c \
./srcs/ft_lstfree.c ./srcs/copy_list.c ./srcs/check_all_good.c \
./srcs/error_san.c ./srcs/free_split.c ./srcs/ft_lstadd_back.c \
./srcs/ft_lstlast.c ./srcs/count_list.c ./srcs/signal_stack.c \
./srcs/sort_4.c ./srcs/sort_utilities_2.c ./srcs/sort_big.c \
./srcs/index_and_group.c

all: $(NAME)

$(NAME): $(SRC) 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) 

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: pipex all clean fclean re
