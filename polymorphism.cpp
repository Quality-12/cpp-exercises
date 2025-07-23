#include <iostream>
using namespace std;
class fruit{
public:
void show(){
cout <<"this is fruit"<<endl;
}
	
};
class apple:public fruit{
	public:
		void taste(){
			cout<<"apple tastes sweet"<<endl;
			
		}
};
	
class banana	:public fruit{
	public:
		void taste(){
			cout<<"banana tastes sweet and soft"<<endl;
			
			
		}
};
int main(){
	apple myapple;
	banana mybanana;
	myapple.show();
	myapple.taste();
	mybanana.show();
	mybanana.taste();
	return 0;
}	
	
	
	
