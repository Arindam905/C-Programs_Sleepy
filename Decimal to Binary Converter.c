#include<stdio.h>
#include<math.h>

int main(){
int i, j, n = 10, rem = 0, len = 1;
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


for(j = len; j >= 0; j--){
    printf("%d", arr[j]);
}




    return 0;
}
