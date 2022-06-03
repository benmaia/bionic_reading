NAME = bionic

SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

CC = gcc

%.o: %.c
	@$(CC) -c $(^) -o $(@)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -I./ -o $(@) $(^)

clean:
	@rm -rf $(OBJS)
	@rm -rf $(NAME)

re: clean all
