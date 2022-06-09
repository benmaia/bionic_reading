NAME = bionic

INC = include
SRCS = $(wildcard srcs/*.c)
OBJS_DIR = objs
OBJS = $(SRCS:%.c=%.o)

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -I$(INC) -o $(@) $(^)

%.o: %.c
	@$(CC) -I$(INC) -c $(^) -o $(@)

clean:
	@rm -rf srcs/*.o
	@rm -rf $(NAME)

re: clean all
