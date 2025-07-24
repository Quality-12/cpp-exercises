#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
return  a+b;
	
	
}
 int main (){
cout<<add(3,4)<<endl;//int
cout<<add(3.5,2.1)<<endl;//double
cout<<add(string("hi"),string ("there"))

<<endl;//string
return 0;
 }
