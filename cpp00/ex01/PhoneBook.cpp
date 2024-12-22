#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "PhoneBook.hpp"

void	PhoneBook::addcontact(void)
{
	std::string	text;

	if (this->_counter >= 8)
	{
		this->_flag = 1;
		this->_copy = this->_counter;
		this->_counter =  this->_counter - 8;	
	}
	std::cout << "Introduce the first name: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_first_name(text);

	std::cout << "Introduce the last name: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_last_name(text);

	std::cout << "Introduce the nickname: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_nickname(text);

	std::cout << "Introduce the phone number: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_phone_number(text);

	std::cout << "Introduce the darkest secret: " << std::endl;
	std::cin >> text;
	contacts[this->_counter].set_darkest_secret(text);
	this->_counter++;
}

void	PhoneBook::showcontacts(void)
{
	int		i;
	std::string	name;
	std::string	last;
	std::string	nick;

	i = 0;
		std::cout << std::setw(10) << std::right << "Index" << " | " << std::setw(10) << std::right << "First name" << " | " << std::setw(10) << std::right << "Last name" << " | " << std::setw(10) << std::right << "Nickname" << std::endl;
	while (i <= 7)
	{
		name = "";
		last = "";
		nick = "";
		if (i <= this->_counter && this->_flag == 0)
		{
			name = this->contacts[i].get_first_name();
			last = this->contacts[i].get_last_name();
			nick = this->contacts[i].get_nickname();
		}
		else if (i <= this->_copy && this->_flag == 1)
		{
			name = this->contacts[i].get_first_name();
			last = this->contacts[i].get_last_name();
			nick = this->contacts[i].get_nickname();
		}
		if (name.length() >= 10)
		{
			name = name.substr(0, 9);	
			name = name.append(".");
		}
		if (last.length() >= 10)
		{	
			last = last.substr(0, 9);	
			last = last.append(".");
		}
		if (nick.length() >= 10)
		{	
			nick = nick.substr(0, 9);	
			nick = nick.append(".");
		}
		std::cout << std::setw(10) << std::right << i << " | " << std::setw(10) << std::right << name << " | " << std::setw(10) << std::right << last << " | " << std::setw(10) << std::right << nick << std::endl;
		i++; 
	}
}

void PhoneBook::displaycontact(int num)
{
    std::cout << "First name: " << this->contacts[num].get_first_name() << std::endl;
    std::cout << "Last name: " << this->contacts[num].get_last_name() << std::endl;
    std::cout << "Nickname: " << this->contacts[num].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->contacts[num].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << this->contacts[num].get_darkest_secret() << std::endl;
}

