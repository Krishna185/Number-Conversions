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
	
	printf("\n1.BinarytoDecimal\n2.DecimaltoBinary\n");
	printf("Enter choice : ");
	scanf("%d",&choice);

	if(choice == 1 | choice == 2)
	{
		switch(choice)
		{
			case 1 :  printf("Enter the Binary number : ");
					  scanf("%d",&number);
				      result = BinarytoDecimal(number);
					  printf("The Decimal equivalent of %d : %d\n",number,result);					  
					  break;

			case 2 :  printf("Enter the Decimal number : ");
					  scanf("%d",&number);
					  result = DecimaltoBinary(number);
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
