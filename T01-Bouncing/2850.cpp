#include <iostream>
#include <sl.h>

int main()
{
	slWindow(800, 600, "T01-Bouncing-2850", 0);

	int posX = 400;
	int posY = 300;

	while (!slShouldClose())
	{
		for (posY = 50; posY <= 550; posY++)
		{
			slCircleFill(posX, posY, 50, 25);
			slSetForeColor(1, 0, 0, 1);
			slRender();
		}

		for (posY = 50; posY <= 550; posY++)
		{
			slCircleFill(posX, 600 - posY, 50, 25);
			slSetForeColor(0, 1, 0, 1);
			slRender();
		}
	}

	return 0;
}