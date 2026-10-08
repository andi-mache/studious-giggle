#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode( { 200, 200 } ), "SFML works!" );
	sf::CircleShape shape( 100.f );
	shape.setFillColor( sf::Color::Red );
	shape.setOutlineThickness(10.f);
	shape.setOutlineColor(sf::Color(250, 150, 100));

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.draw( shape );
		window.display();
	}
}
