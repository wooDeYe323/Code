//��дһ�����򣬶�ȡһ�����������ȴ�ӡ��С������ʽ���ٴ�ӡ��ָ����ʽ��Ȼ�����ϵͳ֧�֣��ٴ�ӡ��P����������ʮ�����Ƽ���������
#include <stdio.h>
int main(void)
{
    float A;
    
    printf("����һ����������\n");
    scanf("%f",&A);

    printf("%f\n",A);
    printf("A��ָ����ʽ��%e\n",A);
    printf("A��ָ����ʽ��%a\n",A);

    getchar();
    getchar();
    
    return 0;
}
/*
#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter a float-point value:");
    scanf("%f", &number);
    printf("fixed-point notation: %f\n", number);
    //��С������ʽ;
    printf("exponential notation: %e\n", number);
    //��ָ����ʽ;
    printf("p notation: %a\n", number);
    //��ʮ�����Ƽ�����;

    return 0;
}
*/
//2022.9.3