#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int menu;
float num1, num2, result;

printf("Select a number from the list below :-\n\n");

printf("1. Addition\n"); 
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n\n");

printf("Enter the  number: "); 
scanf("%d", &menu);

printf("\n");

switch(menu)
{
case 1:
printf("You selected Addition\n\n");

printf("Enter the first number: "); 
scanf("%f", &num1);

printf("Enter the second number: "); 
scanf("%f", &num2);

printf("\n");

result = num1 + num2; 

printf("%.2f + %.2f = %.2f\n", num1, num2, result); 
break;
case 2:
printf("You selected Subtraction\n\n");

printf("Enter the first number: "); 
scanf("%f", &num1);

printf("Enter thr second number: "); 
scanf("%f", &num2);

printf("\n");

result = num1 - num2; 

printf("%.2f - %.2f = %.2f\n", num1, num2, result); 
break;
case 3:
printf("You selected Multiplication\n\n");

printf("Enter the first number: "); 
scanf("%f", &num1);

printf("Enter the second number: "); 
scanf("%f", &num2);

printf("\n");

result = num1 * num2; 

printf("%.2f * %.2f = %.2f\n", num1, num2, result); 
break;
case 4:
printf("You selected Division\n\n");

printf("Enter the Dividend: ");
scanf("%f", &num1);

printf("Enter the Divisor: ");
scanf("%f", &num2);

printf("\n");

if (num2 == 0) {
printf("Error: Division by zero is not allowed.\n");
} else {
float quotient = num1 / num2;  
float remainder = fmod(num1, num2);

printf("Quotient = %.2f\n", quotient);
printf("Remainder = %.2f\n", remainder);
};
default:
printf("Enter correct number e.g 1 - 4\n"); 
break;
}
return 0;
}