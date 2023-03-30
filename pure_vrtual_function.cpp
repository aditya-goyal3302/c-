#include <iostream>
using namespace std;
class Furniture{
	public:
		virtual void input()=0;
};
class Chair: public Furniture{
	char material[10];
	public:
		void input(){
			cout<<"Enter the material it is made up of: ";
			cin>>material;
		}
		void display(){
			cout<<"Chair is made up of "<<material;
		}
}; 
int main()
{
	Furniture *f1;
	Chair c1;
	f1=&c1;
	f1->input();
	c1.display();
	return 0;
}
