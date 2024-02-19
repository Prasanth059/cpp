#include<iostream>
using namespace std;
void volume(int length,int breath,int height=4);
main()
{
	volume( 7,8);
	
}
void volume(int length, int breath,int height)
{
	int volume;
	volume=length*breath*height;
	cout<<volume;
}

