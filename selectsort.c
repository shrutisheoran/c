#include<stdio.h>
int main()
{
	int i,j,k,min,size,flag,temp;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	{
		min=i;
		flag=0;
		for(j=i+1;j<size;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
				flag=1;
			}	
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		if(flag==1)
		{	
			for(k=0;k<size;k++)
				printf("%d ",a[k]);
			printf("\n");
		}
	}	
	return 0;
}
