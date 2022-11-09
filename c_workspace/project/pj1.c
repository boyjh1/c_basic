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


int main(void) {
    int num = 57256;
    int total = 0;

    for(int i=1; i<=5; i++) {
        num = num / 10;
        total += (num % 10);
    }

    printf("총합 %d\n", total);
}

// 과제 1.숫자를 사용자에게 입력(scanf)
//자리 수 없는 상황에서도 똑같이 동작