#include<stdio.h>
#include<math.h>

int main()
{
	int num[4]; // num[0] = answer  num[1] =number  num[2] =count  num[3] = flag
	num[3] = num[2] = 0;
	num[1] = num[0] = 1;
	while (num[2]<1001)
	{
		num[3] = 0; // current number is a prime number
		if (num[1] == 1)
		{
			num[3] = 1;
		}
		if (num[1] % 2 == 0)
		{
			num[3] = 1;
		}
		if (num[1] == 2)
		{
			num[3] = 0;
		}
	}








	return 0;
}