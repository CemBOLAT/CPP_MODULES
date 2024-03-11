#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _materias[4];
	public:
		Character();
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		virtual ~Character();

		Character(std::string const & name);

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


		std::string const & getName() const;
		void setName(const std::string &name);
};

#endif
