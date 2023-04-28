##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## A Universal Makefile.
##

# PARAM
PROGNAME		=		ai

OBJ				=		$(SRC:.c=.o)

SRC				=		src/project_base/main.c 							\
						src/project_base/needforstek.c 						\
						src/project_base/help_display.c 					\
						src/project_base/error_handling_args.c				\
						src/car_movements/car_forward_backward.c			\
						src/car_movements/car_wheels_movements.c			\
						src/get_current_infos/get_all_infos.c				\
						src/get_current_infos/get_car_speed.c				\
						src/get_current_infos/get_car_wheels_dir.c			\
						src/get_current_infos/get_min_max_speed.c			\
						src/get_current_infos/get_lidar_infos.c				\
						src/get_current_infos/get_no_error_infos.c			\



TEST_FILES		=		tests/test_display_help.c 							\
						tests/test_handling_args.c							\

SRC_TEST		=		$(filter-out src/project_base/main.c,$(SRC))

# MAKEFILE
CC				=		gcc
CFLAGS			=		$(INCLUDE_DIR) $(WARNING)
CFLAGS_TEST		= 		$(LIB_DIR) $(LIB) $(CFLAGS) -lcriterion --coverage
INCLUDE_DIR 	=		-I ./include
LIB 			=		-lmy
LIB_DIR			=		-L ./lib
WARNING			=		-W -Wall -Wextra

all:	$(PROGNAME)

$(PROGNAME):	$(OBJ)
		@make -s -C ./lib/my
		@$(CC) $(OBJ) $(LIB_DIR) $(LIB) -o $(PROGNAME)

clean:
		@make clean -s -C ./lib/my
		@rm -rf $(OBJ)

fclean:			clean
		@make fclean -s -C ./lib/my
		@rm -rf $(PROGNAME)

re:		fclean all
		@make clean -s -C ./lib/my
		@rm -rf $(OBJ)

tests_run: fclean all $(NAME)
		@make -s -C ./lib/my
		$(CC) -o tests/test.out $(TEST_FILES) $(SRC_TEST) $(CFLAGS_TEST)
		./tests/test.out --verbose
		gcovr --exclude tests/

clean_test:
		rm -f *.gcda
		rm -f *.gcno
		rm -f tests/test.out*

debug :
		@make -C ./lib/my
		$(CC) $(SRC) -g -o $(PROGNAME) $(CFLAGS) $(LIB_DIR) $(LIB)
		@make clean -C ./lib/my
		rm -rf $(OBJ)

delval:
		@rm -f vgcore*
