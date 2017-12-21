#include <iostream>
#include <string>

using namespace std;


class Appliance{
	public:
		// create the function to set the variable name as a string
		void setName( string x){
			name=x;
		}

		//create the function to call the variable name
		string getName(){
			return name;
		}
		
		void setColor( string clr){
 			color=clr;
 		}

 		string getColor(){
 			return color;
		 }
	// all variables should be private.  You should only be able to change them through the public functions (methods)
	private:
		string name;
		string color;
};

// now if you want to create an object that uses this class, you call the class first in main()

int main(){

Appliance obj1; // call the class then a space then the name of your object

//now to change the name or the color, you call the functions in the public section of the class by using the name of your object and then a "." then the name of the function passing in the parameters you want.

obj1.setName("iron");
obj1.setColor("blue");

cout<<"My appliance is a  "<<obj1.getColor()<<" " << obj1.getName(); //


cin.ignore(2);
return 0;
}