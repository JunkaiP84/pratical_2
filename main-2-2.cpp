#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary[]={1,1,1,1};
    int size=4;
    std::cout << binary_to_int(binary, size) << std::endl;
}

