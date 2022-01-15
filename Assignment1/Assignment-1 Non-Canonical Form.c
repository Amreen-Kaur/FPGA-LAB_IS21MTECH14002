//3-variable k-map in c
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	//declare variables
	int sq_8[8];
	int b;
	char var_name[3];
	strcpy(var_name,"XYZ");

	printf("\n Variables are:%c %c %c\n",var_name[0],var_name[1],var_name[2]);
	
	// putting values in k-map
	for (b=0;b<8;b++)
	{
		printf("\n Enter 1 or 0 in the square %d = ",b);
		scanf("%d",&sq_8[b]);
		while(sq_8[b]!=0 && sq_8[b]!=1 )
		{
			printf("Error Values in the K-Map Try Again");
			printf("\n Enter 1 or 0 in the square %d = ",b);
		    scanf("%d",&sq_8[b]);
		}
	}
	
	printf("\n The Karnaugh Map is- \n %d %d %d %d \n %d %d %d %d \n  ", sq_8[0],sq_8[1],sq_8[3],sq_8[2],sq_8[4],sq_8[5],sq_8[7],sq_8[6]);
	
	//all 8 squares are 0
	if(sq_8[0]==0 && sq_8[1]==0 && sq_8[2]==0 && sq_8[3]==0 && sq_8[4]==0 && sq_8[5]==0 && sq_8[6]==0 && sq_8[7]==0)  
    {
	printf( "The function value is 1.");
	getch();
	return 0;
	}	
	
	//all 8 squares are 1
	if(sq_8[0]==0 && sq_8[1]==0 && sq_8[2]==0 && sq_8[3]==0 && sq_8[4]==0 && sq_8[5]==0 && sq_8[6]==0 && sq_8[7]==0)  
    {
	printf( "The function value is 0.");
	getch();
	return 0;
	}	
	
	//if any of the 8 squares is 0
	printf("The boolean Function is:-");
	
	if(sq_8[0]==0 && sq_8[1]!=0 && sq_8[2]!=0 && sq_8[4]!=0)
	{
		printf("(%c+%c+%c)",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[0]==0 && sq_8[1]==0)
	{
		printf("(%c+%c)",var_name[0],var_name[1]);
	}
	else if(sq_8[0]==0 && sq_8[2]==0)
	{
		printf("(%c+%c)",var_name[0],var_name[2]);
	}
	else if(sq_8[0]==0 && sq_8[4]==0)
	{
	    printf("(%c+%c)",var_name[1],var_name[2]);
	}
	
	if(sq_8[1]==0 && sq_8[3]!=0 && sq_8[5]!=0)
	{
		printf("(%c+%c+%c')",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[1]==0 && sq_8[3]==0)
	{
		printf("(%c+%c')",var_name[0],var_name[2]);
	}
	else if(sq_8[1]==0 && sq_8[5]==0)
	{
		printf("(%c+%c')",var_name[1],var_name[2]);
	}
	
	if(sq_8[3]==0 && sq_8[7]!=0 && sq_8[2]!=0)
	{
		printf("(%c+%c'+%c')",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[3]==0 && sq_8[7]==0)
	{
		printf("(%c'+%c')",var_name[1],var_name[2]);
	}
	else if(sq_8[3]==0 && sq_8[2]==0)
	{
		printf("(%c+%c')",var_name[0],var_name[1]);
	}
	
	if(sq_8[2]==0 && sq_8[6]!=0)
	{
		printf("(%c+%c'+%c)",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[2]==0 && sq_8[6]==0)
	{
		printf("(%c'+%c)",var_name[1],var_name[2]);
	}
	
	if(sq_8[4]==0 && sq_8[6]!=0 && sq_8[5]!=0)
	{
		printf("(%c'+%c+%c)",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[4]==0 && sq_8[6]==0)
	{
		printf("(%c'+%c)",var_name[0],var_name[2]);
	}
	else if(sq_8[4]==0 && sq_8[5]==0)
	{
		printf("(%c'+%c)",var_name[0],var_name[1]);
	}
	
	if(sq_8[5]==0 && sq_8[7]!=0)
	{
		printf("(%c'+%c+%c')",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[5]==0 && sq_8[7]==0)
	{
		printf("(%c'+%c')",var_name[0],var_name[2]);
	}
	
	if(sq_8[7]==0 && sq_8[6]!=0)
	{
		printf("(%c'+%c'+%c')",var_name[0],var_name[1],var_name[2]);
    }
	else if(sq_8[7]==0 && sq_8[6]==0)
	{
		printf("(%c'+%c')",var_name[0],var_name[1]);
	}
	
	if(sq_8[0]==0 && sq_8[1]==0 && sq_8[4]==0 && sq_8[5]==0)
	{
		printf("%c",var_name[1]);
	}
	
	if(sq_8[0]==0 && sq_8[4]==0 && sq_8[2]==0 && sq_8[6]==0)
	{
		printf("%c",var_name[2]);
	}
	
	if(sq_8[1]==0 && sq_8[3]==0 && sq_8[5]==0 && sq_8[7]==0)
	{
		printf("%c'",var_name[2]);
	}
	if(sq_8[3]==0 && sq_8[2]==0 && sq_8[7]==0 && sq_8[6]==0)
	{
		printf("%c'",var_name[1]);
	}
	
	if(sq_8[0]==0 && sq_8[1]==0 && sq_8[2]==0 && sq_8[3]==0)
	{
		printf("%c",var_name[0]);
	}
	
	if(sq_8[4]==0 && sq_8[5]==0 && sq_8[7]==0 && sq_8[6]==0)
	{
		printf("%c'",var_name[0]);
	}
	
	return 0;
}

/* Variables are:X Y Z

 Enter 1 or 0 in the square 0 = 1

 Enter 1 or 0 in the square 1 = 1

 Enter 1 or 0 in the square 2 = 0

 Enter 1 or 0 in the square 3 = 0

 Enter 1 or 0 in the square 4 = 1

 Enter 1 or 0 in the square 5 = 0

 Enter 1 or 0 in the square 6 = 0

 Enter 1 or 0 in the square 7 = 1

 The Karnaugh Map is-
 1 1 0 0
 1 0 1 0
  The boolean Function is:-(X+Y')(Y'+Z)(X'+Y+Z')
  */
