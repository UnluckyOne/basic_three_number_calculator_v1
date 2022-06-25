//
//  main.c
//  basic_three_number_calculator
//
//  Created by Yanzhe on 2022/6/25.
//

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    printf("Please imput 3 integers\n");
    printf("Example: 1,2,3\n");
    scanf("%d,%d,%d", &num1, &num2,&num3);
    printf("The sum of both interger is: %d\n", num1+num2+num3);
    printf("Please imput 3 integers\n");
    printf("Example: 1,2,3\n");
    scanf("%d,%d,%d", &num1, &num2,&num3);
    printf("The difference of both interger is: %d\n", num1-num2-num3);
    printf("Please imput 3 integers\n");
    printf("Example: 1,2,3\n");
    scanf("%d,%d,%d", &num1, &num2,&num3);
    printf("The product of both interger is: %d\n", num1*num2*num3);
    printf("Please imput 3 integers\n");
    printf("Example: 1,2,3\n");
    scanf("%d,%d,%d", &num1, &num2,&num3);
    printf("The quotient of both interger is: %d\n", num1/num2/num3);
    return 0;
}
