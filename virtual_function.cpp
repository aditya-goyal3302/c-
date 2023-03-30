#include <iostream>
using namespace std;
class Outdoor_Sports{
	int player;
	public:
		virtual void team()
		{
			cout<<"Enter no. of players in a team: ";
			cin>>player;
			cout<<"No. of Players in a team in this sport are "<<player;
		}
		void display(){
			cout<<"\nIt is played outside.\n";}
}; 
class Cricket: public Outdoor_Sports{
	public:
		Cricket(){
			cout<<"\n CRICKET\n";
		}
		void team(){
			cout<<"No. of players in a Cricket team are 11.";
		}
		void display(){
			cout<<"Cricket is played outside.";
		}
};
class Badminton: public Outdoor_Sports{
	public:
		Badminton(){
			cout<<"\n BADMINTON\n";
		}
		void display(){
			cout<<"Badminton is played outside.";
		}
};
int main(){
	Outdoor_Sports *s1, *s2;
	// Cricket c1;

	// s1=&c1;
	// s1->team();
	// s1->display();
	
	Badminton b1;
	s2=&b1;
	s2->team();
	Outdoor_Sports &s3 = *s2;

	s3.team();
	
	//s2->display();
	return 0;
}