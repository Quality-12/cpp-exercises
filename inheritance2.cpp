#include <iostream>
using namespace std;
class animal{
protected:
string name="animal";
public:

void speak(){
	cout<<name<<" makes sound"<<endl;
	
}
};
class cat:public animal{
	public:
	string home="cat";		
		void meow(){
	cout<<home<<" says meow"<<endl;		
			
		}
	
};
class dog:public animal{
	
public:
string city="dog";

void bark(){
	cout<<city<<" says bark"<<endl;
}
	
};


int main ()	{
	cat c;
	dog d;
	c.speak();
	c.meow();
	d.bark();
	return 0;
}

	
	
	
	
	
	
	
	

