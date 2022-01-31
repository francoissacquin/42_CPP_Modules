#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
#	include <iostream>
#	include <iomanip>

class Phonebook
{
private:
	Contact		contact[8];
	int			_index;

public:
	Phonebook( void );
	~Phonebook( void );
	int		get_index( void ) const;
	void	set_index( int i );
	void	add_contact( std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret );
	int		display_phonebook( void ) const;
	std::string	return_formatted_string( std::string str) const;
	void	display_contact( int i ) const;
};


# endif
