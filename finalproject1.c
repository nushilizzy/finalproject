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


int main(int argc, char* argv[]) 
{
    char operator;
    int num1,num2;
      if (argc != 4) {
    printf("%s : Error, incorrect number of arguments\n", argv[0]);
  }
    sscanf(argv[1], "%c", &operator);
    sscanf(argv[2], "%d", &num1);
    sscanf(argv[3], "%d", &num2);
    switch(operator)
    {
        case '+':
            printf("%d + %d = %d\n",num1, num2, num1 + num2);
            int b= num1 + num2;
	    qualitiesofnumber(b);
	    break;
        case '-':
            printf("%d - %d = %d\n",num1, num2, num1 - num2);
	    int c= num1 - num2;
	    qualitiesofnumber(c);
	    break;
        case '*':
            printf("%d * %d = %d\n",num1, num2, num1 * num2);
            int d= num1 * num2;
            qualitiesofnumber(d);
	    break;
        case '/':
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            int e= num1 / num2;
	    qualitiesofnumber(e);
	    break;
        default:
            printf("Enter a valid operator..");
    }    
    return 0;
}
 

