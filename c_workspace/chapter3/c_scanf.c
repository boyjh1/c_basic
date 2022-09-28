#include <stdio.h>

// scanf() 함수
//   + 키보드로부터 값을 입력
/**
 *  변수: 
*/

int main(void) {
    int age = 20; 
    printf("%d\n", age);

    printf("나이:");
    scanf("%d", &age); // &가 있으면 age변수의 메모리 주소

    printf("%d", age);
}