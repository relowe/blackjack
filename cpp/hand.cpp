#include <iostream>
#include <iomanip>
#include <vector>
#include "hand.h"

Hand::Hand(const Card &down, const Card &up)
{
    _hard = 0;
    _soft = 0;
    _revealed = false;

    hit(down);
    hit(up);
}


// get / set revealed status
bool Hand::revealed() const
{
    return _revealed;
}


void Hand::revealed(bool _revealed)
{
    this->_revealed = _revealed;
}


// get best point value
int Hand::point() const
{
    if(_soft) {
        return _soft;
    }

    return _hard;
}

// get the hard value (with aces 1)
int Hand::hard() const
{
    return _hard;
}


// get soft value (zero if soft busts or no ace)
int Hand::soft() const
{
    return _soft;
}

//receive a hit
void Hand::hit(const Card &card)
{
    _cards.push_back(card);
    // TODO score
}


//const iterators for observing hand
std::vector<Card>::const_iterator Hand::begin() const
{
    return _cards.begin();
}


std::vector<Card>::const_iterator Hand::end() const
{
    return _cards.end();
}


// Insertion operator to print a hand
std::ostream& operator<<(std::ostream &os, const Hand &hand);
