class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		int		_phone_number;
		std::string	_darkest_secret;

	public:
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
