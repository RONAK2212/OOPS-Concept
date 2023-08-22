#include<iostream>
using namespace std;
int  main() {
  int a;
  double b,c;
  cout<<"Enter your choice \n 1.addition \n 2.subtraction \n 3.multiplication \n 4.Division \n (1,2,3,4): ";
  cin>>a;
  cout<<"Enter your two value: ";
  cin>>b;
  cin>>c;
  switch (a) {
    case 1:
      cout<<"This is your addtion="<<b+c;
      break;
    case 2:
      cout<<"This is your subtraction="<<b-c;
      break;
    case 3:
      cout<<"This is your multiplication="<<b*c;
      break;
    case 4:
      cout<<"This is your Division="<<b/c;
      break;
      default:
      cout<<"Invalid choice";
  }
 return 0;
}


