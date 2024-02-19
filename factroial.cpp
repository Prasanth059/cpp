#include<iostream>
using namespace std;
main()
{
	int me(int);
	int n,fact;
	   n=5;
	 fact=me(n);
     cout<<fact<<endl;
	}
	int me(int x)
	{
	 int b;
	 if(x<=1)
	{
		return (1);
	}
    	else
    	{
    		b=x*me(x-1);
    		return b;
		}
	
	}
