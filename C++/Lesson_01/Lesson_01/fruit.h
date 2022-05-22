#pragma once

typedef enum Color {RED, YELLOW, ORANGE, GREEN};

class Fruit
{
	private:
		char* name;
		Color color;
		float weight;

	public:
		const char* getName();
		Color getColor();
		float getWeight();

};


