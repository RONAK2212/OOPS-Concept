/*
Over loading
Method are same but using parameter are diffirent.
*/
#include<iostream>
using namespace std;
class person{
public:
	void age(int age){
		cout<<"This is your age\t"<<age<<"\n";
	}
	void age(string name){
		cout<<"This is your name \t"<<name<<"\n";
	}
	};
	
	int main(){
		person obj;
		obj.age(23);
		obj.age("Ronak");
	}
