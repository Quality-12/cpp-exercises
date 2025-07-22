#include <iostream>
using namespace std;

struct student{
	string name;
	int age;
};
int main(){



student s1;
student s2;
s1.name="selam";
s2.name="hana";

s1.age =11;
s2.age =10;
cout<<s1.name<<"is"	<<s1.age<<"years old.";
cout  <<s2.name<<"is"<<s2.age<<"years old";	



return 0;
}

