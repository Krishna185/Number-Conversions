#include<stdio.h>
#include"header.h"
#include<stdlib.h>

int main()
{
	int number,result;
	int choice;
	printf("*************Welcome to Conversion Table***************\n");
	printf("*                                                     *\n");
	printf("*                                                     *\n");
	printf("*******************************************************\n");
	
	printf("\nEnter choice :\nBinarytoDecimal = 0\nDecimaltoBinary = 1 : ");
	scanf("%d",&choice);

	if(choice == 0 | choice == 1)
	{
		if(choice == 0)
		{
			printf("Enter the binary number : ");
			scanf("%d",&number);
		}
		else
		{
			printf("Enter the Decimal number : ");
			scanf("%d",&number);
		}
		switch(choice)
		{
			case 0 : result = BinarytoDecimal(number);
					  printf("The Decimal equivalent of %d : %d\n",number,result);					  
					  break;

			case 1 : result = DecimaltoBinary(number);
					   printf("The Binary equivalent of %d : %d\n",number,result);
					   break;
		}
	}
	
	else
	{
		printf("Enter the choice in 1's and 0's\n");
		main(1);
	}

return 0;

}
