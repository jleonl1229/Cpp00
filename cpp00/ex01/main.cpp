#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main(void)
{
	/* char *choice; */
	std::string	choice;
	std::string	index;
	int		num;
	int		i;

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
			/* Here i'll set a method to create a new contact in the phonebook */	
		}
		else if (choice == "SEARCH")
		{
			/* Here i'll display all the existing contacts of the agenda */
			while (true)
			{
				std::cout << "Index number=> " << std::endl;
				std::cin >> index;
				
				try
				{
					num = std::stoi(index);
					if (num < 0 || num > 7)
					{
						std::cerr << "Introduced index must be among 0 and 7" << std::endl;
						break ;
					}
				}
				catch (const std::invalid_argument& e)
				{
					std::cerr << "That's not a number" << std::endl;
					break ;
				}
				catch (const std::out_of_range& e)
				{
					std::cerr << "Introduced number is out of range" << std::endl;
					break ;
				}
				std::cout << "The introduced index is: " << num << std::endl;
				/* Here i'll check if the introduced number exists in the atributte of any object and the loop will break if it doesn't */
				/* Then i'll display all it's data */ 
			}
		}
		else if (choice == "EXIT")
			return (std::cout << "Exiting..." << std::endl, 0);
		else
			std::cerr << "Invalid option. You must introduce a valid input" << std::endl;
	}
	return (0);
}
