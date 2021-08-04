#include <stdio.h>
#include <stdlib.h>

int main()
{
	int s1=0,s2=1,dem=0,s=0;
	int n;
	printf("nhap n\n");
	scanf("%d",&n);
   for(int i=1;i<n;i++)
   {
		s=s1+s2;
		s1=s;
		dem++;
		s2=s2+dem;
   }
   printf("\nso hang thu %d la%d\n",n,s);

    return 0;
}
