#include<iostream>
using namespace std;
class demo{
	public:
		void see(){
			cout<<"This is demo class\n";
		}
};

class b:public demo{
	public:
		void display(){
			cout<<"\nThis is class b\n";
		}
};

class c:public demo{
	public:
		void display1(){
			cout<<"\n This is class c \n";
		}
};

int main(){
	b obj;
	c obj1;
	obj.see();
	obj.display();
	cout<<"\n---------------------------------------------------\n";
	obj1.see();
	obj1.display1();
}
