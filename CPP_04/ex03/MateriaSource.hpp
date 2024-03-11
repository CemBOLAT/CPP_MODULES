#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[MAX_MATERIA];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & rhs);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};


#endif
