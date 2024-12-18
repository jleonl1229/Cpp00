NAME = Megaphone_program
MEGAPHONE = megaphone

SRC = megaphone.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(MEGAPHONE)

$(NAME): all

$(MEGAPHONE):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(MEGAPHONE)
	
clean:
	rm -rf $(MEGAPHONE)

re: fclean all

fclean: clean

.PHONY: all fclean clean re
