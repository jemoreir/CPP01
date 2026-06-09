#include "Zombie.hpp"

int main(void)
{
    Zombie* z1 = newZombie("Jean");
    z1->announce();
    delete z1;

    randomChump("Barbara");
}