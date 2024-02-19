#include<iostream>
using namespace std;
class lpu
{
	private:
		int a;
		public:
			void getdata();
};

inline void lpu:: getdata()
{
	
	cin>>a;
	cout<<a;
}

main()
{
	lpu obj;
	obj.getdata();
}
