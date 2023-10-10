#include<stdio.h>
main ()
{
	int u,a,t,s,v;
	printf("Enter initial Velocity\n");
	scanf("%d",&u);
	printf("Enter acceleration\n");
	scanf("%d",&a);
	printf("Enter time elapsed\n");
	scanf("%d",&t);
	v = u + a*t;
	printf("Final Velcoity is %d\n",v);
	s=u*t+0.5*a*t*t;
	printf("Distance is %d",s);
}
