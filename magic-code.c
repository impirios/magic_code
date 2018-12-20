#include<stdio.h>
#include<conio.h>
int main()
{
	long int orcode,adcode=130119,cocode;
	int a[10],i,d[10],c[10];
	printf("Enter your 6 digit original code");
	scanf("%ld",&orcode);
	for(i=0;i<6;i++)
	{
		a[i]=orcode%10;
		orcode=orcode/10;
	}	
    for(i=0;i<6;i++)
    {
    	d[i]=adcode%10;
    	adcode=adcode/10;
    }
    for(i=0;i<6;i++)
    {
    	c[i]=a[i]+d[i];	
    }
    for (int i = 0; i < 6; i++)
    {
    	if (c[i]>9)
    	{
    		c[i]=c[i]-10;
    	}
    }
    cocode=c[5]*100000+c[4]*10000+c[3]*1000+c[2]*100+c[1]*10+c[0];
    printf("The coded number is %ld\n",cocode);

}
