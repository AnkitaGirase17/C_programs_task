// 1 2 Fizz 4 Buzz 7 8 Fizz Buzz 11 Fizz 13 14 fizzBuzz

#include<stdio.h>

int num;
int main()
{
 printf("Enter the  number of terms");
 scanf("%d",&num);
 int i;
  for(i=0;i<=num;i++)
  {
  	
    if(i==0)
	  {
	  	printf("\n");
	  }
    else if(i%3==0 && i%5==0)
  	  {
  	 	printf("\n FizzBuzz");
	  }
	else if(i%5==0)  
    {
    	printf("\n Buzz");
	}
	else if (i%3==0)
	{
		printf("\n Fizz");
	}
	else
	{
		printf(" \n %d",i);
	}
	
  }	
}
