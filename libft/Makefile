NAME = libft.a

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJBONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o\
ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
ft_memmove.c ft_memalloc.c ft_memchr.c ft_memcmp.c ft_strlcpy.c\
ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
ft_strncmp.c ft_atoi.c ft_strnew.c ft_isalpha.c ft_isdigit.c\
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_strlen.c ft_putchar.c ft_putstrprec.c \
ft_str_tolower.c ft_treat_char.c ft_flags_ponto.c \
ft_treat_largura.c ft_treat_percent.c ft_treatment.c \
ft_treat_string.c ft_treat_pointer.c ft_ull_base.c \
ft_treat_int.c ft_treat_unit.c ft_u_itoa.c ft_treat_hexa.c

OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
ft_memmove.o ft_memalloc.o ft_memchr.o ft_memcmp.o ft_strlcpy.o\
ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o\
ft_strncmp.o ft_atoi.o ft_strnew.o ft_isalpha.o ft_isdigit.o\
ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o\
ft_tolower.o ft_calloc.o ft_strdup.o ft_substr.o\
ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o\
ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o\
ft_putnbr_fd.o ft_strlen.o ft_putchar.o ft_putstrprec.o \
ft_str_tolower.o ft_treat_char.o ft_flags_ponto.o \
ft_treat_largura.o ft_treat_percent.o ft_treatment.o \
ft_treat_string.o ft_treat_pointer.o ft_ull_base.o \
ft_treat_int.o ft_treat_unit.o ft_u_itoa.o ft_treat_hexa.o

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@/bin/rm -f $(OBJBONUS) $(OBJ)
bonus: $(NAME)
	@gcc $(FLAGS) -c $(SRCBONUS)
	@ar rc $(NAME) $(OBJBONUS)
fclean:	clean
	@/bin/rm -f $(NAME)
re:	fclean	all

.PHONY: all bonus clean fclean re
