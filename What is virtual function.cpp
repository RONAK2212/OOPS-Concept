/*
what is virtual function and oure virtual function.

virtual function
it is declaredin base class with keywrod "virtual" and redefind in base class.

>virtual function are dynamic.
>they called during runtime.
>virtual function can't be static.
>virtual function can be accesed by pointer or refrence of based class type achive polymorphism(runtime).
>there is only virtual estructor but no vitual constructor.
>most important "virtual" keywrod is the solution to diamond problem.
*/

/*
This is constuctor virtual function.
*/

#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw(){
			cout<<"Drawing a shape"<<"\n";
		}
};
class circle:public shape{
	public:
		virtual void draw(){
			cout<<"Drwaing a circle"<<"\n";
		}
};
int main(){
	circle obj;
	obj.draw();
}
