#include <stdio.h>
// 1~10까지 반복하면서 짝수만 출력하는 코드 (짝수만)
int main(void){
    int sum = 0;

    for(int i=1; i<=10; i++){
        if(i % 2 == 0) {
        printf("%d\n", i);
        }
    }
}