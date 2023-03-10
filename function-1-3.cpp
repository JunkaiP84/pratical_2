#include <stdio.h>

void count_digits(int array[4][4]){
    int b[10]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            b[array[i][j]]++;
        }
    }

    printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;",b[0],b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9]);
}
