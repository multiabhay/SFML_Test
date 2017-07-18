

#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{

  sf::RenderWindow window(sf::VideoMode(1280,720), "What the hell");
  sf::Event e;

  // a circle
  sf::CircleShape circle;
  circle.setRadius(30);
  circle.setOrigin(30,30);
  circle.setFillColor(sf::Color::Red);
  circle.setPosition(640,380);
  //a rect
  sf::RectangleShape rect(sf::Vector2f(200,10));
  rect.setFillColor(sf::Color::White);
  rect.setOrigin(rect.getSize() * 0.5f);
  rect.setPosition(640,380);

  while(window.isOpen())
  {
    while(window.pollEvent(e))
    {
      if(e.type == sf::Event::Closed)
      {
        window.close();
      }
    }

    //update
    rect.rotate(0.1);

    window.clear();
    window.draw(circle);
    window.draw(rect);
    window.display();
  }

  return EXIT_SUCCESS;

}
