#include <iostream>
#include "Player.hpp"
#include <random>
#include <ctime>

int main( int argc, char ** argv )
{
    std::srand (std:: time (nullptr));
    Player thePlayer;
        if (thePlayer.roll_(Player::STRENGTH, 3)){
            std::cout << "you did it \n";
        }
        return EXIT_SUCCESS;
}
