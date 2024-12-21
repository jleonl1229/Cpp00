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
		Contact()
		{
			std::string	text;
			int		number;

			std::cout << "Intrduce the first name: " << std::endl;	
			std::cin >> text;
			contact.set_first_name(text);

			std::cout << "Intrduce the last name: " << std::endl;	
			std::cin >> text;
			contact.set_last_name(text);

			std::cout << "Intrduce the nickname: " << std::endl;	
			std::cin >> text;
			contact.set_nickname(text);

			std::cout << "Intrduce the phone number: " << std::endl;	
			std::cin >> number;
			contact.set_phone_number(text);

			std::cout << "Intrduce the darkest secret: " << std::endl;
			std::cin >> text;
			contact.set_darkest_secret(text);
		}
		~Contact() {}
		void		set_first_name(std::string name);	
		std::string	get_first_name();
		void		set_last_name(std::string lname);	
		std::string	get_last_name();
		void		set_nickname(std::string nickname);	
		std::string	get_nickname();	
		void		set_phone_number(std::string number);
		int		get_phone_number();
		void		set_darkest_secret(std::string secret);
		std::string	get_darkest_secret();
};
#endif
