#include <stdio.h>
// 1~10���� �ݺ��ϸ鼭 ¦���� ����ϴ� �ڵ� (¦����)
int main(void){
    int sum = 0;

    for(int i=1; i<=10; i++){
        if(i % 2 == 0) {
        printf("%d\n", i);
        }
    }
}