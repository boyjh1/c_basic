#include <stdio.h>

int main(void) {
    int total = 0;
    for(int i=1; i<=100; i++){
            total += i;
    }

    int num = 1;
    while(num <= 100) {
        total += num;
        num++;
    }
    printf("����: %dd\n", total);

}



/**
 * 1~100���� ���� ����(for)
 * 
 * 1~100���� ���� ����(while)
 * 
*/