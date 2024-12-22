#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int	_counter;			
		Contact	contacts[8];
		int	_flag;
		int	_copy;
		
	public:
		PhoneBook()
		{
			std::cout << "Creating phone book..." << std::endl;
			_counter = 0;
			_flag = 0;
		}
		~PhoneBook() {}
		void	addcontact(void);
		void	showcontacts(void);
		void	displaycontact(int num);
};
#endif
