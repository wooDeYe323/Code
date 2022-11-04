#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    float count;
    bool inword = false;
    int ch, words, letter;
    words = letter = 0;

    printf("Please enter some words (EOF to quit):\n");
    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))      //遇到标点重新输入
        {
            continue;
        }
        if (isalpha(ch))    
        {
            letter++;           //计数字母
        }
        if (!isspace(ch) && !inword)  //如果不是空格 并且 在单词里
        {
            inword = true;
            words++;    //计数单词
        }
        if (isspace(ch) && inword)
        {
            inword = false;
        }
    }
    count = (float)letter / words;
    printf("Total words: %d.\n", words);
    printf("Total letters: %d.\n", letter);
    printf("Average letters of words: %g.\n", count);

    return 0;
}
