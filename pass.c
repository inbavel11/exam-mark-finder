#include<stdio.h>
#include<string.h>
int main()
{
	int n[5],m[5],s[5],c[5],a[5],t[5],i;
	
	for ( i=0;i<5;i++)
	{
		printf("\nEnter roll no=");
		scanf("%d",&n[i]);
		printf("\nEnter m1 m2 m3=");
		scanf("%d %d %d",&m[i],&s[i],&c[i]);
		


a[i]=(m[i]+s[i]+c[i])/3;
t[i]=(m[i]+s[i]+c[i]);

	}
	printf("\nresult:");
	for( i=0;i<5;i++)
	{
		printf("\n%d\nmaths=%d\nphysics=%d\ncs=%d\ntotal=%d\navg=%d\n",n[i],m[i],s[i],c[i],t[i],a[i]);
	
if(m[i]>=35 && s[i]>=35 && c[i]>=35)
printf("pass");
else
printf("fail");
	
}
}

