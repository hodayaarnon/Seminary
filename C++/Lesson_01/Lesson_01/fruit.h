#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <string.h>
typedef enum Color {RED, YELLOW, ORANGE, GREEN, NONE};

class Fruit
{
	private:
		char *name;
		Color color=NONE;
		float weight;

	public:
		/**/

		Fruit(const char* name, Color color = YELLOW);

		Fruit(const char* name, Color color, float weight);

		Fruit(const Fruit& f);
		
		Fruit();
/**/

		const char* getName();
		Color getColor();
		float getWeight();

		void setName(const char* name);
		void setColor(Color color);
		void setWeight(float weight);


		~Fruit();

};

