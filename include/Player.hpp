#pragma once
class Player
{
public:
	enum attributes_t
	{
		WISDOM,
		STRENGTH,
		AGILITY,
		TOTAL
	};

	//no :: on prototype
	Player();
	bool get_hurt( int damage );

	//attributes_t selects which attribute to roll from
	bool roll( attributes_t a, int minimum );
private:
	int attributes[ TOTAL ];

	int health;
};
