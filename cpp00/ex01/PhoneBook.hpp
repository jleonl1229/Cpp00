class PhoneBook
{
	private:
		int	_counter = 0;			
		Contact	contacts[7];
		
	public:
		PhoneBook()
		{
			std::cout << "Creating phone book..."
		}
		~PhoneBook() {}
		void	addcontact(void);
		void	showcontacts(void);
		void	displaycontact(int num);
}
