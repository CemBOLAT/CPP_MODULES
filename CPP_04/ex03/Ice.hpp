#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const & src);
		Ice & operator=(Ice const & rhs);

		virtual ~Ice() {}
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
