#include "Player.hpp"
#include <random>

Player::Player()
: attributes {10, 10, 10}
, health {100}
{
}

bool Player::get_hurt( int damage )
{
	health -= damage;
	return true;
}

bool Player::roll( attributes_t attrib, int minimum )
{
	const int roll {std::rand() % attributes [attrib]};
	//xp up
	++attributes [attrib];
	return roll > minimum;
}
