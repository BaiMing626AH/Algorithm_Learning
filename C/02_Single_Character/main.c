#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = (char *)malloc(100 * sizeof(char));
    unsigned char i = 0;
    unsigned char j = 0;
    int count = 0;
    if (str == NULL) 
    {
        fprintf(stderr, "申请内存失败\n");
        return 1;
    }
    scanf("%s", str);
    count = strlen(str);
    for ( i = 0; i < count; i++)
    {
        for ( j = i+1; j < count ; j++)
        {
            if (abs(str[i] - str[j]) > 0)
            {
            }
            else
            {
                printf("NO\n");
                free(str);
                return 0;
            }
        }
    }
    printf("YES");
    free(str); // 释放内存
    return 0;
}