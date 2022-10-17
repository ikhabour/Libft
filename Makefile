NAME = libft.a
CC = gcc
FLAGS = -Wextra -Werror -Wall
RM = rm -f
SOURCES = 	ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_atoi.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_split.c\
			main.c\


OBJECTS = $(SOURCES:.c=.o)

all :	$(NAME)
	ar -r $(NAME) $(OBJECTS)
$(NAME) :	$(OBJECTS)

$(OBJECTS) :	$(SOURCES)
		$(CC) -c $(FLAGS) $(SOURCES)
clean :
		$(RM) $(OBJECTS)
fclean : clean
		$(RM) $(NAME)
re : fclean all

.PHONY: all clean fclean re
