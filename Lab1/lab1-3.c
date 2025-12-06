#include<stdio.h>

int data[100];
int *GetSet(int *a){
   printf("How many number of element?\n");
   scanf("%d", a);
   printf("Enter element:\n");
   for (int i = 0; i < *a; i++){
        scanf("%d", &data[i]);
    
   }
   return data;
}
int main(){
    int *data, num;
    data = GetSet(&num);
    for(int i = 0; i < num; i++){
        printf("%d ", data[i]);
    }
    return 0;
}