#include <stdio.h>

int main(void) {
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20) : %d\n", res);
    res = (a < 10) || (a > 20);
    printf("(a < 10) || (a > 20) : %d\n", res);
    res = !(a >= 30);
    printf("!(a >= 30) : %d\n", res);

}

/**
 * 1.AND(&&)
 *  - en 조건이 모두 참인 경우만 참
 *  조건1 |  조건 2  |  조건 3
 *  False    False      False
 *  True     False      False
 *  False    True       False
 *  True     True       True
 * 
 * 2.OR(||)
 *  - 조건 중 하나만 참이어도 참
 *  조건1 |  조건 2  |  조건 3
 *  False    False      False
 *  True     False      True
 *  False    True       True
 *  True     True       True
 * 
 * 3.
*/