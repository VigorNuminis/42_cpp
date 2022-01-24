#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10),
_energy_points(10), _attack_damage(0){
	_energy_points = _energy_points + 1 - 1;
	std::cout << "ClapTrap " << _name << " has risen from a pile of"
		" scrap metal." << std::endl;
	return;
}

ClapTrap::~ClapTrap(void){
	std::cout << "The tale of the ClapTrap named " << _name <<
		" ends here..." << std::endl;
	return;
}

void	ClapTrap::attack(std::string const & target) const{
	std::cout << "ClapTrap " << _name << " attacks "
		<< target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead..."
			"Do not play with his body!" << std::endl;
		return;
	}
	if (_hitpoints - (int)amount > 0)
		std::cout << "ClapTrap " << _name << " takes damage for "
			<< amount << " hitpoints, and loses some bolts." << std::endl;
	else if (_hitpoints - (int)amount <= 0)
		std::cout << "ClapTrap " << _name << " dies in an explosion of"
			" bolts and scrap metal" << std::endl;
	_hitpoints -= (int)amount;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitpoints <= 0 && _hitpoints + amount > 0)
		std::cout << "ClapTrap " << _name << " is being revived!!!" <<
			"Thank you ClapTrap god!!!!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is being repaired "
			"for " << amount << " hitpoints." << std::endl;
	_hitpoints += amount;
}

ClapTrap::ClapTrap(void){
	return;
}

ClapTrap::ClapTrap(int){
	return;
}
