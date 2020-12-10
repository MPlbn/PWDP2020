#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>

int main()
{
	int keyonoff = 1;
	const int n = 5;
	const int a = 800, b = 600, r = 150.f;
	float x[n] = { a / 2 - r, 100, 300, 200, 250 };
	float y[n] = { b / 2 - r, 200, 300, 100, 250 };

	float vx[n] = { 0.05, 4, 0.002, 0.03, 0.5 };
	float vy[n] = { 0.05, 2, 0.006, 0.4, 0.08 };

	sf::RenderWindow window(sf::VideoMode(a, b), "Nasze Okno");
	sf::VertexArray shapes(sf::CircleShape);
	
	shapes.setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			if (event.type == sf::Event::KeyPressed)
			{
				keyonoff = 1 - keyonoff;
			}
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}
			}
		}

		window.clear(sf::Color::Black);

		if (keyonoff)
		{
			window.draw(shapes);
			for (int i = 0; i < n; i++)
			{
				shapes.setPosition(x[i],y[i]);
				if ((x[i] <= 0) || (x[i] >= (a - (2 * r))))
				{
					vx[i] *= -1;
				}
				if ((y[i] <= 0) || (y[i] >= (b - (2 * r))))
				{
					vy[i] *= -1;
				}
				x[i] += vx[i];
				y[i] += vy[i];
			}
		}

		window.display();
	}
	return 0;
}
// Do dokonczenia i do opisania.