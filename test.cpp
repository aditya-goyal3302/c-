//#include <bits/stdc++.h>
//using namespace std;


// int maxConsecutiveDays(int profit[], int N) {
//   // Write your code here
//   map<int,int>h;
//   int ans=0, sum =0;
//   for(int i =0; i<N; i++){
//     sum += profit[i];

// 	cout<<sum <<" ";
    
//     h.insert(pair<int, int>(sum,i));
//   }
//   sum = 0;
//   for(int i =0; i<N; i++){
//     map<int, int>::iterator itr;
//     sum += profit[i];
//     itr = h.find(sum);
// 	if(itr == h.end())
// 		continue;
//     int temp = itr->second - sum;
//     if(temp == 0){
// 		cout<<"hi  ";
//       if(ans < temp)
//         ans = temp;
//     }
//   }
//   return ans;
// }
// int main()
// {
//   int a = 234;
//   int *p = &a;

//   cout<<sizeof(p);

//   // int n,k;
//   // cin>>n;
//   // int arr[n];
//   // int i;
//   // for(i=0;i<n;i++)
//   //   cin>>arr[i];
//   // cout<<maxConsecutiveDays(arr,n);
//   return 0;
// }
// #include<iostream>
// #include<stdlib.h>
// using namespace std;

// class Array
//  {
//  	int a[50];
//  	int size;
 	
 	
//  	public:
 		
//  		void input(int);
//  		void display();
//  		int findLargest();
//  		int insertAt(int, int);
//  		int deleteAt(int);
//  		int menu();
//  		int *data()
//  		{
//  			return a;
// 		 }
//   };
  
  
//   void Array::input(int p1)
//    {
//      size = p1;
//      for(int i=0; i<size; i++)
//        					cin>>a[i];
//    }
   
//    void Array::display()
//       {
// 	     cout<<endl;
// 		for(int i=0; i<size; i++)
//        					cout<<a[i]<<" ";
// 	    cout<<endl;
// 	  }
    
// 	int Array::findLargest()
// 	{
// 		int index=0;
// 		int largest = a[0];
// 		 for(int i=1; i<=size; i++)
// 		   if(largest < a[i] )
// 		   {
// 		   		largest = a[i];
// 				index=i;
				
// 		   }
		          
		 
// 		 return index;         
//     }
		
// 	int Array::insertAt(int index, int item)	
// 	   {
// 	   	 for(int i=size; i>index; i--)
// 	   	   		a[i]  = a[i-1];
	   	 
// 	   	 a[index] = item;
// 	   	 size = size + 1;
// 	   	 return size;
// 	   }
	  
//     int Array::menu()
// 	 {
// 	 	cout<<"1. Find Largest\n2. Insertion\n3. Deletion\n4. Exit \n\nEnter Your Choice: ";
// 	 	int choice;
// 	 	cin>>choice;
// 	 	return choice;
//     }
	 	
//     int Array::deleteAt(int index)
//         {
// 	     int temp = a[index];
// 	  	 for (int i= index; i<size-1; i++)
// 		      a[i] = a[i+1]; 
		      
// 		 size = size-1;
// 		  return temp;
// 		}
		
		
//   int main()
//   {
//   	 int n, biggest, ch, value, loc,size,*p,id;
//   	 Array ob1;
//   	 cout<< "\nEnter size of Array: ";
//   	 cin>>n;
//   	 cout<<"Populate array: ";
//   	 ob1.input(n);
//   	 while(1)
//   	 {
//   	 	  ch = ob1.menu();
// 		   switch(ch)
//   	 	{
//   	 		case 1: 
// 			   		p=ob1.data();
// 			   		id=ob1.findLargest();
// 			        cout<< "\nLargest Element index : "<<id<<endl<<"Value: "<<p[id]<<"\n"; 
// 					break;

//   	 		case 2: cout<< "Enter Index and Value for insertion: ";cin>>loc; cin>>value;
//   	 		        ob1.insertAt(loc, value);
//   	 		        cout<<"\nArray after insertion";
// 					ob1.display();
// 					break;
			
// 			case 3: cout<<"Input Index for Deletion: "; cin>>loc;
// 			        value=ob1.deleteAt(loc);
// 			        cout<<"Array after Deletion: \n";
// 					ob1.display();
// 					cout<<endl<<"deleted element is: "<<value<<endl;
// 					break;
  	 		
//   	 		case 4: exit(1);
  	 		
  	 		
// 		   } // end switch case
// 		 cout<<endl;  
//   	   } // end while 
//    	return 1;
//   }	// end main
 
// 	#include<iostream>
// using namespace std;
// int i=100;
// int main()
// {
//     int i=500;
//     {
//         int i=200;
//         cout<<"sum is: "<<i<<endl;
//     }
//     {
//         cout<<"total is : "<<i<<endl;
//     }
// }

#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  for (unsigned int i=0; i<str.length(); ++i)
  {
    std::cout << str.at(3);
  }
  return 0;
}