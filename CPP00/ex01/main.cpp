# include <iostream>
# include <stdlib.h>
# include "Phonebook.hpp"
# include "Contact.hpp"

std::string		protected_getline( void )
{
	std::string	input;

	std::getline(std::cin, input);
	if (std::cin.eof() == 1)
	{
		std::cout << "Hey that's rude! (•̀o•́)ง. I'm out of here!" << std::endl;
		exit(0);
	}
	return input;
}

int		user_approval(int i)
{
	std::string		user_approval;

	if (i > 7)
	{
		std::cout << "Warning, phonebook is at maximum capacity. Adding a new contact will delete oldest one." << std::endl;
		std::cout << "Do you still wish to proceed? (yes/no) :";
		user_approval = protected_getline();
		if (user_approval == "yes")
			return 0;
		else if (user_approval == "no")
			return 1;
		else
		{
			std::cout << "I can't understand, sorry" << std::endl;
			return 1;
		}
	}
	return 0;
}

int		main()
{
	Phonebook		book;
	int				exit_flag;
	std::string		input;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;

	std::cout << "\033[32m--------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "#     #                                                                                  ######                                                         " << std::endl;
	std::cout << "#  #  # ###### #       ####   ####  #    # ######   #####  ####    ##### #    # ######   #     # #    #  ####  #    # ###### #####   ####   ####  #    #" << std::endl;
	std::cout << "#  #  # #      #      #    # #    # ##  ## #          #   #    #     #   #    # #        #     # #    # #    # ##   # #      #    # #    # #    # #   # " << std::endl;
	std::cout << "#  #  # #####  #      #      #    # # ## # #####      #   #    #     #   ###### #####    ######  ###### #    # # #  # #####  #####  #    # #    # ####  " << std::endl;
	std::cout << "#  #  # #      #      #      #    # #    # #          #   #    #     #   #    # #        #       #    # #    # #  # # #      #    # #    # #    # #  #  " << std::endl;
	std::cout << "#  #  # #      #      #    # #    # #    # #          #   #    #     #   #    # #        #       #    # #    # #   ## #      #    # #    # #    # #   # " << std::endl;
	std::cout << " ## ##  ###### ######  ####   ####  #    # ######     #    ####      #   #    # ######   #       #    #  ####  #    # ###### #####   ####   ####  #    #" << std::endl;
	std::cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------\033[0m" << std::endl << std::endl;
	exit_flag = 1;
	while (exit_flag)
	{
		std::cout << "\033[33mPlease enter one of the following : ADD, SEARCH, EXIT\033[0m" << std::endl;
		std::cout << ">";
		input = protected_getline();
		if (input == "ADD")
		{
			if (user_approval(book.get_index()) == 1)
				std::cout << "Returning to phonebook..." << std::endl;
			else
			{
				std::cout << "Please enter the FIRST NAME of the new contact." << std::endl << ">";
				first_name = protected_getline();
				std::cout << std::endl << "Please enter the LAST NAME of the new contact." << std::endl << ">";
				last_name = protected_getline();
				std::cout << std::endl << "Please enter the NICKNAME of the new contact." << std::endl << ">";
				nickname = protected_getline();
				std::cout << std::endl << "Please enter the PHONE NUMBER of the new contact." << std::endl << ">";
				phone_number = protected_getline();
				std::cout << std::endl << "Please enter the DARKEST SECRET of the new contact." << std::endl << ">";
				darkest_secret = protected_getline();

				book.add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
			}
		}
		else if (input == "SEARCH")
		{
			if (book.display_phonebook() == 0)
			{
				std::cout << std::endl << "Please enter the index of the contact you would like to view (0 <= index <= 7):" << std::endl << ">";
				input = protected_getline();
				if (input.length() != 1 || input[0] > '7' || input[0] < '0' || input[0] >= (book.get_index() + 48))
					std::cout << "Sorry, no contact found for this index. Exiting SEARCH mode." << std::endl;
				else
					book.display_contact(input[0] - 48);
			}
		}
		else if (input == "EXIT")
			exit_flag = 0;
		else
			std::cout << "Incorrect input, try again" << std::endl;
	}
	std::cout << "Quitting phonebook, all contacts are lost" << std::endl;
	std::cout << "Bye Bye" << std::endl;
	return 0;
}
