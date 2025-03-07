NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = mandatory/main.c mandatory/parsing.c mandatory/utils/number.c mandatory/utils/split.c mandatory/utils/string.c mandatory/utils/list.c \
mandatory/moves/a_stack.c mandatory/moves/b_stack.c mandatory/moves/both_stacks.c mandatory/moves/moves.c \
mandatory/sort/sort.c  mandatory/sort/order.c mandatory/sort/small_sort.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

mandatory/%.o : mandatory/%.c mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean
