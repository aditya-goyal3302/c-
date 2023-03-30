#include <iostream>
#include <windows.h>
#include <string>
#include <ostream>
#include <iosfwd>
#include <fstream>
#include <conio.h>
#include <process.h>
#include <stdio.h>

void clrscr()
{
  system("cls");
}
class product{

 int pno;
 char name[50];
 float price,qty,tax,dis;
 public:
 void create_product()
 {
 std::cout<<"\nPlease Enter The Product No. of The Product :";
 std::cin>>pno;
 std::cout<<"\n\nPlease Enter The Name of The Product :";
 std::cin>>name;
 std::cout<<"\nPlease Enter The Price of The Product : ";
 std::cin>>price;
 std::cout<<"\nPlease Enter The Discount (%) : ";
 std::cin>>dis;
 }
void show_product()
 {
 std::cout<<"\nThe Product No. of The Product : "<<pno;
 std::cout<<"\nThe Name of The Product : ";
puts(name);
 std::cout<<"\nThe Price of The Product : "<<price;
 std::cout<<"\nDiscount : "<<dis;
 }
int retpno()
 {return pno;}
float retprice()
 {return price;}
char* retname()
 {return name;}
int retdis()
 {return dis;}
}; //class ends here
//*************************************************************
 // global declaration for stream object, object
//*************************************************************
std::fstream fp;

product pr;
//*************************************************************
 // function to write in file
//*************************************************************
void write_product()
 {
 fp.open("Shop.dat",std::ios::out|std::ios::app);
 pr.create_product();
 fp.write((char*)&pr,sizeof(product));
 fp.close();
 std::cout<<"\n\nThe Product Has Been Created ";
getch();
 }
//*************************************************************
 // function to read all records from file
//*************************************************************
void display_all()
 {
    clrscr();
 std::cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
fp.open("Shop.dat",std::ios::in);
 while(fp.read((char*)&pr,sizeof(product)))
 {
 pr.show_product();
std::cout<<"\n\n====================================\n";
getch();
 }
 fp.close();
 getch();
 }
//*************************************************************
 // function to read specific record from file
//*************************************************************
void display_sp(int n)
 {
 int flag=0;
 fp.open("Shop.dat",std::ios::in);
 while(fp.read((char*)&pr,sizeof(product)))
 {
 if(pr.retpno()==n)
 {
    clrscr();
 pr.show_product();
 flag=1;
 }
 }
 fp.close();
 if(flag==0)
 std::cout<<"\n\nrecord not exist";
getch();
 }
//*************************************************************
 // function to modify record of file
//*************************************************************
void modify_product()
 {
 int no,found=0;
    clrscr();
 std::cout<<"\n\n\tTo Modify ";
std::cout<<"\n\n\tPlease Enter The Product No. of The Product";
std::cin>>no;
 fp.open("Shop.dat",std::ios::in|std::ios::out);
 while(fp.read((char*)&pr,sizeof(product)) && found==0)
 {
 if(pr.retpno()==no)
 {
 pr.show_product();
 std::cout<<"\nPlease Enter The New Details of Product:"<<std::endl;
 pr.create_product();
 int pos=-1*sizeof(pr);
 fp.seekp(pos,std::ios::cur);
 fp.write((char*)&pr,sizeof(product));
 std::cout<<"\n\n\t Record Updated";
found=1;
 }
 }
 fp.close();
 if(found==0)
 std::cout<<"\n\n Record Not Found ";
getch();
 }
//*************************************************************

 // function to delete record of file
//*************************************************************

void delete_product()
 {
 int no;
    clrscr();
 std::cout<<"\n\n\n\tDelete Record";
std::cout<<"\n\nPlease Enter The product no. of The Product YouWant To Delete";
std::cin>>no;
 fp.open("Shop.dat",std::ios::in|std::ios::out);
 std::fstream fp2;
 fp2.open("Temp.dat",std::ios::out);
 fp.seekg(0,std::ios::beg);
 while(fp.read((char*)&pr,sizeof(product)))
 {
 if(pr.retpno()!=no)
 {
 fp2.write((char*)&pr,sizeof(product));
 }
 }
 fp2.close();
 fp.close();
 remove("Shop.dat");
rename("Temp.dat","Shop.dat");
std::cout<<"\n\n\tRecord Deleted ..";
getch();
 }
//*************************************************************

 // function to display all products price list
//*************************************************************
void menu()
 {
    clrscr();
 fp.open("Shop.dat",std::ios::in);
 if(!fp)
 {
 std::cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n Go ToAdmin Menu to create File";
std::cout<<"\n\n\n Program is closing ….";
getch();
 exit(0);
 }
std::cout<<"\n\n\t\tPRODUCT MENU\n\n";
std::cout<<"====================================================\n";
std::cout<<"P.NO.\t\tNAME\t\tPRICE\n";
std::cout<<"====================================================\n";
while(fp.read((char*)&pr,sizeof(product)))
 {
std::cout<<pr.retpno()<<"\t\t"<<pr.retname()<<"\t\t"<<pr.retprice()<<std::endl;
 }
 fp.close();
 }
