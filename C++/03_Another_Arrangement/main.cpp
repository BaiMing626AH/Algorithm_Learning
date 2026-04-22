#include <iostream>
#include <cstring> 
#include "Lib/SortUtils.h"

int main()
{
    const int MAX_LEN = 100;
    char *str1 = new char[MAX_LEN];
    char *str2 = new char[MAX_LEN];

    std::cin >> str1; 
    std::cin >> str2;

    size_t len1 = std::strlen(str1);
    size_t len2 = std::strlen(str2);

    if (len1 != len2)
    {
        std::cout << "NO";
        delete[] str1;
        delete[] str2;
        return 0;
    }

    Sort(str1, static_cast<int>(len1));
    Sort(str2, static_cast<int>(len2));

    for (size_t i = 0; i < len1; ++i)
    {
        if (str1[i] != str2[i])
        {
            std::cout << "NO";
            delete[] str1;
            delete[] str2;
            return 0;
        }
    }

    std::cout << "YES";
    delete[] str1;
    delete[] str2;
    return 0;
}