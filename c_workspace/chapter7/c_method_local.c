#include <stdio.h>

/**
 * 지역변수와 전역변수
 *  지역변수는 범위가 함수 내, 즉 일정 지역에서만 사용하는 변수
 *  지역 변수는 사용범위가{} 내로 제한, 다른 함수 사용 불가
 *  지역변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 공간
 *  함수가 다 사용되고 반환되면 지역변수의 공간 자동으로 회수
 *  함수의 매개변수는 지역변수
*/

int main(void) {
    int a = 1, b = 2;
    // 사용할 수 있는 변수가 2개 이상 사용된 경우 가장 가까운 변수가 사용됨
    int result;
    //int a = 5; //Error(똑같은 이름 변수를 중복 선언 x)
    printf("덧셈: %d", sum(a,b));
}

int sum(int x, int y) {
    int result;
    result = x + y;
    return result;
}