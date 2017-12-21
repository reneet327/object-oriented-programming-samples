#include <iostream>
#include <string>

using namespace std;

class Character
{
public:
	Character(int height = 0, int weight = 0);
	void DoAction();
protected:
	int height;
	int weight;
};

Character::Character(int height, int weight)
{
	this->height = height;
	this->weight = weight;
}

void Character::DoAction()
{
	cout << "Character " << height << " " << weight << endl;
}

class Zombie : public Character
{
public:
	Zombie(int height, int weight, bool got_arms=true);
	void DoAction();
private:
	bool got_arms;
};

Zombie::Zombie(int height, int weight, bool got_arms)
:
Character(height, weight)
{
	this->got_arms = got_arms;
}

void Zombie::DoAction()
{
	std::cout << "Eat Brains.." << height << " " << weight << endl;
	if (got_arms)
		cout << "I have arms!!!" << endl;
}
int main()
{
	Character c1;
	c1.DoAction();

	Zombie z1(72, 233, false);
	z1.DoAction();

	return 0;
}



