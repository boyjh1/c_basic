/**
 * �ݺ���
 * - ������ �����ϴ� ���� �ݺ��ؼ� ����
 * 1) while�� - �ݺ�Ƚ�� ��
 * 2) for�� - �ݺ�Ƚ���� ������ ���
 * 
 * ��: Ű����ũ
 * 
*/

#include <stdio.h>

int main(void) {
    int a = 1;

    while(a < 10) {
        a = a*2;
    }
    printf("a : %dd\n", a);
}