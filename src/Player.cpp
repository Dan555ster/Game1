#include "Player.hpp"
#include <random>
Player::Player()
: attributes {10, 10, 10}
, health {100}
{
}

bool Player::get_hurt (int damage){
    health -= damage;
    return true;
}

bool Player::roll (attributes_t a, int minimum){

    const auto roll {std::rand() % attributes [a]};
    //xp up
    ++attributes [a];
    return roll > minimum;
}
