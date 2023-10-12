SRC = 
INC = ./include/
OBJS = $(SRC:.c=.o)
TARGET = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f