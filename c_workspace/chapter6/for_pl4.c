#include <stdio.h>
/**
 * 
 * i=1 * 
 * i=2 **
 * i=3 ***
 * i=4 ****
 * i=5 *****
*/
int main(void){
    // 1. 5�� �ݺ��ϴ�
    // 2. ���� ������ �ݺ�
    for(int i=1; i<=5; i++) {
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}