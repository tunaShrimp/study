// ������ ���� ����

#include <stdio.h>

int main()
{
    printf("�̸�?");
    char name[256];
    scanf_s("%s", name, sizeof(name));
    
    printf("����?");
    int age;
    scanf_s("%d", &age);

    printf("������?");
    float weight;
    scanf_s("%f", &weight);

    printf("Ű?");
    double height;
    scanf_s("%lf", &height);

    printf("����?");
    char what[256];
    scanf_s("%s", what, sizeof(what));

    printf("\n\n--- ������ ���� ---\n\n");
    printf("�̸�    : %s\n", name);
    printf("����    : %d\n", age);
    printf("������  : %.2f\n", weight);
    printf("Ű      : %.2lf\n", height);
    printf("����    : %s\n", what);

    return 0;
}