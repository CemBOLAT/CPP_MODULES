/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:09:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/27 14:50:01 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	std::cout << "--------Test 1-------------" << std::endl;
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        try{
            Bureaucrat b("Bender", 1);
            b.signForm(*rrf);
            b.executeForm(*rrf);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        delete rrf;
    }
    std::cout << "--------Test 2-------------" << std::endl;
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        try {
            Bureaucrat b("Bender", 1);
            b.signForm(*rrf);
            b.executeForm(*rrf);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        delete rrf;
    }
    std::cout << "--------Test 3-------------" << std::endl;
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        try {
            Bureaucrat b("Bender", 1);
            b.signForm(*rrf);
            b.executeForm(*rrf);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        delete rrf;
    }
}
