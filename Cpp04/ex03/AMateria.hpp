#pragma once
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		bool	_active;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & cpy);
		virtual	~AMateria(void);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		void	disable(void);
		void	enable(void);
		bool	isActive(void);

		AMateria &	operator=(AMateria const & asn);
	private:
		AMateria(void);
};
