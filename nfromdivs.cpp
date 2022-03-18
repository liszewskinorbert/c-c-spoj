// znajdz liczbe z znajac liczbe dzielnikow oraz dzielniki
#include <stdio.h>
#include <iostream>



using namespace std;


int main(void)
{
	int divNumbers; //liczba dzielnikow
	scanf("%d", &divNumbers);
	
	//printf("Wpisz %d liczb\n", divNumbers);
	
	int  divs[divNumbers];
	int  result;
	for (int i=0; i<divNumbers;i++)
		scanf("%d", &divs[i]);
		
	
	//for (int i=0; i<divNumbers;i++)
	//	printf("Wczytane liczby to : %d\n", divs[i]);
		


	if (divNumbers==1)
		result = divs[0] * divs[0];
	else
		result = divs[0] * divs[divNumbers-1];
	
	printf("%d\n", result);
	
	
	
}
