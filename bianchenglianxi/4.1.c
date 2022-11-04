#include <stdio.h>
#include <string.h>         //提供strlen()函数原型
#define DENSITY 62.4        //人体密度（单位：磅/立方英尺）
int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];          //name是一个可容纳40个字符的数组

    printf("Hi! What's your first name?\n");
    scanf("%s", name);      //指针输入到数组时不用&
    printf("%s, what's your weight in pounds>\n", name);
    scanf("%f", &weight);
    size = sizeof(name);    // sizeof可以字节为单位给出对象的大小
    letters = strlen(name); //strlen()可以函数给出字符串中的字符长度
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n",
    name ,volume);
    printf("Also, your fitst name has %d letters,\n",
    letters);
    printf("and we have %d bytes to store it.\n", size);

    getchar();
    getchar();

    return 0;
}