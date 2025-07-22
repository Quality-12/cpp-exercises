#include <iostream>
using namespace std;
class bankAccunt{
private:
int balance;
public:
void setbalance(int b){
balance	=b;
}
int getbalace(){
	return balance;

}
};
int main(){
 bankAccunt bruk;
bruk.setbalance(1000000000000000);
cout<<"balance:"<<bruk.getbalace()<<endl;

return 0;
	
}		
		
	









	
	

