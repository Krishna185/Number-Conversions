#include<stdlib.h>
#include<stdio.h>

int DecimaltoBinary(int num)
{
	int rem,binary = 0,j = 1;
	int temp = binary;

	while(num > 0)
	{
		rem = num % 2;
		temp = temp + (rem * j);
		num = num / 2;
		j = j * 10;
	}

	return temp;
}

int BinarytoDecimal(int num)
{
	int rem,decimal = 0,p = 1;
	int temp = decimal;

	while(num > 0)
	{
		rem = num % 10;
		if(rem == 0 | rem == 1)
		{
			temp = temp + rem * p;
			p = p * 2;
			num = num / 10;
		}
		else
		{
			printf("Enter the number in 1's & 0's\n");
			exit(1);
		}

	}
	return temp;
}
