using System;

namespace _03_Another_Arrangement
{
    class Program
    {
        static void Main(string[] args)
        {
            string? str1 = Console.ReadLine();
            string? str2 = Console.ReadLine();

            if (string.IsNullOrEmpty(str1) || string.IsNullOrEmpty(str2))
            {
                Console.WriteLine("NO");
                return;
            }

            if (str1.Length != str2.Length)
            {
                Console.WriteLine("NO");
                return;
            }

            char[] arr1 = str1.ToCharArray();
            char[] arr2 = str2.ToCharArray();

            SortUtils.Sort(arr1);
            SortUtils.Sort(arr2);

            for (int i = 0; i < arr1.Length; i++)
            {
                if (arr1[i] != arr2[i])
                {
                    Console.WriteLine("NO");
                    return;
                }
            }

            Console.WriteLine("YES");
        }
    }
}