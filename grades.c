#include <stdio.h>

int main()
{
    int n, i;
    float num[100], earned = 0.0, hum[100], grade; // states num and hum is 100 and the points earned begins at 0.
    int possible = 0; // states integer possible is 0 to start

    printf("Enter the numbers of assignments: "); //Establishes # of assignments
    scanf("%d", &n); // reads the result

    while (n > 100 || n <= 0) // if the number of assignments surpass 100, do the following
    {
        printf("Error! number should in range of (1 to 100).\n"); // gives an error
        printf("Enter the number again: "); // ask for a new number
        scanf("%d", &n); // reads the input
    }

    for(i = 0; i < n; ++i) // i starts at 0. add 1 to i each time the for loop  completes. Once i gets higher than the number of assignments, stop.
    {
        printf("%d. Enter earned points in assignment: ", i+1); // ask for points earned
        scanf("%f", &num[i]); // read that input
        earned += num[i]; // adds and stores values into an array
         
        printf("%d. Enter total possible points in assignment: ", i+1); // asks for total possible points
        scanf("%f", &hum[i]); // reads that input
        possible += hum[i]; // adds and stores values into seperate array
    }
    


    grade = earned / possible *100; // divide both arrays by each other and multiple that by 100
    printf("Your final grade is = %.2f", grade); // prints the Grade Average

    return 0; // the exit or stop
}
