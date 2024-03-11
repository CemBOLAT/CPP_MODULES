#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_materias[0] = NULL;
	_materias[1] = NULL;
	_materias[2] = NULL;
	_materias[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	_materias[0] = src._materias[0];
	_materias[1] = src._materias[1];
	_materias[2] = src._materias[2];
	_materias[3] = src._materias[3];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	_materias[0] = rhs._materias[0];
	_materias[1] = rhs._materias[1];
	_materias[2] = rhs._materias[2];
	_materias[3] = rhs._materias[3];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materias[i] && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (NULL);
}


