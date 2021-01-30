#include <stdio.h>

int main() {
    int  n,temp,arrayQaliq1,arrayQaliq2;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n-1-i ; ++j) {
            arrayQaliq1=array[j]%10;
            arrayQaliq2=array[j+1]%10;
            if (arrayQaliq1>arrayQaliq2){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            } else if (arrayQaliq1==arrayQaliq2 && array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",array[i]);
    }
    return 0;
}
