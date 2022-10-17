#include <stdio.h>
#include <string>

/**
 * BMI 계산기
 * 1.사용자 신장, 몸무게
 * 2.값변환 cm
 * 3.bmi 계산
 * 4.bmi에 따른 등급부여
 * 5.출력
*/

int main(void){
    int height;
    int weight;

    printf("신장(cm) 입력: ");
    scanf("%d", &height);
    printf("체중(Kg) 입력: ");
    scanf("%d", &weight);
    //printf("%d, %d", height, weight);

//2.변환

    double height_m = (double)height / 100;
    //printf("%.2lf", height_m);

//3.계산
//bmi = 몸무게(Kg)/ 신장(m) x 신장(m)

    double bmi_value = weight / (height_m * height_m);

// 4. 조건
    18.5 미만: 저체중
    18.5~23미만: 정상
    23~26미만: 과체중
    26~30미만: 비만
    30 이상: 고도비만

    if(bmi_value , 18.5){
        strcpy(bmi_degree, "저체중");
    } else if(bmi_value >= 18.5 && bmi_value < 23) {
        strcpy(bmi_degree, "정상");
    } else if(bmi_value >= 23 && bmi_value < 26) {
        strcpy(bmi_degree, "과체중")
    } else if(bmi_value >= 26 && bmi_value < 30) {
        strcpy(bmi_degree, "비만");
    } else if(bmi_value >= 30) {
        strcpy(bmi_degree, "고도비만");
    }

    //5.출력
    printf("신장 %dcm, 몸무게 %dkg으로 \n", height, weight);
    prntf("당시의 bmi지수는 %.2lf로 %s입니다.", bmi_value, bmi_degree);

}