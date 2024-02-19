#include<stdio.h>
int main (){
	int a,fact=1;
	int *pa=&a,*pfact=&fact;
	printf(" enter the number");
	scanf("%d",pa);
	while(*pa!=0)
	{
		(*pfact)=*pfact**pa;
		*pa=*pa-1;
	}
	printf(" factorial=%d",*pfact);
	return 0;
	
}
