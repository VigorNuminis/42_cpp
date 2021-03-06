#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type),
_active(true){
	return;
}

AMateria::AMateria(AMateria const & cpy) : _type("unknown"){
	_active = cpy._active;
}

std::string const &	AMateria::getType(void) const{
	return _type;
}

void	AMateria::use(ICharacter & target){
	std::cout << "* does some magic on " << target.getName() << " *" << std::endl;
	return;
}

AMateria::AMateria(void) : _type("ERROR"){
	return;
}

AMateria::~AMateria(void){
	return;
}

void	AMateria::disable(void){
	_active = false;
	return;
}

void	AMateria::enable(void){
	_active = true;
	return;
}

bool	AMateria::isActive(void){
	return _active;
}

AMateria &	AMateria::operator=(AMateria const & asn){
	_active = asn._active;

	return *this;
}
