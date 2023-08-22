#include<iostream>
#include <string>
using namespace std;
struct demo{
	int sr;
	string name;
	double a,b,c;
	float d,e;
}s1;
main(){
	s1.sr=1;
	s1.name="arjun";
	s1.a=78;
	s1.b=86;
	s1.c=82;
	cout<<s1.sr<<"\t";
	cout<<s1.name<<"\t";
	cout<<s1.a<<"\t";
	cout<<s1.b<<"\t";
	cout<<s1.c<<"\t";
	cout<<s1.a+s1.b+s1.c<<"\t";
	cout<<(s1.a+s1.b+s1.c)*100/300<<"\t";
}


