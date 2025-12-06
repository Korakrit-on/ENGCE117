#include<stdio.h>

void GetSet(int a[], int *b){
    printf("Enter number of elements: \n");
    scanf("%d", b);
    printf("Enter %d numbers: \n", *b);
    for(int i = 0; i < *b; i++){
        scanf("%d", &a[i]);
    }
}

int main(){
    int data[100], num;
    GetSet(data, &num);
    for(int i = 0; i < num; i++)
        printf("%d ", data[i]);
    printf("\n");
    return 0;
}