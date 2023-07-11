#include <stdlib.h>
#include <SFML/Graphics.hpp>

// Constants
const unsigned int WINDOW_WIDTH  = 800;
const unsigned int WINDOW_HEIGHT = 600;
const char*        WINDOW_TITLE  = "SFML";

int main()
{
  sf::RenderWindow window(
    sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
    WINDOW_TITLE
  );
  window.setTitle(WINDOW_TITLE);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
      {
        window.close();
        break;
      }
    }

    window.clear();
    window.display();
  }

  return EXIT_SUCCESS;
}
