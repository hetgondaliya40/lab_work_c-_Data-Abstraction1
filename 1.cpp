/*1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations
*/

#include<iostream>
using namespace std;

class Circle{
	public :
		int a,area,pi=3.14;
		void calculate(){
				cout<<"ENTER THE NUMBER"<<endl;
				cin>>a;
				area=pi*a*a;
					cout<<endl;
				cout<<area<<endl;
					cout<<endl;
			}
};


class Rectangel 
{
	public :
		void calculate_r(){
			
		
		int area_r,b,h;
		
		cout<<"ENTER B"<<endl;
		cin>>b;
		cout<<"ENTER H"<<endl;
		cin>>h;
		area_r=b*h;
		cout<<endl;
		cout<<area_r<<endl;
		cout<<endl;
	}
};

class  Triangle : public Circle, public Rectangel
{
	public :
		void calculate_t(){
		
	int b,h,area_t;
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>b;
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>h;
		cout<<endl;
		area_t=0.5*b*h;
		cout<<area_t<<endl;
		cout<<endl;
}
};



int main(){
	Triangle  t1;
	
	t1.calculate();
	t1.calculate_r();
	t1.calculate_t();
}
 
