/* The first step in implementing the program is to include the necessary libraries. 
We will use math.h to perform various mathematical calculations such as square root and power.*/

#include <stdio.h>
#include <math.h>

//Next, we will define the main function.

int main(){
    
    // Welcome Message
    printf("*******SCIENTIFIC CALCULATOR*******\n");

    //Variable Declaration
    double num1,num2,result,num,exponent,degree,radian;

    while(1){
    
        /*Now we will take input of the numbers and the operation that the user wishes to 
        perform*/

        printf("\nChoose the mathematical operation you want to perform:\n");
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square root\n");
        printf("6. Power\n");
        printf("7. Sin\n");
        printf("8. Cos\n");
        printf("9. Tan\n");
        printf("10. Exit.\n");

        //After this, we will take the user input using scanf.

        int choice;
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        //Next, we will write a switch statement to perform the selected operation.

        if(choice==10) break;

        switch(choice) {

            case 1: printf("\nEnter two numbers: ");
                    scanf("%lf %lf", &num1, &num2);
                    result = num1 + num2;
                    printf("\nResult: %lf\n", result);
                    break;
            case 2: printf("\nEnter two numbers: ");
                    scanf("%lf %lf", &num1, &num2);
                    result = num1 - num2;
                    printf("Result: %lf\n", result);
                    break;
            case 3: printf("\nEnter two numbers: ");
                    scanf("%lf %lf", &num1, &num2);
                    result = num1 * num2;
                    printf("\nResult: %lf\n", result);
                    break;
            case 4: printf("\nEnter two numbers: ");
                    scanf("%lf %lf", &num1, &num2);
                    result = num1/num2;
                    printf("\nResult: %lf\n", result);
                    break;
            case 5: printf("Enter a number: ");
                    scanf("%lf", &num);
                    result = sqrt(num);
                    printf("\nResult: %lf\n", result);  
                    break;
            case 6: printf("\nEnter a number and its exponent: ");
                    scanf("%lf %lf", &num, &exponent);
                    result = pow(num, exponent);
                    printf("\nResult: %lf\n", result); 
                    break;
            case 7: printf("\nEnter your angle value in degree : ");
                    scanf("%lf", &degree);
                    radian = degree * (acosl(-1.0L)/ 180);
                    printf("\nsin value is %lf \n", sin(radian));
                    break;
            case 8: printf("\nEnter your angle value in degree : ");
                    scanf("%lf", &degree);
                    radian = degree * (acosl(-1.0L)/ 180);
                    printf("\ncos value is %lf \n", cos(radian));
                    break;
            case 9: printf("\nEnter your angle value in degree : ");
                    scanf("%lf", &degree);
                    radian = degree * (acosl(-1.0L)/ 180);
                    printf("\ntan value is %lf \n", sin(radian));
                    break;
            default: printf("\nInvalid choice. Try again\n");
        }
    }
    return 0;
}