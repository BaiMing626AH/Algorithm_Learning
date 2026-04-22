#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lib/SortUtils.h"

int main() 
{
    char *str1 = (char *)malloc(100 * sizeof(char));
    char *str2 = (char *)malloc(100 * sizeof(char));
    unsigned char i = 0;
    scanf("%s", str1);
    scanf("%s", str2);
    if((strlen(str1) - strlen(str2)))
    {
        printf("NO");
        free(str1);
        free(str2);
        return 0;
    }
    Sort(str1, strlen(str1));
    Sort(str2, strlen(str2));
    for(i = 0; i < strlen(str1); i++)
    {
        if(*(str1+i) - *(str2+i))
        {
            printf("NO");
            free(str1);
            free(str2);
            return 0;
        }
    }
    printf("YES");
    free(str1);
    free(str2);
    return 0;
}