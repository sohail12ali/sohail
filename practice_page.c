#include<stdio.h>
#include<conio.h>

int Choice =2;
int enter;
int Sum = 0;
char Choice_W; 

menu()
{
	printf("\n\t\t **MENU**\n\n");
	printf("\n\t\tPizza   :200Rs\n");
	printf("\n\t\tBurger  :50Rs\n");
	printf("\n\t\tCoffee  :20Rs\n");
	printf("\n\t\tTea     :10Rs\n");
	printf("\n\t\tCake    :400Rs\n\n\n");
	
	Order();
	
	 
}

Order()
{
	printf("\t\tGive the Order Here\n\n");
	printf("\tPress n to Print your Bill\n");
	printf("\tPress p for Pizza\n");
	printf("\tPress b for Burger\n");
	printf("\tPress c for Coffee\n");
	printf("\tPress t for Tea\n");
	printf("\tPress k for Cake\n\n\n");

	
	
	count();
	
}

count()
{	

	int how_many;
	
	while (Choice_W != 'n')
	{
	printf("\n\tEnter your choice or enter n to print your bill\n");
	printf("\tPlease enter keys in lowercase\n");	
	scanf("%s",&Choice_W);
	
	switch (Choice_W)
	{
		case 'n' :{
			amount();
			break;
		}
		case 'p' :
		{
			printf("\n\tHow many Pizza's do you want\n");
				 scanf("%d",&how_many);
				 Sum += how_many*200;
			break;
		} 
				 	 
	    case 'b':
		{	printf("\n\tHow many Burger's do you want\n");
				 scanf("%d",&how_many);
				 Sum += how_many*50;
			
			break;
		}
		
		case 'c' :
		{	printf("\n\tHow many Coffee's do you want\n");
				 scanf("%d",&how_many);
				 Sum += how_many*20;
			
			break;
		}
		
		case 't' :
		{	printf("\n\tHow many Tea's do you want\n");
				 scanf("%d",&how_many);
				 Sum += how_many*10;
			
			break;
		}

		case 'k' :
		{	printf("\n\tHow many Cake's do you want\n");
				 scanf("%d",&how_many);
				 Sum += how_many*400;
			
			break;
		}
				default : 
				{
					printf("\n\tYou have entered a worong keyword\n\tPlease try again");
					break;
				}
		 				 
	}
	
	
	
	}
}
amount()
{
	printf("\nYou total bill in %d Rupess\n",Sum);
	return ;
}

main()
{
	
	printf("\nThis is a bill printing program\n");
	printf("Do you wish to see the menu\n");
	printf("Press 0 to see the menu else 1 to continue giving order\n");
	scanf("%d",&enter);

	switch (enter)
	{
			case 0 :
			
			 menu();
						
			case 1 :
			
				 Order();
							
			default :
			{
				printf("You have entered a worng keyword\n");
				break;
 			}
	}

	return ;
}



