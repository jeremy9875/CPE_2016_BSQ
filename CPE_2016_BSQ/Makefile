##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_BSQ
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Thu Dec  8 14:23:27 2016 jeremy elkaim
## Last update Thu Dec  8 14:23:59 2016 jeremy elkaim
##

NAME    = BSQ

SRC    = BSQ.c

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
