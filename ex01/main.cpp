#include "Zombie.hpp"

int main(void)
{
    Zombie* horde = zombieHorde(30, "Jean");
    for(int i = 0; i < 30; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}