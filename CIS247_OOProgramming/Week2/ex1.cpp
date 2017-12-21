#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	int GetAge(){ return age; }
	void SetAge(int a){ age = a; }

	string GetName(){ return name; }
	void SetName(string n){ name = n; }

private:
	//private data members
	int age;
	string name;
};





void SayHello(); //Prototype
string GetAge();

int main()
{
	Person per1; //After this is executed, an object exists
	Person per2;

	string A = GetAge();
	int age = atoi(A.c_str());

	per1.SetAge(age);
	per1.SetName("Susan");

	per2.SetAge(55);
	per2.SetName("Bob");

	cout << "Hello " << per1.GetName() << ".  You are " << per1.GetAge() << " years old." << endl;
	cout << "Hello " << per2.GetName() << ".  You are " << per2.GetAge() << " years old." << endl;
	
	//age++;
	//cout << "In one year you will be" << age << " years old." << endl;
	//SayHello();

	getchar();
	return 0;
}

void SayHello()
{
	cout << "Hello There" << endl;
}

string GetAge()
{
	string age;
	cin >> age; //You want a getline here
	return age;
}