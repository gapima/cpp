#include "Zombie.hpp"

int main() {
    int numZombies = 5;
    Zombie* horde = zombieHorde(numZombies, "HordeZombie");

    for (int i = 0; i < numZombies; i++) {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}