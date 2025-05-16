#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

void ZombieEvent::setZombieType(std::string type) {
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    return new Zombie(name, _type);
}

void ZombieEvent::randomChump() {
    std::
}