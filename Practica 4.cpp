// Calculadora

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char op;
	float num1, num2, result=0.0f;
	
	/*Print welcome message*/
	printf("WELOCME TO SIMPLE CALCULATOR\n");
	printf("----------------------------\n");
	printf("Enter [number 1] [+ - * /] [number 2]\n");
	
	/* Input two number and operator from user*/
	scanf("%f %c %f", &num1, &op, &num2);
	 /*Switch the value and perfom action based on operator*/
	 switch(op)
	 {
	 	case '+':
	 		result = num1 + num2;
	 		break;
	 		
	 	case '-':
		 	result = num1 - num2;
		 	break;
		
		case '*':
			result= num1 * num2;
			break;
		
		case '/':
			result = num1 / num2;
			break;
		
		default:
			printf("Invalid operation");	  	
	 }
	 
	 /*Prints the result*/
	 printf("%.2f %c %.2f = %2.f", num1, op, num2, result);
	 
	 return 0;
}

