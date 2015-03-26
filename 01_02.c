#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str)
{
    size_t len = strlen(str);
    for (int i = 0 ; i < len / 2 ; i ++)
    {
        int  pos = len - i - 1;
        char tmp = str[pos];
        str[pos] = str[i];
        str[i] = tmp;
    }
}

int main(int argc, char *argv[])
{
    if (!argv[1])
    {
        printf("usage: 01_02 str_to_reverse\n");
        return 0;
    }

    char *src = (char*)malloc(sizeof(char) * (strlen(argv[1]) + 1));
    strcpy(src, argv[1]);

    printf("%s\n", src);
    reverse(src);
    printf("%s\n", src);

    free(src);

    return 0;
}
