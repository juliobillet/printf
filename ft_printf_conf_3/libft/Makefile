# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 23:35:07 by jbillet           #+#    #+#              #
#    Updated: 2022/07/20 03:34:26 by jbillet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Includes, Source and objects paths and files
INCLUDES = includes/

FILES = 	ft_toupper	\
		ft_strtrim		\
		ft_putchar_fd	\
		ft_substr		\
		ft_strlcpy		\
		ft_memset		\
		ft_calloc		\
		ft_strmapi		\
		ft_putendl_fd	\
		ft_strlcat		\
		ft_itoa			\
		ft_memchr		\
		ft_memmove		\
		ft_striteri		\
		ft_putstr_fd	\
		ft_putnbr_fd	\
		ft_strdup		\
		ft_isdigit		\
		ft_strlen		\
		ft_split		\
		ft_strjoin		\
		ft_memcmp		\
		ft_strrchr		\
		ft_isalnum		\
		ft_atoi			\
		ft_memcpy		\
		ft_isalpha		\
		ft_strnstr		\
		ft_strchr		\
		ft_tolower		\
		ft_isprint		\
		ft_strncmp		\
		ft_bzero		\
		ft_isascii		\

SRCS_PATH = srcs/

OBJS_PATH = objs/
OBJS = ${addprefix ${OBJS_PATH}, ${addsuffix .o, ${FILES}}}

OBJS_DIR = .cache_exists

# Name of the Library to be created
NAME = libft.a

# C compiling command and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

# Colors
RESET = \033[0m
GREEN = \033[0;32m
YELLOW = \033[0;33m
CYAN = \033[0;36m
RED = \033[0;91m
BLUE = \033[0;94m
MAGENTA = \033[0;95m

# Shell commands
REMOVE = rm -rf
AR = ar rcs

# Compile each C file into an object at a time.
${OBJS_PATH}%.o: ${SRCS_PATH}%.c | ${OBJS_DIR}
		@echo "${CYAN}Compiling${RESET} ${YELLOW}$<${RESET}"
		@${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@
		@echo "${YELLOW}$<${RESET} ${GREEN}compiled successfully!${RESET}"

# Create OBJS folder
${OBJS_DIR} :
		@mkdir -p ${OBJS_PATH}

# Create the Library itself using the object files created above
${NAME} : ${OBJS}
		@echo "${MAGENTA}$@: ${RESET}${CYAN}Creating${RESET} ${YELLOW}$@${RESET}"
		@${AR} $@ $^
		@echo "${MAGENTA}$@: ${RESET}${YELLOW}$@${RESET} ${GREEN}created successfully!${RESET}"

# Clean the object files
clean :
		@echo "${MAGENTA}${NAME}: ${RESET}${CYAN}Applying${RESET} ${YELLOW}$@${RESET}"
		@${REMOVE} ${OBJS_PATH}
		@echo "${MAGENTA}${NAME}: ${RESET}${YELLOW}${OBJS_PATH} folder${RESET} ${RED}was deleted!${RESET}"
		@echo "${MAGENTA}${NAME}: ${RESET}${YELLOW}$@${RESET} ${GREEN}applied successfully!${RESET}"

# Clean the object files and the library file
fclean : clean
		@echo "${MAGENTA}${NAME}: ${RESET}${CYAN}Applying${RESET} ${YELLOW}$@${RESET}"
		@${REMOVE} ${NAME}
		@echo "${MAGENTA}${NAME}: ${RESET}${YELLOW}${NAME} file${RESET} ${RED}was deleted!${RESET}"
		@echo "${MAGENTA}${NAME}: ${RESET}${YELLOW}$@${RESET} ${GREEN}applied successfully!${RESET}"

# Create all the object files and then create the Library
all : ${NAME}

# Clean everything and run it all again
re : fclean all

# Restrict some key words so Makefile understand them exclusively as targets
.PHONY : all re clean fclean
