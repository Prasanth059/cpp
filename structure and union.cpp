#include<iostream>
using namespace std;
struct student1
{
	char name;
    int marks;
    float cgpa;
 
};
union student2
{
	char name;
	int marks;
	float cgpa;
	
};
main()
{

    student1 s1;
    student2 s2;
    cout<<"size of structure is\n"<<sizeof(s1)<<" "<<"size of union is"<<sizeof(s2);
}
