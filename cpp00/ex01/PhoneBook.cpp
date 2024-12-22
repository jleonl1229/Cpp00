#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

void	PhoneBook::addcontact(void)
{
	std::string	text;

	if (this->_counter >= 8)
		this->_counter =  this->_counter - 8;	
	std::cout << "Intrduce the first name: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_first_name(text);

	std::cout << "Intrduce the last name: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_last_name(text);

	std::cout << "Intrduce the nickname: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_nickname(text);

	std::cout << "Intrduce the phone number: " << std::endl;	
	std::cin >> text;
	contacts[this->_counter].set_phone_number(text);

	std::cout << "Intrduce the darkest secret: " << std::endl;
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
	/* while (i <= 7 && i <= this->_counter) */
	while (i <= 7)
	{
		name = "";
		last = "";
		nick = "";
		if (i <= this->_counter)
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
		std::cout << i << " | " << name << " | " << last << " | " << nick << std::endl;
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

