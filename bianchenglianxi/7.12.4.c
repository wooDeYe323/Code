#include <stdio.h>
int main()
{
    int times =0;
    int ch;
    
    printf("Enter some characeters:(# to quit)\n");
    while((ch =getchar()) != '#')
    {
      if(ch == '.')
      {
        ch = '!';
        times++;
      }
         else if(ch == '!')
       {
         ch = '!';
         times++;
         printf("%c",ch); //因为'!！'不是字符 所以为了使! 转化为!! 此处也许打印一次
       } 
       printf("%c",ch);

    }
    printf("gong zhuan huan le %d ci.\n",times);
    getchar();
    getchar();

    return 0;
}