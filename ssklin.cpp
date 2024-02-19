#include<stdio.h>
int main()
{
	int arr[]={0,1,1,2,3,5,8,13,21,34,55}
	int size,loc=-1,key;
	printf(enter the element);
	for(i=0;i<size,i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the key value");
	scanf("%d",&key);
	for (i=o;i<size;i++){
		if (arr[i]=key){
			loc=i;
			break;
		}
	}
	if (loc=i)
	printf("value found");
	else
	printf("value not found");
	return 0;	
}
