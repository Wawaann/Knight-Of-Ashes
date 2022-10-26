##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Make des files.
##

SRC	=	lib_my/my_compute_power_rec.c		\
		lib_my/my_compute_square_root.c		\
		lib_my/my_find_prime_sup.c			\
		lib_my/my_getnbr.c					\
		lib_my/my_isneg.c					\
		lib_my/my_is_prime.c				\
		lib_my/my_putchar.c					\
		lib_my/my_put_nbr.c					\
		lib_my/my_putstr.c					\
		lib_my/my_revstr.c					\
		lib_my/my_sort_int_array.c			\
		lib_my/my_strcapitalize.c			\
		lib_my/my_strcat.c					\
		lib_my/my_strcmp.c					\
		lib_my/my_strcpy.c					\
		lib_my/my_str_isalpha.c				\
		lib_my/my_str_islower.c				\
		lib_my/my_str_isnum.c				\
		lib_my/my_str_isprintable.c			\
		lib_my/my_str_isupper.c				\
		lib_my/my_strlen.c					\
		lib_my/my_strlowcase.c				\
		lib_my/my_strncat.c					\
		lib_my/my_strncmp.c					\
		lib_my/my_strncpy.c					\
		lib_my/my_strstr.c					\
		lib_my/my_strupcase.c				\
		lib_my/my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	lib.h

LIB	=	liblib.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(LIB) $(OBJ)
	@rm -f $(OBJ)
	@make -C lib_printf --quiet

clean:
	@rm -f $(OBJ)

fclean:	clean
	@make fclean -C lib_printf --quiet

re:		fclean all
