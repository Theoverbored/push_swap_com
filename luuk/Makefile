NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
SOURCES	= main.c\
		  func/alg.c\
		  func/alg_utils.c\
		  func/errors.c\
		  func/rev_rotate_func.c\
		  func/rotate_func.c\
		  func/stack.c\
		  func/stackpush.c\
		  func/stack_util.c\
		  func/swap_func.c\
		  func/target_nodes.c\
		  


OBJECTS = $(SOURCES:.c=.o)

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR) all

$(NAME): $(OBJECTS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT_LIB) -o $(NAME) 

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) $(LIBFT_LIB)

re: fclean all

.PHONY : clean fclean re all
