##
## EPITECH PROJECT, 2022
## makefile.c
## File description:
## a makefile who that compile my lib/my
##

# PARAM
LIBNAME 		= 		my
OBJ 			=   	$(SRC:.c=.o)
SRC 			=		my_atoi.c 									\
						my_put_nbr.c								\
						my_putchar.c								\
						my_putstr.c									\
						my_strcmp.c 								\
						my_strlen.c									\
						my_strncmp.c								\
						my_strcat.c 								\
						my_strncat.c 								\
						my_strcpy.c									\
						my_strkcpy.c 								\
						my_arraycpy.c 								\
						my_arraylen.c 								\
						my_str_to_word_array.c 						\
						my_str_to_word_array2.c 					\
						my_str_isalphanum.c							\
						my_cleanstr.c								\



# MAKEFILE
INCLUDE_DIR 	= 		-I ../../include
LIBFILE 		=		lib$(LIBNAME).a
LIB_DIR 		= 		-L ./lib
CFLAGS 			=	$(INCLUDE_DIR)


all: 	$(LIBNAME)

$(LIBNAME):		$(OBJ)
	@ar rc $(LIBFILE) $(OBJ)
	@mv $(LIBFILE) ../
	@echo "Lib successfully compiled"

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f ../lib$(LIBNAME).a

re:    fclean	all
	@rm -f $(OBJ)
