#include <stdio.h>

//����
void p(int num);
int apple(int total, int eat);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    // int num = 2;
    // // printf("num �� %d �Դϴ�\n", num);
    // p(num);
    // num = num + 3;
    // // printf("num�� %d �Դϴ�\n", num);
    // p(num);
    // num -= 1;
    // // printf("num�� %d �Դϴ�\n", num);
    // p(num);
    // num *= 3;
    // // printf("num�� %d �Դϴ�\n", num);
    // p(num);
    // num /= 6;
    // // printf("num�� %d �Դϴ�\n", num);
    // p(num);

    // �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
    // int ret = apple(5, 2);  // 5���� ����߿��� 2���� �Ծ����
    // printf("��� 5���߿� 2���� ������? %d ���� ���ƿ�\n", ret);

    // ���� �Լ�
    int num = 2;
    num = add(num, 3);
    p(num);

    num = sub(num, 1);
    p(num);

    num = mul(num, 3);
    p(num);

    num - div(num, 6);
    p(num);

    return 0;
}

//����
void p(int num)
{
    printf("num�� %d �Դϴ�\n", num);
}

int apple(int total, int eat)
{
    printf("���ް��� ��ȯ���� �ִ� �Լ� �Դϴ�.");
    return total - eat;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}
int div(int num1, int num2)
{
    return num1 / num2;
}