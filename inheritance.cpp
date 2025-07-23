#include <iostream>
using namespace std;
class vehicle{
protected:
string name="vehicle";
public:
void start(){
	cout<<"vehicle is starting"<<endl;
	
}
};
class birk:public vehicle{
	
};
int main ()	{
	birk mybirk;
	mybirk.start();
	return 0;
}

	
	
	
	
	
	
	
	

