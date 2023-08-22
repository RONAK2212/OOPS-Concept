/*Overriding
Two diffirent classice but using same method.
*/
#include<iostream>
using namespace std;
class demo{
	public:
		void display(){
			cout<<"Human can walk";
		}
};
class child{
	public:
		void display(){
			cout<<"Human can run";
		}
};
int main(){
child obj;
obj.display();
}
