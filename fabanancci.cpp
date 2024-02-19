#include<iostream>
using namespace std;
class fabanancci
{
	private:
		int n1=0 ,n2=1 ,n3=3, number;
		int i;
    public:
    	getdata()
    	{   n1=0;
    	    n2=1;
    	    n3=3;
    		number=10;
    		cout<<n1<<" "<<n2<<" ";	
				}
				
				medata2()
				{
					n3=n1+n2;
					cout<<n3<<"";
					n1=n2;
					n2=n3;
				     for(i=2;i<number;i++){
					 }
			}
				
};
main()
{
	fabanancci fc;
	fc.getdata();
	fc.medata2();
}

