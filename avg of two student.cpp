 #include<iostream>
using namespace std;
class result
{
	private:
	 int subject1,subject2;	
	 char madav,keshav;
	 float avg;
	 char name;
	 
	public:
	getdata()
	{

		cout<<"enter the marks of two subjects";
		cin>>subject1>>subject2;
		
	}
	me()
	{
	avg=(subject1+subject2)/2;
	cout<<"sub1:"<<subject1<<endl;
	
	cout<<"average marks are"<<avg<<endl;
	
	}
};
main()
{
	result obj[5];
	int i;
	for (i=0;i<10;i++)
	{
		cout<<"enter the marks of student"<<(i+1)<<" : "<<endl;
		obj[i].getdata();
		obj[i].me();
	}
	
	
}
