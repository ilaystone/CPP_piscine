/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhadem <ikhadem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:51:25 by ikhadem           #+#    #+#             */
/*   Updated: 2021/10/15 08:20:43 by ikhadem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", 145, 137, false)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
Form("ShrubberyCreationForm", 145, 137, false),
_target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

void		ShrubberyCreationForm::action(void) const
{
	std::ofstream	outfile;

	outfile.open(this->_target + "_shrubbery", std::ios::out | std::ios::app);
	outfile << "            .        +          .      .          ." << std::endl;
	outfile << "     .            _        .                    ." << std::endl;
	outfile << "  ,              /;-._,-.____        ,-----.__" << std::endl;
	outfile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
	outfile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
	outfile << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
	outfile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
	outfile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
	outfile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
	outfile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
	outfile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
	outfile << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
	outfile << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
	outfile << "                    \\::.  :\\/:'  /              +" << std::endl;
	outfile << "   .                 `.:.  /:'  }      ." << std::endl;
	outfile << "           .           ):_(:;   \\           ." << std::endl;
	outfile << "                      /:. _/ ,  |" << std::endl;
	outfile << "                   . (|::.     ,`                  ." << std::endl;
	outfile << "     .                |::.    {\\" << std::endl;
	outfile << "                      |::.\\  \\ `." << std::endl;
	outfile << "                      |:::(\\    |" << std::endl;
	outfile << "              O       |:::/{ }  |                  (o" << std::endl;
	outfile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
	outfile << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
	outfile << "      ~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~" << std::endl;
	outfile.close();
	return ;
}
