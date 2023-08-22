#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw()=0;//Pure vrtual function.
};
class circle:public shape{
	public:
		void draw(){
			cout<<"This is circle class"<<"\n";
		}
};
class square:public circle{
	public:
		void draw(){
			cout<<"This is square class"<<"\n";
		}
};
int main(){
	circle obj;
	obj.draw();
	obj.draw();
}


