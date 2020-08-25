// 숫자 맞추기(Up&Down)

#include<stdio.h>
#include<time.h>

int main(void)
{
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    int answer = 0; // 정답
    int chance = 5; // 기회
    
    while(1)
    {
        printf("남은 기회 %d 번\n", chance--);
        printf("숫자를 맞혀보세요 (1~100) : ");
        scanf_s("%d", &answer);

        if (answer > num)
        {
            printf("DOWN ↓ \n\n");
        } 
        else if (answer < num)
        {
            printf("UP ↑ \n\n");
        }
        else if (answer == num)
        {
            printf("정답입니다 ! \n\n");
            break;
        }
        else
        {
            printf("알 수 없는 오류가 발생하였습니다. \n\n");
        }

        if (chance == 0) 
        {
            printf("기회를 모두 사용하였습니다. \n\n");
            break;
        }
    }

    return 0;
}