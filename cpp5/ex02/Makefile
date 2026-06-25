NAME = Form
CXX = c++
FLAGS = -g -Wall -Werror -Wextra -std=c++98
SRCS = AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		ShruberryCreationForm.cpp Bureaucrat.cpp main.cpp

OBJS= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re