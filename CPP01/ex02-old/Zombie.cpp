#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type)
    : _name(name), _type(type) {}

Zombie::~Zombie() {
    std:cout << _name << " the " << _type << " zombie was destryed." << std::endl;
}

void Zombie::announce() const {
    std::cout << _name << " (" << _type << "): BraiiiiiiinnnzzzZ..." << std::endl;
}