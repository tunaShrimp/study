#define _CRT_SEOURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10000

int main(void)
{
    // ���� �����
    // ���Ͽ� � �����͸� ����.
    // ���Ͽ� ����� �����͸� �ҷ�����

    // fputs, fgets
    char line[MAX];
    FILE * file = fopen("c:\\test1.txt", "wb");
    if (file == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }

    fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
    fputs("�� �������� Ȯ�����ּ���\n", file);

    // ������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����?
    // ������ �ս� �߻� ���� ! �׷��� �׻� ������ �ݾ��ִ� ����
    fclose(file);

    // fprintf, fscanf


    return 0;
}