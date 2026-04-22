from Lib.SortUtils import Sort
def main():
    str1 = input()
    str2 = input()

    if len(str1) != len(str2):
        print("NO")
        return

    list1 = list(str1)
    list2 = list(str2)
    Sort(list1)
    Sort(list2)

    if list1 == list2:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()