#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
	    {
	    	printf("������%d\n",i);
		}
		else if(i%2==0)
		{
			printf("ż����%d\n",i); 
		}
	}
	system("pause");
	return 0; 
 } 
