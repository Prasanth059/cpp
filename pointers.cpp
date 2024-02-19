 #include<iostream>
 using namespace std;
 main()
 {
 	int *ptr ,x=9;
 	ptr=&x;
 	cout<<ptr<<endl;
	cout<<*ptr<<endl;
 	cout<<&ptr<<endl;
 	*ptr=90;
 	cout<<*ptr<<endl;
 	cout<<x<<endl;
 }
