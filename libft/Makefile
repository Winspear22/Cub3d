# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 11:00:30 by adaloui           #+#    #+#              #
#    Updated: 2022/05/31 19:26:19 by adaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strlen_tab.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \

OBJ =		${SRCS:.c=.o}

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstnew.c ft_lstsize.c ft_strcpy.c

BONUS_OBJ		= $(BONUS:.c=.o)

NAME =		libft.a
CC =		gcc

.c.o:
		${CC} -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):
		@${CC} -Wall -Wextra -Werror -c ${SRCS}
		@ar rc ${NAME}   ${OBJ}
		@ranlib ${NAME}

clean:
		@rm -f ${OBJ} $(BONUS_OBJ)

fclean:		clean
		@rm -f ${NAME}

bonus:			$(OBJ) $(BONUS_OBJ)
				@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

re:		fclean ${NAME}

.PHONY:		all clean fclean re bonus
