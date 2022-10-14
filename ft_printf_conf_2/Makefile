# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 00:49:15 by jbillet           #+#    #+#              #
#    Updated: 2022/07/28 03:17:53 by jbillet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Includes, Source and objects paths and files
INCLUDES = -I includes/

LIBFT_FILE_PATH = libft/libft.a

LIBFT = libft

FILES = ft_printf			\
		ft_arg_c			\
		ft_arg_s			\
		ft_arg_di			\
		ft_arg_p			\
		ft_arg_u			\
		ft_arg_x			\
		ft_print_arg		\
		ft_u_long_itoa		\
		ft_u_int_itoa		\
		ft_reverse_str		\

SRCS_PATH = srcs/

OBJS_PATH = objs/
OBJS = ${addprefix ${OBJS_PATH}, ${addsuffix .o, ${FILES}}}

OBJS_DIR = .cache_exists

# Name of the Library to be created
NAME = libftprintf.a

# C compiling command and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

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
${OBJS_PATH}%.o : ${SRCS_PATH}%.c | ${OBJS_DIR}
		@echo "${CYAN}Compiling ${YELLOW}$<${RESET}"
		@${CC} ${CFLAGS} -c $< -o $@ ${INCLUDES}
		@echo "${YELLOW}$< ${GREEN}Compiled successfully!${RESET}"

# Create OBJS folder
${OBJS_DIR} :
		@mkdir -p ${OBJS_PATH}

# Create the Library itself using the object files created above
${NAME} : ${LIBFT}.a ${OBJS}
		@echo "${MAGENTA}$@: ${CYAN}Creating ${YELLOW}$@${RESET}"
		@${AR} $@ ${OBJS}
		@echo "${MAGENTA}$@: ${YELLOW}$@ ${GREEN}created successfully!${RESET}"

${LIBFT}.a : ${OBJS_DIR}
		@echo "${MAGENTA}$@: ${CYAN}Compiling ${YELLOW}${LIBFT}${RESET}"
		@${MAKE} -C ${LIBFT}
		@cp ${LIBFT_FILE_PATH} ${NAME}
		@cp ${LIBFT}/includes/libft.h ./includes
		@echo "${MAGENTA}$@: ${YELLOW}${LIBFT} ${GREEN}compiled successfully!${RESET}"

# Clean the object files
clean :
		@echo "${MAGENTA}${NAME}: ${CYAN}Applying ${YELLOW}$@${RESET}"
		@${MAKE} clean -C ${LIBFT}
		@${REMOVE} ${OBJS_PATH}
		@echo "${MAGENTA}${NAME}: ${YELLOW}$@ ${GREEN}applied successfully!${RESET}"

# Clean the object files and the library file
fclean :
		@echo "${MAGENTA}${NAME}: ${CYAN}Applying ${YELLOW}$@${RESET}"
		@${REMOVE} ${OBJS_PATH}
		@${MAKE} fclean -C ${LIBFT}
		@${REMOVE} ./includes/libft.h
		@${REMOVE} ${NAME}
		@echo "${MAGENTA}${NAME}: ${YELLOW}${NAME} file ${RED}was deleted!${RESET}"
		@echo "${MAGENTA}${NAME}: ${YELLOW}$@ ${GREEN}applied successfully!${RESET}"

# Create all the object files and then create the Library
all : ${NAME}

# Clean everything and run it all again
re : fclean all

# Restrict some key words so Makefile understand them exclusively as targets
.PHONY : all re clean fclean
