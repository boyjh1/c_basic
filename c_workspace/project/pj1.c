/**
 * ����: 5�ڸ�
 * ��: 57256
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
// �ڵ�
// 5 + 7 + 2 + 5 + 6 = 25
    printf("���� %d\n", total);
}


int main(void) {
    int num = 57256;
    int total = 0;

    for(int i=1; i<=5; i++) {
        num = num / 10;
        total += (num % 10);
    }

    printf("���� %d\n", total);
}

// ���� 1.���ڸ� ����ڿ��� �Է�(scanf)
//�ڸ� �� ���� ��Ȳ������ �Ȱ��� ����