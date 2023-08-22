#include<iostream>
using namespace std;
class demo{
	public:
	demo(int age,string name){
		cout<<"This is your age="<<age<<"\n"<<"This is your name="<<name<<"\n"<<"?";
	}
};
int main()
{
	demo(23,"Ronak");
}

