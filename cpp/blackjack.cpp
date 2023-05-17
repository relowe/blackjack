#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iomanip>
#include "card.h"
#include "shoe.h"
#include "hand.h"



int main()
{
    Shoe shoe{3};
    Hand player{shoe.deal(), shoe.deal()}, dealer{shoe.deal(), shoe.deal()};

    player.revealed(true);

    while(player.point() < 21) {
        std::cout << "Dealer: " << dealer << std::endl;
        std::cout << "You: " << player << std::endl;
        player.hit(shoe.deal());
    }
        std::cout << "Dealer: " << dealer << std::endl;
        std::cout << "You: " << player << std::endl;
}
