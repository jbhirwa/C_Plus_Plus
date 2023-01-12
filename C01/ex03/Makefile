NAME			= weapon
CPP				= g++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
ASAN_FLAGS		= -fsanitize=address -fno-omit-frame-pointer -Wno-format-security

all:
				@$(CPP) $(CFLAGS) $(ASAN_FLAGS) *.cpp -o $(NAME)
				@echo MADE

clean:
				@$(RM) *.o
				@$(RM) $(NAME)
				@echo CLEANED
fclear:
	make clean