#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i, j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
				if(((i+j)==2 || (i+j)==6) && i%2==0)
				{
					printf("2\t");
				}
				else
				{
					if(i%2 - j%2 < 0)
					{
						printf("%d\t", (i%2 - j%2)*(-1));
					}
					else
					{
						printf("%d\t", i%2 - j%2);
					}
				}	
		}
		printf("\n");
	}
	
	
	return 0;
}
