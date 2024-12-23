#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		Contact() {}
		~Contact() {}
		void		set_first_name(std::string name);	
		std::string	get_first_name();
		void		set_last_name(std::string lname);	
		std::string	get_last_name();
		void		set_nickname(std::string nickname);	
		std::string	get_nickname();	
		void		set_phone_number(std::string number);
		std::string	get_phone_number();
		void		set_darkest_secret(std::string secret);
		std::string	get_darkest_secret();
};
#endif
