#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* n_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        n_horde[i].setName(name);
    }
    return n_horde;
}