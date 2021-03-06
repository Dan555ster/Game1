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

    Player();
    bool get_hurt (int damage);

    bool roll(attributes_t a, int minimum);
private:
    int attributes[TOTAL];
    int health;
};
