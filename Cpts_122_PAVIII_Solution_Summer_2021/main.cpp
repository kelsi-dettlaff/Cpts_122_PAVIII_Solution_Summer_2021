#include "CrazyEightDef.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        CE_Phase game_phase = Phase_Init;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)

                window.close();
        }
        window.clear();

        //start new game session(init game class here)
        game_phase = Phase_In_Menu;

        //game phase switch
        switch (game_phase)
        {
        case Phase_In_Menu:
            /* Phase_In_Menu Action */
            //1. draw game background
            //2. draw game title/play button etc..(optional)
            //3. if player click play button, then move to the next round
            break;

        case Phase_FirstRound:
            /* Phase_FirstRound Action */
            //1. draw game background
            //2. init the deck(random 52 cards)
            //3. dispatch cards for each 4 players in total 20 cards
            //4. drop additional cards to desk for start the next round
            break;

        case Phase_SecondRound:
            /* Phase_SecondRound Action */
            //1. draw game background
            //2. start from player 1 to drop cards on the desk, detecte which cards can be dropped to desk(by face? by numbers?)
            //3. if player drop nothing, get 1 cards from deck and go back to step 2.
            //4. after player clicked next, trigger the win condition check-in(detecte how many cards the player still have)
            break;
        
        default:
            std::cout<<"UnKnown Game Phase!"<< std::endl;
            window.close();
            break;
        }


        window.draw(shape);  //draw test
        window.display();
    }

    return 0;
}
