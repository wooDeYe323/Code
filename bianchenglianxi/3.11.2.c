//��дһ������Ҫ����ʾ����һ��ASCII��ֵ��Ȼ���ӡ������ַ�
/*#include <stdio.h>
int main(void)
{
    char A;

    printf("������һ��ASCII��ֵ��\n");
    scanf("%c",&A);
    printf("�����ASCII��ֵ��Ӧ���ַ�Ϊ%d",A);

    getchar();
    getchar();
    getchar();

    return 0;
    

}*/
//��
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Please you enter a ASCII value:");
    scanf("%d", &ch);
    printf("ASCII %d is %c.\n", ch, ch);

    getchar();//��������Ϊ�������
    getchar();

    return 0;
}

