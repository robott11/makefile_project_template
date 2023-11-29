CC = gcc
CFLAGS = -Wall -ggdb 

PROJECT_NAME = bras

SRC_DIR = src
BIN_DIR = bin

SRCS   := $(wildcard $(SRC_DIR)/* .c)
OBJS   := $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/obj/%.o, $(SRCS))

all: $(OBJS)
	mkdir -p $(BIN_DIR)
	$(CC) -o $(BIN_DIR)/$(PROJECT_NAME) $(CFLAGS) $(OBJS)

$(BIN_DIR)/obj/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BIN_DIR)/obj
	$(CC) $(CFLAGS) -c $< -o $@

