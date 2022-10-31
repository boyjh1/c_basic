#include <stdio.h>

/**
 * for문: 초기식, 조건식, 증감식으로 구성
 * - 반복횟수를 세는 변수(i)는 반복문 안에서 변경 금지(개발자 규칙)
*/

int main(void) {
    int a = a;
    for(int i=1; i<10; 1++) {
        a = a * 2;
    }
    printf("a : %d\n", a);
}

// 반복횟수가 정해짐
// → 반복횟수 count : i 변수