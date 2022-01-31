#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
	this->_target = "[no target defined]";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Typed constructor called (ShrubberyCreationForm)" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form(src)
{
	std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "Default destructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( const ShrubberyCreationForm & rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

void								ShrubberyCreationForm::executeForm( void ) const
{
	std::string		filename;
	filename = this->_target + "_shrubbery";
	std::ofstream	ofs(filename.c_str());
	ofs << "     _\\/_          _\\/_     " << std::endl;
    ofs << "      /\\            /\\      " << std::endl;
	ofs << "      /\\            /\\      " << std::endl;
    ofs << "     /  \\          /  \\     " << std::endl;
    ofs << "     /~~\\o         /~~\\o     " << std::endl;
	ofs << "    /o   \\        /o   \\     " << std::endl;
	ofs << "   /~~*~~~\\      /~~*~~~\\    " << std::endl;
	ofs << "  o/    o \\     o/    o \\    " << std::endl;
	ofs << "  /~~~~~~~~\\~`  /~~~~~~~~\\~` " << std::endl;
	ofs << " /__*_______\\  /__*_______\\  " << std::endl;
	ofs << "      ||            ||       " << std::endl;
	ofs << "    \\====/        \\====/     " << std::endl;
	ofs << "     \\__/          \\__/      " << std::endl;
	ofs << "Some cool happy christmas trees :D" << std::endl;
	ofs.close();
}

Form *								ShrubberyCreationForm::clone( std::string target )
{
	Form *	clone = new ShrubberyCreationForm(target);
	return clone;
}
