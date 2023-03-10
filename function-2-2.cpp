#include <stdio.h>
#include <iostream>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    int num=0;
    int j=0;
    for(int i=number_of_digits-1;i>=0;i--){
        num=num+binary_digits[i]*pow(2,number_of_digits-1-i);
        j++;
    }

    return num;
}
