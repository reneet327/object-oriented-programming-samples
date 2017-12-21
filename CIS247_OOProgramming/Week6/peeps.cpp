#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(string name = "unknown", int age = 0)
	{
		this->name = name;
		this->age = age;
	}

	//virtual void SayHi() = 0;
	virtual void SayHi(){ cout << "YO" << endl; }

protected:
	string name;
	int age;
};

class NicePerson : public Person
{
public:
	NicePerson(string name = "unknown", int age = 0, int num_friends=0);
	void SayHi();
private:
	int num_friends;
};

class MeanPerson : public Person
{
public:
	MeanPerson(string name = "unknown", int age = 0) : Person(name, age){}
	void SayHi() { cout << "GRRRRR."<<endl; }
private:
	int num_friends;
};

NicePerson::NicePerson(string name, int age, int num_friends)
:
Person(name, age)
{
	this->num_friends = num_friends;
}

void NicePerson::SayHi()
{
	cout << "Hello I am " << name << " and I have " << num_friends << " friends" << endl;
}

int main()
{
	NicePerson p1("Mary", 22, 500);
	//p1.SayHi();

	MeanPerson p2("Joe", 90);
	//p2.SayHi();

	Person* ptr = &p1;
	ptr->SayHi();

	ptr = &p2;
	ptr->SayHi();

	ptr = new MeanPerson("Jake", 55);
	ptr->SayHi();
	delete ptr;
	ptr = 0;

	return 0;
}