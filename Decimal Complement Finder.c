#include<stdio.h>
#include<math.h>

int main(){
int i, j, n = 2, rem = 0, len = 1,sum = 0;
int arr[10] = {},temp;

for(i = 0; i < n; i++){
    rem = n % 2;
    arr[i] = rem;
    n /= 2;
}
arr[i] = 1;


for(i = 0; temp != '\0'; i++){
        len++;
        temp = arr[i];

}
//printf("%d", len);


for(i = 0; i < len+1; i++){
    if(arr[i] == 0){
        arr[i] = 1;
    }
    else if(arr[i] == 1){
        arr[i] = 0;
    }
    else{
        continue;
    }
}

for(j = len; j >= 0; j--){
    printf("%d", arr[j]);
}

for(i = 0; i< len+1; i++){
    arr[i] = arr[i] * pow(2,i);
    sum += arr[i];
}

printf("\n%d",sum);


    return 0;
}
