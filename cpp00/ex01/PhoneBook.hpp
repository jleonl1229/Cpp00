#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int	_counter;			
		Contact	contacts[7];
		
	public:
		PhoneBook()
		{
			std::cout << "Creating phone book...";
			_counter = 0;
		}
		~PhoneBook() {}
		void	addcontact(void);
		void	showcontacts(void);
		void	displaycontact(int num);
};
#endif
