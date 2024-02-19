#include<iostream>
using namespace std;
     namespace first
     {
     	int x=2;
     	int y=5;
     	
	 }
	 namespace second
	 {
	 	
	int x=7;
	int y=8;
	 }
	 main()
	 {
	 	
    using first ::x;
    cout<<x<<endl;
    using first ::y;
    cout<<y<<endl;
    cout<<second::x;
	 }
