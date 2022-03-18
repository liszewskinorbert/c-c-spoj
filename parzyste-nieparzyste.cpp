#include <stdio.h>


int main()
{
	int tests; //ilosc testow
	int numbers[100]= {0};  //liczba liczb
	int tables[100][100]= {0}; //elemnent testu w tablicy 2 wymiarowej
	
	scanf("%d", &tests);
	for (int i=0;i<tests; i++)
		{
		
		scanf("%d", &numbers[i]);
		for (int j=0; j<numbers[i];j++)
			scanf("%d", &tables[i][j]);		
		} 
	//
	for (int i1 = 0;i1<tests;i1++)   //petla do i-tego testu
		{
		for (int i2=0;i2<numbers[i1];i2++)// petla do wyswietlenia parzystego
			if ((i2+1)%2 == 0)
				printf("%d ", tables[i1][i2]);
		 
		for (int i2=0;i2<numbers[i1];i2++) //petla do nieparzystego
			if ((i2+1)%2 != 0)
				printf("%d ", tables[i1][i2]);
		printf("\n");
		}
		
	return 0;
	
}
