# Compiler
CC = gcc

# Compiler Flags
CFLAGS = -Wall -g

# Target executable name
TARGET = student_app

# Source files
SRCS = main.c add_data.c count_node.c delete_data.c delete_all.c \
       exit_file.c modify_record.c print_data.c reverse_list.c \
       save_file.c sort_file.c

# Object files (auto generated from SRCS)
OBJS = $(SRCS:.c=.o)

# Final target
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Rule to compile .c to .o
%.o: %.c header.h
	$(CC) $(CFLAGS) -c $<

# Clean compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
rebuild: clean $(TARGET)

.PHONY: clean rebuild

