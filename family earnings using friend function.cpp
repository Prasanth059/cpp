#include<iostream>
using namespace std;
class sister;
class brother
{
    int pay,bonus,totalb;
    public:
    	void getb()
    	{
    		pay=50000;
    		bonus=10000;
    		totalb=pay+bonus;
    		cout<<"total salary of brother is"<<totalb<<endl;
    		
		}
		friend class father;
};
class father;
class father

{
	int oldsaving,total;
	public:
		void getf()
		{
		 oldsaving=100000;
		 cout<<"old savings are"<<oldsaving<<endl;
		}
		void amount(brother obj)
		{
			total=oldsaving+obj.totalb;
			cout<<"the total savaing with father are"<<total<<endl;
		}
};
main()
{
	brother objb;
father objf;
objb.getb();
objf.getf();
objf.amount(objb);
}
