/**
 * 숫자: 5자리
 * 예: 57256
*/

#include <stdio.h>

int main(void){
    int num = 57256;
    int total = 0;

    scanf("%d", %num);
    while(num) {
        total += num % 10;
        num /+ 10;
    }
// 코드
// 5 + 7 + 2 + 5 + 6 = 25
    printf("총합 %d\n", total);
}