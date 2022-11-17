CC					=			gcc
AR					= 			ar
CFLAGS				=			-I. -I./$(LIBFT_DIR) -Wall -Wextra -Werror

MEMS				=			mems
NODES				=			nodes
PUTS				=			puts
FLAGS				=			flags

SRC					=			$(FLAGS)/ft_isnbrformat.c\
								$(FLAGS)/ft_isdecnbrformat.c\
								$(FLAGS)/ft_isintdecnbrformat.c\
								$(FLAGS)/ft_isstrformat.c\
								$(FLAGS)/ft_ishexnbrformat.c\
								$(FLAGS)/ft_hasprecision.c\
								$(FLAGS)/ft_haspadwithzeros.c\
								$(FLAGS)/ft_haslwidth.c\
								$(FLAGS)/ft_hasrwidth.c\
								$(FLAGS)/ft_getlwidth.c\
								$(FLAGS)/ft_getrwidth.c\
								$(FLAGS)/ft_hasleftjustify.c\
								$(FLAGS)/ft_hashexprecision.c\
								$(FLAGS)/ft_hasaddsign.c\
								$(FLAGS)/ft_hasaddspace.c\
								$(FLAGS)/ft_mustpadwithzeros.c\
								$(MEMS)/ft_memdup.c\
								$(MEMS)/ft_memflip.c\
								$(NODES)/ft_nodepush.c\
								$(NODES)/ft_nodeprint.c\
								$(NODES)/ft_nodenew.c\
								$(NODES)/ft_nodelast.c\
								$(NODES)/ft_nodeclear.c\
								$(NODES)/ft_nodeshift.c\
								$(NODES)/ft_nodepop.c\
								$(NODES)/ft_nodesize.c\
								$(NODES)/ft_noderift.c\
								$(PUTS)/ft_putchar.c\
								$(PUTS)/ft_putstr.c\
								$(PUTS)/ft_putnbr.c\
								$(PUTS)/ft_putnbr_unsigned.c\
								$(PUTS)/ft_putnbr_hex.c\
								$(PUTS)/ft_putnbr_hex_unsigned.c\
								$(PUTS)/ft_putnbr_hex_unsigned_long.c\
								ft_handleformat.c\
								ft_free.c\
								ft_setflags.c\
								ft_handleflags.c\
								ft_clear.c\
								ft_printchar.c\
								ft_argsnew.c\
								ft_printf.c

OBJ					=			$(SRC:.c=.o)

NAME				=			libftprintf.a
DEPS				=			libftprintf.h

MAKE				=			make

LIBFT_DIR			=			libft
LIBFT				=			libft.a

%.o:							%.c $(DEPS)
								$(CC) $(CFLAGS) -c -o $@ $<

all: 							$(NAME)

$(NAME): 						$(OBJ)
								$(MAKE) -C $(LIBFT_DIR)
								cp $(LIBFT_DIR)/$(LIBFT) .
								mv $(LIBFT) $(NAME)
								$(AR) rcs $@ $^
								ranlib $@

clean:
								rm -f $(OBJ)

fclean: 						clean
								rm -f $(NAME)

re: 							fclean all

bonus:							$(NAME)

.PHONY: 						all clean fclean re bonus
