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
		double boundary = (int)floor(sqrt(num[1]));
		for (int f = 0; f <= boundary; f+=2)
		{
			if (num[1] % f == 0)num[3] = 1;
			if (num[3] == 0) 
			{
				num[0] = num[1];
				num[2]++;
				printf_s("Count = %d , Prime =%d \n", num[2], num[0]);			
			}
			num[1]++;
		}
	}
	return 0;
}