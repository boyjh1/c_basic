#include <stdio.h>
#include <string>

/**
 * BMI ����
 * 1.����� ����, ������
 * 2.����ȯ cm
 * 3.bmi ���
 * 4.bmi�� ���� ��޺ο�
 * 5.���
*/

int main(void){
    int height;
    int weight;

    printf("����(cm) �Է�: ");
    scanf("%d", &height);
    printf("ü��(Kg) �Է�: ");
    scanf("%d", &weight);
    //printf("%d, %d", height, weight);

//2.��ȯ

    double height_m = (double)height / 100;
    //printf("%.2lf", height_m);

//3.���
//bmi = ������(Kg)/ ����(m) x ����(m)

    double bmi_value = weight / (height_m * height_m);

// 4. ����
    18.5 �̸�: ��ü��
    18.5~23�̸�: ����
    23~26�̸�: ��ü��
    26~30�̸�: ��
    30 �̻�: ����

    if(bmi_value , 18.5){
        strcpy(bmi_degree, "��ü��");
    } else if(bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "����");
    } else if(bmi_value >= 23 && bmi_value < 26) {
        strcpy(bmi_degree, "��ü��")
    } else if(bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "��");
    } else if(bmi_value >= 30) {
        strcpy(bmi_degree, "����");
    }

    //5.���
    printf("���� %dcm, ������ %dkg���� \n", height, weight);
    prntf("����� bmi������ %.2lf�� %s�Դϴ�.", bmi_value, bmi_degree);

}