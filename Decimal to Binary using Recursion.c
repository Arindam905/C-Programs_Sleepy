#include <stdio.h>

void decimal_to_binary(int num){
        if(num>1){
            decimal_to_binary(num/2);
        }
        printf("%d\n", num % 2);

}


int main(){
int n = 10;

decimal_to_binary(n);

return 0;
}
