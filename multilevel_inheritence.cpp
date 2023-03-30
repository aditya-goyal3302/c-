#include <iostream>
using namespace std;
class Human{
	int age;
	public:
		void inputH()
		{
			cout<<"Enter Your Age: ";
			cin>>age;
		}
		int outputH()
		{
			return age;
		}
};
class Student: protected Human{
	int attendance;
	public:
		void inputS()
		{
			cout<<"Enter your attendance percentage: ";
			cin>>attendance;
		}
		int outputS()
		{
			return attendance;
		}
}; 
class CA_Student: Student{
	int language;
	public:
		void inputC()
		{
			cout<<"Enter no. of programming languages you are good at: ";
			cin>>language;
		}
		int outputC()
		{
			return language;
		}
		void input()
		{
			inputH();
			inputS();
			inputC();
		}
		void output()
		{
			cout<<"\nThis CA Student is good at "<<outputC()<<" languages with "<<outputS()<<"% attendance at the age of "<<outputH();
		}
};
int main()
{
	CA_Student c1;
	c1.input();
	c1.output();
	return 0;
}
