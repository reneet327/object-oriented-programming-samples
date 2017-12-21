#include <iostream>
#include <string>

using namespace std;


//***************Animal Class********************
class Animal{

	protected:
		string eyeColor;
		string furColor;
	public:
		Animal();
		Animal(string ec, string fc);
		void speak();
		string getEyeColor();
		string getFurColor();
		void setEyeColor(string ec);
		void setFurColor(string fc);

};



//***************Cat Class********************

class Cat : public Animal{

	public:
		Cat();
		Cat(string eyeColor, string furColor);
		void speak();

};

int main(){

	Animal anim1("blue", "black and white");
	anim1.speak();

	Cat Roxie("green", "brown");
	Roxie.speak();



cin.ignore();
return 0;
}


// create methods for Animal class

Animal::Animal(){
	eyeColor = "unkown";
	furColor = "unknown";
}

Animal::Animal(string ec, string fc){
	eyeColor = ec;
	furColor = fc;
}

void Animal::speak(){
	cout<<"I am an animal with " << eyeColor<<" eyes and "<<furColor<< " fur."<<endl;
}

Cat::Cat(){}
Cat::Cat(string ec, string fc){
	eyeColor = ec;
	furColor = fc;
}
void Cat::speak(){
	cout<<"I'm a cat! with "<< eyeColor<< " eyes and "<<furColor<<" fur."<<endl;
}
