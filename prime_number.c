#include<stdio.h>
    
int main()
{   
	int a,b,i,c;
	printf("enter number:");
	scanf("%d",&a);
	for(i =2;i<a;i++)
	{
		b = a % i;
		if(b == 0)
	{
    	c = 1;
		break;
	}
	 else
	 c = 0;
	}
	if(c==1)
	printf("not prime");
	else if(c == 0)
	printf("prime");
	
	
    return 0;	
}   
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
