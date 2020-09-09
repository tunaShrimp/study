// ���� ���߱�(Up&Down)

#include<stdio.h>
#include<time.h>

int main(void)
{
    srand(time(NULL));
    int num = rand() % 100 + 1; // 1 ~ 100
    int answer = 0; // ����
    int chance = 5; // ��ȸ
    
    while(1)
    {
        printf("���� ��ȸ %d ��\n", chance--);
        printf("���ڸ� ���������� (1~100) : ");
        scanf_s("%d", &answer);

        if (answer > num)
        {
            printf("DOWN �� \n\n");
        } 
        else if (answer < num)
        {
            printf("UP �� \n\n");
        }
        else if (answer == num)
        {
            printf("�����Դϴ� ! \n\n");
            break;
        }
        else
        {
            printf("�� �� ���� ������ �߻��Ͽ����ϴ�. \n\n");
        }

        if (chance == 0) 
        {
            printf("��ȸ�� ��� ����Ͽ����ϴ�. \n\n");
            break;
        }
    }

    return 0;
}