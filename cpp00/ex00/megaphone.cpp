#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1 ; av[i] != NULL ; i++)
		{
			for (int ii = 0 ; av[i][ii] != '\0' ; ii++)
			{
				std::cout << static_cast<char>(std::toupper(av[i][ii]));
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
