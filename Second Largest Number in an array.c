#include<stdio.h>

int main(){
int arr[30],temp,len;

printf("How many elements: ");
scanf("%d",&len);

for(int i = 0; i < len; i++){
    scanf("%d",&arr[i]);
}
for(int i = 0; i < len; i++){
    for(int j = i + 1; j < len; j++){
        if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
printf("Second Largest Number is %d", arr[len - 2]);
return 0;
}
