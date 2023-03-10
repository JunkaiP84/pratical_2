#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main()
{
    int array[4][4]={{1,5,3,5},{1,2,5,3},{1,2,3,4},{1,3,1,3}};
    count_digits(array);
    
    return 0;
}

