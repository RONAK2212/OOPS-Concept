#include<iostream>
using namespace std;
class sum{
	public:
		void add(int a, int b){
			cout<<"This is your addition\t"<<a+b<<"\n";
		}
		void add(double a,double b){
			cout<<"This is your addition\t"<<a+b<<"\n";
		}
};
int main(){
	int a,b;
	double c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	sum obj;
	obj.add(a,b);
	obj.add(c,d);
	
}
