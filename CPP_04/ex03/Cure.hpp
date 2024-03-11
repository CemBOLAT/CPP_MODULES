/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:44:14 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 13:44:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);


		virtual ~Cure() {}
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
