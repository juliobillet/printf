# Includes, Source and objects paths and files
INCLUDES = -I includes/

INCLUDES_DIR = includes/

LIBS_DIR = libs/

FILES = main

OBJS = main.o

OBJS_DIR = .cache_exists

PRINTF = libftprintf

PRINTF_DIR = ../ft_printf_envio/

# Name of the program to be created
NAME = main

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
COPY = cp
COPY_DIR = cp -r

#		@${CC} ${CFLAGS} $@ ${INCLUDES} libs/${PRINTF}.a $@.c
# Create the Library itself using the object files created above
${NAME} : ${PRINTF}.a
		@echo "${MAGENTA}$@: ${CYAN}Creating ${YELLOW}$@${RESET}"
		@${CC} ${CFLAGS} ${NAME}.c ${LIBS_DIR}${PRINTF}.a ${INCLUDES} -o ${NAME}
		@echo "${MAGENTA}$@: ${YELLOW}$@ ${GREEN}created successfully!${RESET}"

# Create folders
${OBJS_DIR} :
		@mkdir -p ${INCLUDES_DIR} ${LIBS_DIR}

# Compile Printf library

${PRINTF}.a: ${OBJS_DIR}
		@echo "${MAGENTA}$@: ${CYAN}Compiling ${YELLOW}${PRINTF}${RESET}"
		@${MAKE} -C ${PRINTF_DIR}
		@${COPY} ${PRINTF_DIR}${PRINTF}.a ./${LIBS_DIR}
		@${COPY} ${PRINTF_DIR}${INCLUDES_DIR}/* ./${INCLUDES_DIR}
		@echo "${MAGENTA}$@: ${YELLOW}${PRINTF} ${GREEN}compiled successfully!${RESET}"

# Clean the object files
clean :
		@echo "${MAGENTA}${NAME}: ${CYAN}Applying ${YELLOW}$@${RESET}"
		@${MAKE} clean -C ${PRINTF_DIR}
		@${REMOVE} ${INCLUDES_DIR} ${LIBS_DIR}
		@echo "${MAGENTA}${NAME}: ${YELLOW}$@ ${GREEN}applied successfully!${RESET}"

# Clean the object files and the library file
fclean :
		@echo "${MAGENTA}${NAME}: ${CYAN}Applying ${YELLOW}$@${RESET}"
		@${MAKE} fclean -C ${PRINTF_DIR}
		@${REMOVE} ${NAME}
		@echo "${MAGENTA}${NAME}: ${YELLOW}${NAME} file ${RED}was deleted!${RESET}"
		@echo "${MAGENTA}${NAME}: ${YELLOW}$@ ${GREEN}applied successfully!${RESET}"

# Create all the object files and then create the Library
all : ${NAME}

# Clean everything and run it all again
re : fclean all

# Restrict some key words so Makefile understand them exclusively as targets
.PHONY : all re clean fclean
