#include <stdio.h>//SUM OF NATURAL NUMBERS USING RECURRSIVE FUNCTIONS

int sum(int n)
{
    if (n == 1)//Base Case
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);//Sum of Natural Number
    }
}

int main()
{
    int num;
    printf("Please enter a positive integer.\n");
//Taking input from the user
    scanf("%d", &num);
    int result = sum(num);//Calling the function
    printf("The sum of all integers from 1 to %d is %d\n", num, result);
    return 0;
}