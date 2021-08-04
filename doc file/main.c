#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f;
  int arr[100];
	int dem=0;
  f=fopen("docfile.txt","r");
  if(f==NULL)
  {
  	printf("khong tim thay file\n");
  }
  else
  {
  	while(!feof(f))
	{
		int x;
		fscanf(f,"%d",&x);
		dem++;
	}
	printf("\n%d\n",dem);
	rewind(f);
	while(!feof(f))
	{
		for(int i=0;i<dem;i++)
		{
			fscanf(f,"%d",&arr[i]);
		}
	}

	for(int i=0;i<dem-1;i++)
	{
		printf("%8d",arr[i]);
	}
  }
    return 0;
}
