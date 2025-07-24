#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter two numbers:";
cin>>a>>b;
try{
	if(b==0){
	throw"you can't divide by zero";
		
	}
	
cout<<"result:"<<a/b<<endl;	
	
	
}	
catch(const char*errorMsg){
	
	cout<<"errrorMsg"<<errorMsg<<endl;
}	
return 0;	
	
	
}