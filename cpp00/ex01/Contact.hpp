class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		int		_phone_number;
		std::string	_darkest_secret;

	public:
		Contact()
		{
			std::string	text;
			int		number;

			std::cout << "Intrduce the first name: " << std::endl;	
			std:cin >> text;
			contacto.set_first_name(text);

			std::cout << "Intrduce the last name: " << std::endl;	
			std:cin >> text;
			contacto.set_last_name(text);

			std::cout << "Intrduce the nickname: " << std::endl;	
			std:cin >> text;
			contacto.set_nickname(text);

			std::cout << "Intrduce the phone number: " << std::endl;	
			std:cin >> number;
			contacto.set_phone_number(text);

			std::cout << "Intrduce the darkest secret: " << std::endl;
			std:cin >> text;
			contacto.set_darkest_secret(text);
		}
		~Contact() {}
		void		set_first_name(string name);	
		std::string	get_first_name();
		void		set_last_name(string lname);	
		std::string	get_last_name();
		void		set_nickname(string nickname);	
		std::string	get_nickname();	
		void		set_phone_number(int number);
		int		get_phone_number();
		void		set_darkest_secret(string secret);
		std::string	get_darkest_secret();
}
