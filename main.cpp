//  Unicode by Sapiensy for RedDragons
//
//  Ch'tit programme pour connaitre le code et l'unicode de l'event
//
//  Bibliotheque : SMLF 2.0
//
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

using namespace std;

int main()
{
    sf::RenderWindow App;
    App.create(sf::VideoMode(50, 30, 32), "Press any key !", sf::Style::Titlebar);

    sf::Event event;

    while(App.isOpen())
    {
        App.clear(sf::Color::Black);

        while(App.waitEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    App.close();
                    break;
                case sf::Event::KeyPressed:
                    cout << "Code de l'event : " << event.key.code << endl;
                    if(event.key.code == sf::Keyboard::Escape)
                        App.close();
                    break;
                case sf::Event::TextEntered:
                    cout << "Unicode de l'event : " << event.text.unicode << endl;
                    break;
                default:
                    break;
            }
        }

        App.display();
    }

    return 0;
}
