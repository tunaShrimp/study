#include <stdio.h>

//선언
void p(int num);
int apple(int total, int eat);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    // int num = 2;
    // // printf("num 은 %d 입니다\n", num);
    // p(num);
    // num = num + 3;
    // // printf("num은 %d 입니다\n", num);
    // p(num);
    // num -= 1;
    // // printf("num은 %d 입니다\n", num);
    // p(num);
    // num *= 3;
    // // printf("num은 %d 입니다\n", num);
    // p(num);
    // num /= 6;
    // // printf("num은 %d 입니다\n", num);
    // p(num);

    // 파라미터(전달값)도 받고, 반환값이 있는 함수
    // int ret = apple(5, 2);  // 5개의 사과중에서 2개를 먹었어요
    // printf("사과 5개중에 2개를 먹으면? %d 개가 남아요\n", ret);

    // 계산기 함수
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

//정의
void p(int num)
{
    printf("num은 %d 입니다\n", num);
}

int apple(int total, int eat)
{
    printf("전달값과 반환값이 있는 함수 입니다.");
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