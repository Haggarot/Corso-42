FLAGS:= -Wall -Werror -Wextra

NAME= libft.a

FILES-1:= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove

OBJECTS-1:= $(patsubst %, %.o, $(FILES-1))
OBJECTS-2:= $(patsubst %, %.o, $(FILES-2))

all: $(NAME)
	
$(NAME):
	gcc $(FLAGS) -c $(patsubst %, %.c, $(FILES-1)) $(patsubst %, %.c, $(FILES-2))
	ar -rc $(NAME) $(OBJECTS-1) $(OBJECTS-2)
	ranlib $(NAME)

clean: 
	rm -f $(patsubst %, %.o, $(FILES-1)) $(patsubst %, %.o, $(FILES-2)) $(patsubst %, %.o, $(BONUS))

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus