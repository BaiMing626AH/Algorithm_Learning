using System;

class Program
{
    static void Main()
    {
        string? str = Console.ReadLine();

        // 如果输入为空，直接输出 NO 并返回
        if (string.IsNullOrEmpty(str))
        {
            Console.WriteLine("NO");
            return;
        }

        int count = str.Length;

        // 双重循环检查是否有重复字符
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                // 如果两个字符相等，则输出 NO 并结束程序
                if (str[i] == str[j])
                {
                    Console.WriteLine("NO");
                    return;
                }
            }
        }

        // 没有重复字符，输出 YES
        Console.WriteLine("YES");
    }
}