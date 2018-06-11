#include<stdio.h> 
int qualitiesofnumber(int n)
{ int t, reverse = 0;
 
  t = n;
 
  while (t != 0) {
    reverse = reverse * 10;
    reverse = reverse + t%10;
    t = t/10;
  }
 
  if (n == reverse)
    printf("The solution is a palindrome!\n");
  else
    printf("The solution is not a palindrome!\n");

    if (n == 0.0)
        printf("The solution is 0.\n");
    else if (n<0.0)
        printf("The solution is a negative number.\n");
    else
        printf("The solution is a positive number.\n");
int c=2;
 for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         printf("The solution isn't prime.\n");
     break;
      }
   }
   if ( c == n )
      printf("The solution is prime.\n");
 if (n%2 == 0)
      printf("The solution is even.\n");
   else
      printf("The solution is odd.\n");
 
return 0;
}


int main() 
{
    char operator;
    int firstNumber,secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%d %d",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%d + %d = %d\n",firstNumber, secondNumber, firstNumber + secondNumber);
            int b= firstNumber + secondNumber;
	    qualitiesofnumber(b);
	    break;
        case '-':
            printf("%d - %d = %d\n",firstNumber, secondNumber, firstNumber - secondNumber);
	    int c= firstNumber - secondNumber;
	    qualitiesofnumber(c);
	    break;
        case '*':
            printf("%d * %d = %d\n",firstNumber, secondNumber, firstNumber * secondNumber);
            int d= firstNumber * secondNumber;
            qualitiesofnumber(d);
	    break;
        case '/':
            printf("%d / %d = %d\n",firstNumber, secondNumber, firstNumber / secondNumber);
            int e= firstNumber / secondNumber;
	    qualitiesofnumber(e);
	    break;
        default:
            printf("Error! operator is not correct");
    }    
    return 0;
}
 

