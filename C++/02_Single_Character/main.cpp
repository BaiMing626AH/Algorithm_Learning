#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    char *str = (char *)malloc(100 * sizeof(char));
    if (str == nullptr)
    {
        std::cerr << "申请内存失败" << std::endl;
        return 1;
    }

    std::cin >> str;
    int count = strlen(str);

    for (int i = 0; i < count; ++i)
    {
        for (int j = i + 1; j < count; ++j)
        {
            if (str[i] == str[j])
            {
                std::cout << "NO" << std::endl;
                free(str);
                return 0;
            }
        }
    }

    std::cout << "YES" << std::endl;
    free(str);
    return 0;
}