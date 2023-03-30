#include <iostream>
using namespace std;
class College{
	int roll;
	public:
		void inputC(){
			cout<<"Enter your Roll No.: ";
			cin>>roll;
		}
		int outputC(){
			return roll;
		}
};
class Parents{
	char surname[15];
	public:
		void inputP()
		{
			cout<<"Enter your surname: ";
			cin>>surname;
		}
		string outputP()
		{
			return surname;
		}
}; 
class Student: Parents, College{
	char name[15];
	public:
		void inputS()
		{
			cout<<"Enter your name: ";
			cin>>name;
			inputP();
			inputC();
		}
		void display()
		{
			cout<<"I am "<<name<<" "<<outputP()<<", roll no. "<<outputC();
		}
};
int main()
{
	Student s1;
	s1.inputS();
	s1.display();
	return 0;
}
