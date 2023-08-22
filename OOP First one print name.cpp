/*
class class_name{
class body
member function
};
main(){
class_name obj;
obj.member_function();
}
*/
#include<iostream>
using namespace std;
class person{  //declearing class
	//public private protected
	public:  //accesspecifer
	void display(){  //member function
		cout<<"This is person class"; // function body
	}
};
int main()
{
	person obj; // creating object
	obj.display(); //calling member function
}
