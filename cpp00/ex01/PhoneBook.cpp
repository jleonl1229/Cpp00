#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

void	PhoneBook::addcontact(void)
{
	if (this->_counter >= 8)
		this->_counter =  this->_counter - 8;	
	Contact contacts[this->_counter];
	this->_counter++;
}

void	PhoneBook::showcontacts(void)
{
	int		i;
	std::string	name;
	std::string	last;
	std::string	nick;

	i = 0;
	name = this->contacts[i].get_first_name();
	last = this->contacts[i].get_last_name();
	nick = this->contacts[i].get_nickname();
	while (i <= 7 && i <= this->_counter)
	{
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
		/* std::ostringstream si; */
		/* si << i; */
		/* std::cout << si.str() << " | " << name << " | " << last << " | " << nick << std::endl; */
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

/* void	PhoneBook::displaycontact(int num) */
/* { */
/* 	std::string	text; */

/* 	std::cout << "First name: " << this->contacts[num].get_first_name() << std::endl; */
/* 	text = "Last name: "; */
/* 	std::cout << text.append(this->contacts[num].get_last_name()) << std::endl; */
/* 	text = "Nickname: "; */
/* 	std::cout << text.append(this->contacts[num].get_nickname()) << std::endl; */
/* 	text = "Phone number: "; */
/* 	std::cout << text.append(this->contacts[num].get_phone_number()) << std::endl; */
/* 	text = "Darkest secret "; */
/* 	std::cout << text.append(this->contacts[num].get_darkest_secret()) << std::endl; */
/* } */
