#include<stdio.h>

int increment(int a, int b){
    int i;

    for(i = 0; i < a; i++){
        b++;
    }

    return b;

}

int main(){
int num1, num2, result;

printf("Enter the number 1:");
scanf("%d",&num1);

printf("Enter the number 2:");
scanf("%d",&num2);

if(num1 > num2){
    result = increment(num1,num2);
    printf("Sum = %d",result);
}

else if(num2>num1){
    result = increment(num2,num1);
    printf("Sum = %d",result);
}

else{
    printf("The numbers are same");
}


return 0;
}
