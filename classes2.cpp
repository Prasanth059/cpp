#include<iostream>
using namespace std;
class student
{
private:
int age,fee, marks,regno;
        
 public:
 	
 
    fun1()
	{
		age=21;
		fee=12000;
		marks=800;
		cout<<age<<"\n"<<fee<<"\n"<<marks<<regno;
	 	
	}    
	fun2(){
	
	cout<<"\nenter the age:";
	cin>>age;
	cout<<"enter the fee:";
	cin>>fee;
	cout<<"enter the marks:";
	cin>>marks;
	cout<<"enter the reg.no:";
	cin>>regno;
}
	fun3()
	{
		cout<<" age "<<age<<"\n"<<"fee "<<fee<<endl<<"marks "<<marks;
		}	
};
main()
{
	student obj1;
	obj1.fun1();
	obj1.fun2();
	obj1.fun3();
	
}
