#include <stdio.h>

int main(void){
    int score;
    char grade;
    
    if(score >= 0 && score <= 100){
    } else {
        printf("ERROR: 0~100�� ������ ���� �Է��Ͻÿ�.");
        if(score <= 100 && score >= 91) {
        grade = 'A';
        } else if (score <= 90 && score >= 81) {
            grade = 'B';
        } else if (score <= 80 && score >= 71) {
            grade = 'C';
        } else if (score <= 70 && score >= 61) {
            grade = 'D';
        } else if (score <=60 && score >= 0) {
            grade = 'F';
        }
        if(score >=0 && score <= 100) {
        printf("�л��� ������ %d������ %c�����Դϴ�.", score, grade);
}
}