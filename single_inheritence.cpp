#include <iostream>
using namespace std;
class Vehicle{
	int wheels;
	public:
		void input()
		{
			cout<<"Enter number of wheels: ";
			cin>>wheels;
		}
		void output(){
		    cout<<"\nNo. of wheels: "<<wheels;
		}
};
class Car: Vehicle{
	char company[15];
	public:
		void input_car()
		{
			cout<<"Enter name of company: ";
			cin>>company;
			input();
		}
		void output_car()
		{
			cout<<"\nName of Company: "<<company;
			output();
		}
};
int main()
{
	Car c1;
	c1.input_car();
	c1.output_car();
	return 0;
}
