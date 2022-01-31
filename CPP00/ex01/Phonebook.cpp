#include "Phonebook.hpp"

Phonebook::Phonebook( void )
{
	std::cout << "Phonebook constructor called" << std::endl;
	this->_index = 0;
	return ;
}

Phonebook::~Phonebook( void )
{
	std::cout << "Phonebook destructor called" << std::endl;
}

int		Phonebook::get_index( void ) const
{
	return this->_index;
}

void	Phonebook::set_index( int i )
{
	this->_index = i;
}

void	Phonebook::add_contact( std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret )
{
	this->contact[this->get_index() % 8].set_first_name(first_name);
	this->contact[this->get_index() % 8].set_last_name(last_name);
	this->contact[this->get_index() % 8].set_nickname(nickname);
	this->contact[this->get_index() % 8].set_phone_number(phone_number);
	this->contact[this->get_index() % 8].set_darkest_secret(darkest_secret);
	this->set_index(this->get_index() + 1);
	std::cout << std::endl << "New contact sucessfully created" << std::endl << std::endl;
}

std::string		Phonebook::return_formatted_string(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 10) + ".";
	else
		return str;
}

int	Phonebook::display_phonebook( void ) const
{
	int		j;
	int		max;

	max = this->get_index();
	if (max == 0)
	{
		std::cout << "Sorry, it seems your contact list is empty. No friends found. Exiting SEARCH mode." << std::endl;
		return 1;
	}
	std::cout << "|------------------------------------------------|" << std::endl;
	std::cout << "|  Index  | First Name |  Last Name |  Nickname  |" << std::endl;
	std::cout << "|------------------------------------------------|" << std::endl;
	j = 0;
	while (j < 8 && j < max)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(5) << j << "    ";
		std::cout << "| " << std::setfill(' ') << std::setw(10) << this->return_formatted_string(this->contact[j].get_first_name());
		std::cout << "| " << std::setfill(' ') << std::setw(10) << this->return_formatted_string(this->contact[j].get_last_name());
		std::cout << "| " << std::setfill(' ') << std::setw(10) << this->return_formatted_string(this->contact[j].get_nickname()) << "|" << std::endl;

		j++;
	}
	return 0;
}

void	Phonebook::display_contact( int i ) const
{
	std::cout << "Requesting contact number " << i << "..." << std::endl;
	std::cout << "Displaying contact:" << std::endl;
	std::cout << "FIRST NAME    : " << this->contact[i].get_first_name() << std::endl;
	std::cout << "LAST NAME     : " << this->contact[i].get_last_name() << std::endl;
	std::cout << "NICKNAME      : " << this->contact[i].get_nickname() << std::endl;
	std::cout << "PHONE NUMBER  : " << this->contact[i].get_last_name() << std::endl;
	std::cout << "DARKEST SECRET: " << this->contact[i].get_darkest_secret() << std::endl;
	return ;
}