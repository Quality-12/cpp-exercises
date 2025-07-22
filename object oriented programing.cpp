#include <iostream>
using namespace std;
class car
{
public:
	string name;
	string color;
	 int price;
};
int main(){
	car car1;
	car1.name="toyota";
	car1.color="blue";
	car1.price=3800000000;
	car car2;
	car2.name="honda civil";
	car2.color="white";
	car2.price=5600000000;
cout<<car1.name<<" is"<<car1.color<<" and"<<car1.price<<" birr."<<endl;	
cout<<car2.name<<" is"<<car2.color<<"  and"<<car2.price<<" birr."<<endl;
return 0;	
}	

