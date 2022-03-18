#include <iostream>
#include <string>

using namespace std;

int result[100] = {0};
string pesel;
int main()
{

int tests;
scanf("%d", &tests);
for (int i=0; i<tests;i++)
	{
	cin >> pesel;
	int number1 = pesel[0] - 48;
	int number2 = pesel[1] - 48;
	int number3 = pesel[2] - 48;
	int number4 = pesel[3] - 48;
	int number5 = pesel[4] - 48;
	int number6 = pesel[5] - 48;
	int number7 = pesel[6] - 48;
	int number8 = pesel[7] - 48;
	int number9 = pesel[8] - 48;
	int number10 = pesel[9] - 48;
	int number11 = pesel[10] - 48;
	int value = number1 + (number2*3) + (number3*7) + (number4*9) + number5 + (number6*3) + (number7*7) + (number8*9) + number9 +(number10*3) +number11;
	
	result[i]= value;
}
	

	

for (int j=0; j<tests;j++)
	if (result[j]>0)
		if (result[j]%10 == 0)
			printf("D\n");
		else
			printf("N\n");
	else
			printf("N\n");




return 0;

}
