#include<stdio.h>
void main()
{
	int i,j;
	char str[]="vikram";
	printf("\n\n");
	printf("---------\n");
	for(i=0;i<=6;i++)
	{
//		j=i+1;
//		printf("|%-12.*s|\n",j,str);
//	}
//	printf("|-------|\n");
	for(i=6;i>=0;i++)
	{
		j=i+1;
		printf("|%-12.*s|\n",j,str);
	}
	printf("------\n");
        }
}


