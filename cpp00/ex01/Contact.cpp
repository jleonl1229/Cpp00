#include "Contact.hpp"

void		Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;	
}

std::string	Contact::get_first_name()
{
	return (this->_first_name);
}

void		Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;	
}

std::string	Contact::get_last_name()
{
	return (this->_last_name);
}

void		Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;	
}

std::string	Contact::get_nickname()
{
	return (this->_nickname);
}

void		Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;	
}

int		Contact::get_phone_number()
{
	return (this->_phone_number);
}

void		Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;	
}

std::string	Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}