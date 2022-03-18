#include <stdio.h>

int main()
{
	int tests;
	scanf("%d", &tests);
	int steps[tests];
	for (int i=0;i<tests; i++)
		{
		scanf("%d", &steps[i]);
		} 
	for (int index=0;index<tests;index++)
		{
		int zmienna = steps[index]*steps[index];
		printf("%d\n", zmienna);
		}
		
		
	return 0;
	
}
