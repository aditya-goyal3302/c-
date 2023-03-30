#include <iostream>
using namespace std;
class Vehicle{
	int wheel;
	public:
		void inputV()
		{
			cout<<"Enter number of wheels: ";
			cin>>wheel;
		}
		int outputV()
		{
			return wheel;
		}
};
class Cycle: virtual public Vehicle{
	public:
		void outputC()
		{
			cout<<"It is pulled by human\n";
		}
};
class Bullock_cart: virtual public Vehicle{
	public:
		void outputB()
		{
			cout<<"It is used to transport goods\n";
		}
}; 
class Rear_loading_rickshaw: Cycle, Bullock_cart{
	public:
		
		void input()
		{
			inputV();
		}
		void output()
		{
			cout<<"This rear loading rickshaw has "<<outputV()<<" wheels\n";
			outputC();
			outputB();
		}
};
int main()
{
	Rear_loading_rickshaw r1;
	r1.input();
	r1.output();
	return 0;
}
