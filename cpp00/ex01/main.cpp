#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	stoi(std::string str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

int main(void)
{
	std::string	choice;
	std::string	index;
	int		num;
	int		i;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "Introduce one of those instructions(ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> choice;
		i = 0;
		while (choice[i] != '\0')
		{
			choice[i] = std::toupper(choice[i]);
			i++;
		}
		std::cout << "Introduced option: " << choice << std::endl;
		if (choice == "ADD")
		{
			phonebook.addcontact();
		}
		else if (choice == "SEARCH")
		{
			phonebook.showcontacts();
			while (true)
			{
				std::cout << "Index number=> " << std::endl;
				std::cin >> index;
				
				if (index[0] < '0' || index[0] > '7' || index.length() != 1)
				{		
					std::cerr << "Introduced index must be among 0 and 7" << std::endl;
					break ;
				}
				num = stoi(index);
				std::cout << "The introduced index is: " << num << std::endl;
				phonebook.displaycontact(num);
			}
		}
		else if (choice == "EXIT")
			return (std::cout << "Exiting..." << std::endl, 0);
		else
			std::cerr << "Invalid option. You must introduce a valid input" << std::endl;
	}
	return (0);
}