//*************************************************************

 // function to place order and generating bill for Products
//*************************************************************
void place_order()
 {
 int order_arr[50],quan[50],c=0;
 float amt,damt,total=0;
 char ch='Y';
 menu();
 std::cout<<"\n\n\n\n\n===============================";
std::cout<<"\n -->>PLACE YOUR ORDER<<--";
std::cout<<"\n===============================\n";
do{
 std::cout<<"\n\nEnter The Product No. Of The Product : ";
std::cin>>order_arr[c];
 std::cout<<"\nQuantity in number : ";
std::cin>>quan[c];
 c++;
 std::cout<<"\nDo You Want To Order Another Product ? (y/n)";
std::cin>>ch;
 }while(ch=='y' ||ch=='Y');
std::cout<<"\n\nThank You For Plastd::cing The Order";getch();clrscr();
std::cout<<"\n********************************INVOICE********************************\n";
std::cout<<"\nPr No.\tPr Name\tQuantity \tPrice \tAmount\tAmount after discount\n";
for(int x=0;x<=c;x++)
 {
 fp.open("Shop.dat",std::ios::in);
 fp.read((char*)&pr,sizeof(product));
 while(!fp.eof())
 {
 if(pr.retpno()==order_arr[x])
 {
 amt=pr.retprice()*quan[x];
 damt=amt-(amt*pr.retdis()/100);
std::cout<<"\n"<<order_arr[x]<<"\t"<<pr.retname()<<"\t"<<quan[x]<<"\t\t"<<pr.retprice()<<"\t"<<amt<<"\t\t"<<damt;
 total+=damt;
 }
 fp.read((char*)&pr,sizeof(product));
 }
fp.close();
 }
 std::cout<<"\n\n\t\t\t\t\tTOTAL = "<<total;
 getch();
 }
//*************************************************************

 // INTRODUCTION FUNCTION
//*************************************************************
void gotoxy(int x, int y)
{
    COORD c = { x, y };
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
void intro()
 {
    clrscr();
 gotoxy(25,3);
 std::cout<<"----->> SUPER MARKET <<-----";
gotoxy(25,7);
 std::cout<<" ---->> BILLING <<----";
gotoxy(25,11);
 std::cout<<" --->> PROJECT <<---";
std::cout<<"\n\n\n\n\n\n\nMADE BY : Aditya Goyal";
std::cout<<"\n\nCollage : Chitkara University";
getch();
}
//*************************************************************
 // ADMINSTRATOR MENU FUNCTION
//*************************************************************
 void admin_menu()
 {
    clrscr();
 char ch2;
 std::cout<<"\n\n\n\tADMINISTRATION MENU \n";
 std::cout<<"\t____________________";
std::cout<<"\n\n\t1:CREATE PRODUCT";
std::cout<<"\n\n\t2:DISPLAY ALL PRODUCTS";
std::cout<<"\n\n\t3:QUERY ";
std::cout<<"\n\n\t4:MODIFY PRODUCT";
std::cout<<"\n\n\t5:DELETE PRODUCT";
std::cout<<"\n\n\t6:VIEW PRODUCT MENU";
std::cout<<"\n\n\t7:BACK TO MAIN MENU";
std::cout<<"\n\n\tPlease Enter Your Choice (1-7) ";
ch2=getche();
 switch(ch2)
 {
 case '1':     clrscr();
 write_product();
 break;
 case '2': display_all();break;
 case '3':
int num;
    clrscr();
 std::cout<<"\n\n\tPlease Enter The Product No. ";
std::cin>>num;
 display_sp(num);
 break;
 case '4': modify_product();break;
 case '5': delete_product();break;
 case '6': menu();
 getch();
 case '7': break;
 default:std::cout<<"\a";admin_menu();
 }
 }
//*************************************************************
 // THE MAIN FUNCTION OF PROGRAM
//*************************************************************
int main()
 {
 char ch;
 intro();
 do
 {
    clrscr();
 std::cout<<"\n-->> Welcome to Super Market Billing SystemApplication <<-- \n";
std::cout<<"\t************************************************************\n\n";
 std::cout<<"\n\n\n\tMAIN MENU\n";
 std::cout<<"\t_____________";
std::cout<<"\n\n\t01: CUSTOMER";
std::cout<<"\n\n\t02: ADMINISTRATOR";
std::cout<<"\n\n\t03: EXIT";
std::cout<<"\n\n\tPlease Select Your Option ";
ch=getche();
 switch(ch)
 {
 case '1': clrscr();
 place_order();
 getch();
 break;
 case '2': admin_menu();
 break;
 case '3':exit(0);
 default :std::cout<<"\a";
 }
 }while(ch!='3');
 }
//*************************************************************
 // END OF PROJECT
//*************************************************************

