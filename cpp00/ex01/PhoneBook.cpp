#include "PhoneBook.hpp"

void	addcontact(void)
{
	if (this->_counter >= 8)
		this->_counter =  this->_counter - 8;	
	Contact contacts[this->_counter];
	this->_counter++;
}

void	showcontacts(void)
{
	
}

void	displaycontact(int num)
{
	std::string	text;

	text = "First name: ";
	std::cout << text.append(this->contacts[num].get_first_name()) << std::endl;
	text = "Last name: ";
	std::cout << text.append(this->contacts[num].get_last_name()) << std::endl;
	text = "Nickname: ";
	std::cout << text.append(this->contacts[num].get_nickname()) << std::endl;
	text = "Phone number: ";
	std::cout << text.append(this->contacts[num].get_phone_number()) << std::endl;
	text = "Darkest secret ";
	std::cout << text.append(this->contacts[num].get_darkest_secret()) << std::endl;
}
