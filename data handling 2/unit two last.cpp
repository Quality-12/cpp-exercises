#include<iostream>
using namespace std;
int main(){
int age;
cout<<"enter the age:";
cin>>age;
try{
	if(age<0 ,age>150){
	throw"you can't find this age";
		
	}
	
cout<<"age:"<< age<<endl;	
	
	
}	
catch(const char*errorMsg){
	
	cout<<"errrorMsg"<<errorMsg<<endl;
}	
return 0;	
	
	
}