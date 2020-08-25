// 경찰서 조서 쓰기

#include <stdio.h>

int main()
{
    printf("이름?");
    char name[256];
    scanf_s("%s", name, sizeof(name));
    
    printf("나이?");
    int age;
    scanf_s("%d", &age);

    printf("몸무게?");
    float weight;
    scanf_s("%f", &weight);

    printf("키?");
    double height;
    scanf_s("%lf", &height);

    printf("범죄?");
    char what[256];
    scanf_s("%s", what, sizeof(what));

    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf("이름    : %s\n", name);
    printf("나이    : %d\n", age);
    printf("몸무게  : %.2f\n", weight);
    printf("키      : %.2lf\n", height);
    printf("범죄    : %s\n", what);

    return 0;
}