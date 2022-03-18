#include <iostream>
#include <string>

using namespace std;

int result[500] = {0};
int main()
{

int tests;
scanf("%d", &tests);


for (int i=0; i<tests;i++)
	{
		int person=0;
		int sweets = 0;
		scanf("%d %d", &person, &sweets);
		if (person==1)
			result[i] = 1;
		else
		{
			int value = sweets % (person-1);
			result[i] =  value;
		}
	}

	

for (int j=0; j<tests;j++)
{
printf("%d\n", result[j]);
	if (result[j] == 0)
		printf("NIE\n");
	else
		printf("TAK\n");

}

return 0;

}
