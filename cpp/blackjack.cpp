#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iomanip>
#include "card.h"
#include "shoe.h"



int main()
{
    Shoe shoe{1};

    while(shoe.remaining()) {
        std::cout << shoe.deal() << " Remaining: " << shoe.remaining() << std::endl;
    }
}
