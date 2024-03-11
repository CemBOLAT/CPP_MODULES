#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character() : ICharacter()
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(std::string const & name) : ICharacter() , _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(Character const & src) : ICharacter(src)
{
	*this = src;
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i])
				this->_materias[i] = rhs._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::setName(const std::string &name)
{
	this->_name = name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
		this->_materias[idx]->use(target);
}

