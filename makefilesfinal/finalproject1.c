#include<stdio.h>
#include "finalfunc.h"

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


