#include<iostream>
using namespace std;
class animal{
	public:
		animal(string name):name(name){}
			virtual void makesounds()=0;
			void showinfo(){
				cout<<"name"<<name<<"\n";
			}
			private:
			string name;
};

class dog:public animal{
	public:
		dog(string name):animal(name){
			cout<<"Name:"<<name<<"\n";
		}
		void makesounds(){
			cout<<"dog barks"<<"\n";
		}
};



class cat:public animal{
	public:
		cat(string name):animal(name){
			cout<<"Name:"<<name<<"\n";
		}
			void makesounds(){
			cout<<"cat meows"<<"\n";}
};


int main(){
	dog obj("Bruno");
	obj.showinfo();
	obj.makesounds();
	
	cat cat("Sweety");
	cat.showinfo();
	cat.makesounds();
	return 0;
}
