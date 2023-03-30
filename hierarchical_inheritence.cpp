#include <iostream>
using namespace std;
class Department{
	char Dname[15];
	public:
		void inputD()
		{
			cout<<"Enter name of Department: ";
			cin>>Dname;
		}
		string outputD()
		{
			return Dname;
		}
}; 
class Student: Department{
	char name[15];
	public:
		void inputS()
		{
			cout<<"Enter name of Student: ";
			cin>>name;
			inputD();
		}
		void outputS()
		{
			cout<<name<<" is a student who belongs to "<<outputD()<<" department\n";
		}
};
class Teacher: Department{
	char Tname[15];
	public:
		void inputT()
		{
			cout<<"Enter name of Teacher: ";
			cin>>Tname;
			inputD();
		}
		void outputT()
		{
			cout<<Tname<<" is a teacher who belongs to "<<outputD()<<" department\n";
		}
};
int main()
{
	Teacher t1;
	Student s1;
	t1.inputT();
	t1.outputT();
	s1.inputS();
	s1.outputS();
	return 0;
}
