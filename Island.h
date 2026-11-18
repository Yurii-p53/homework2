#pragma once

#include <cstdlib>
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

constexpr int FIELD_SIZE = 20;

struct Position
{
	int x;
	int y;

	Position(int x = 0, int y = 0)
		: x(x), y(y)
	{
	}
};

class Animal
{
public:
	Position position;
	bool alive;

	Animal(Position position)
		: position(position), alive(true)
	{
	}

	virtual ~Animal() = default;

	virtual void move() = 0;

protected:
	void randomMove()
	{
		int dx[9] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
		int dy[9] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };

		int n = rand() % 9;

		int newX = position.x + dx[n];
		int newY = position.y + dy[n];

		if (newX >= 0 && newX < FIELD_SIZE &&
			newY >= 0 && newY < FIELD_SIZE)
		{
			position.x = newX;
			position.y = newY;
		}
	}
};

class Rabbit : public Animal
{
public:

	Position position;

	Rabbit(Position position)
		: Animal(position)
	{
	}

	void move() override
	{
		randomMove();
	}

	void NewRabbits()
	{
		if (alive)
		{
			int chance = rand() % 100;
			if (chance < 10) 
			{
				Rabbit newRabbit(position);
			}
		}
	}
	
};

class Wolf : public Animal
{
public:
	double points;

	Wolf(Position position)
		: Animal(position), points(10.0)
	{
	}


	


	virtual void hunt(vector<Rabbit>& rabbits) = 0;
protected:
	void eatRabbit(vector<Rabbit>& rabbits)
	{
		bool found = false;

		for (int i = 0; i < rabbits.size(); i++)
		{
			if (rabbits[i].alive &&
				rabbits[i].position.x == position.x &&
				rabbits[i].position.y == position.y)
			{
				rabbits[i].alive = false;
				points += 3.0;
				found = true;
				break;
			}
		}

		if (!found)
		{
			points -= 0.1;
		}

		if (points <= 0)
		{
			alive = false;
		}
	}

	

};

class WolfFemale : public Wolf
{
public:
	WolfFemale(Position position)
		: Wolf(position)
	{
	}

	void move() override
	{
		randomMove();
	}

	void hunt(vector<Rabbit>& rabbits) override
	{
		eatRabbit(rabbits);
	}

	void NewWolves()
	{
		if (alive)
		{
			int chance = rand() % 100;
			if (chance < 5)
			{
				WolfFemale newWolf(position);
			}
		}
	}
};

class MaleWolf : public Wolf
{
public:
	MaleWolf(Position position)
		: Wolf(position)
	{
	}

	void move() override
	{
		randomMove();
	}

	void hunt(vector<Rabbit>& rabbits) override
	{
		eatRabbit(rabbits);
	}

	void NewWolves()
	{
		if (alive)
		{
			int chance = rand() % 100;
			if (chance < 5)
			{
				MaleWolf newWolf(position);
			}
		}
	}
};

class Island
{
	vector<Rabbit> rabbits;
	vector<WolfFemale> femaleWolves;
	vector<MaleWolf> maleWolves;

public:
	Island()
	{
		for (int i = 0; i < 30; i++)
		{
			rabbits.push_back(
				Rabbit(Position(
					rand() % FIELD_SIZE,
					rand() % FIELD_SIZE
				))
			);
		}

		for (int i = 0; i < 5; i++)
		{
			femaleWolves.push_back(
				WolfFemale(Position(
					rand() % FIELD_SIZE,
					rand() % FIELD_SIZE
				))
			);

			maleWolves.push_back(
				MaleWolf(Position(
					rand() % FIELD_SIZE,
					rand() % FIELD_SIZE
				))
			);
		}
	}

	void step()
	{
		for (int i = 0; i < rabbits.size(); i++)
		{
			if (rabbits[i].alive)
			{
				rabbits[i].move();
			}

			if (rabbits[i].alive != true)
			{
				rabbits[i].NewRabbits();
			}
		}

		for (int i = 0; i < femaleWolves.size(); i++)
		{
			if (femaleWolves[i].alive)
			{
				femaleWolves[i].move();
				femaleWolves[i].hunt(rabbits);
			}
			if (femaleWolves[i].alive != true)
			{
				femaleWolves[i].NewWolves();
			}
		}

		for (int i = 0; i < maleWolves.size(); i++)
		{
			if (maleWolves[i].alive)
			{
				maleWolves[i].move();
				maleWolves[i].hunt(rabbits);
			}

			if (maleWolves[i].alive != true)
			{
				maleWolves[i].NewWolves();
			}
		}
	}

	void displayInfo()
	{
		int aliveRabbits = 0;
		int aliveFemaleWolves = 0;
		int aliveMaleWolves = 0;

		for (const Rabbit& rabbit : rabbits)
		{
			if (rabbit.alive)
			{
				aliveRabbits++;
			}
		}


		for (const WolfFemale& wolf : femaleWolves)
		{
			if (wolf.alive)
			{
				aliveFemaleWolves++;
			}
		}

		for (const MaleWolf& wolf : maleWolves)
		{
			if (wolf.alive)
			{
				aliveMaleWolves++;
			}
		}

		cout << "\x1B[H";

		   

		for (int y = 0; y < FIELD_SIZE; y++)
		{
			for (int x = 0; x < FIELD_SIZE; x++)
			{
				char symbol = '.';

				for (const Rabbit& rabbit : rabbits)
				{
					if (rabbit.alive &&
						rabbit.position.x == x &&
						rabbit.position.y == y)
					{
						symbol = 'R';
					}

					
				}

				for (const WolfFemale& wolf : femaleWolves)
				{
					if (wolf.alive &&
						wolf.position.x == x &&
						wolf.position.y == y)
					{
						symbol = 'F';
					}
				}

				for (const MaleWolf& wolf : maleWolves)
				{
					if (wolf.alive &&
						wolf.position.x == x &&
						wolf.position.y == y)
					{
						symbol = 'M';
					}
				}

				cout << "[" << symbol << "]";
			}

			if (y == 0)
			{
				cout << "       Alive rabbits: " << aliveRabbits;
			}
			else if (y == 1)
			{
				cout << "       Female wolves: " << aliveFemaleWolves;
			}
			else if (y == 2)
			{
				cout << "       Male wolves: " << aliveMaleWolves;
			}
			else if (y == 4)
			{
				cout << "       R - rabbit";
			}
			else if (y == 5)
			{
				cout << "       F - female wolf";
			}
			else if (y == 6)
			{
				cout << "       M - male wolf";
			}
			else if (y == 7)
			{
				cout << "       . - empty field";
			}

			cout << "                         \n";
		}


		cout << "\n";
		cout.flush();
	}

	void start()
	{
		cout << "\x1B[2J";
		cout << "\x1B[H";

		while (true)
		{
			step();
			displayInfo();
			Sleep(300);
		}
	}
};