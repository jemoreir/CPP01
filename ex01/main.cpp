#include "Zombie.hpp"

int main(void)
{
    Zombie* horde = zombieHorde(HORDENUM, "Jean");
    for(int i = 0; i < HORDENUM; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}