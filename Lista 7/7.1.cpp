#include<SFML\Window.hpp>
#include<SFML\Graphics.hpp>

int main()
{
	int keyonoff = 1;
	const int n = 5; //sta³a N
	const int a = 800, b = 600, r = 20.f; // 1.wartoœæ r = 150 - ko³o to 1/4 ekranu, 2. Sta³e
	const float g = 0.0001;
	//próba stworzenia tablic

	//float x[n] = { a / 2 - r, 100, 300, 200, 250 }; 
	//float y[n] = { b / 2 - r, 200, 300, 100, 250 };

	//float vx[n] = { 0.05, 4, 0.002, 0.03, 0.5 };
	//float vy[n] = { 0.05, 2, 0.006, 0.4, 0.08 };
	float x = a / 2 - r; //x i y kó³ka wyznaczone aby by³o wycentrowane
	float y = b / 2 - r;
	float vx = 0.05;
	float vy = 0.05;
	int dt = 0;
	
	sf::RenderWindow window(sf::VideoMode(a, b), "Nasze Okno");
	sf::CircleShape kolo(r);
	kolo.setFillColor(sf::Color::Red);
	

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
			if (event.type == sf::Event::KeyPressed) //4. ESC zamyka program
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
			window.draw(kolo);
			//for (int i = 0; i < n; i++)
			//{
				kolo.setPosition(x,y); //3. setposition
				if ((x <= 0) || (x >= (a - (2*r)))) //5 i 6 - poruszanie siê kó³ka oraz odbijanie od œcian
				{
					vx *= -1;
				}
				if ((y <= 0) || (y >= (b - (2 * r))))
				{
					vy *= -1;
				}
				x += vx;
				y += vy;
				vy += g; //Grawitacja dzia³a 8.
			//}
		}

		window.display();
	}
	return 0;
}
// Do dokonczenia i do opisania.