/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/11 12:50:15 by tklouwer      #+#    #+#                 */
/*   Updated: 2023/05/11 13:26:21 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
        
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};

#endif // SCAVTRAP.HPP