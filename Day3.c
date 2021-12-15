
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define LENGTH 5
#define NUM_DIAGN 5

int main()
{
    int coeff_arr[LENGTH] = {0}; //sums zeros and ones
    int gamma = 0, epsilon = 0, power;
    char *diagnostic_arr[NUM_DIAGN] = {"00110","10101","01001","11100","01011"};
    
    for(int i = 0 ; i < NUM_DIAGN ; i++ ){
        for(int j = 0 ; j < 5 ; j++){
            if( diagnostic_arr[i][j] == '1' )
               coeff_arr[j] += 1;
            else
                coeff_arr[j] -= 1;
        }
    }
    
    for(int i = 0; i < LENGTH; i++){
        if(coeff_arr[i] <= 0){
            epsilon += pow(2,4 - i);
        else
            gamma += pow(2,4 - i);
    }
    
    for(int i = 0; i < LENGTH; i++)
        printf("%d ",coeff_arr[i]);
      
    power=gamma*epsilon;
    printf("\nGamma: %d, epsilon: %d, power: %d", gamma, epsilon, power);

    return 0;
}
