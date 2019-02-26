#include <cs50.h>
#include <stdio.h>

void chart(int score);

int main (void)
{
           
    int scores[20];
    int a = get_int("How many assignments?: ");
    for (int i = 0; i < a; i++){ 
       
        scores[i] = get_int("Score %f: ", i + 1);
        
    }
         int possible[20];
    for (int b = 0.0; b < a; b++){
        possible[b] = get_int("Possible Points for Score %f: ", b + 1);
        
    }
    int percent [20];
    int n = 0;
    for (int c = 0.0; c < a; c++)
        percent[c] = (int) scores / (int) possible == n;
    printf("Grade Average : %f", n);
   
        
    
       
    
}
