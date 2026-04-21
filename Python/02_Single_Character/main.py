def main():
    s = input()
    n = len(s)
    for i in range(n):
        for j in range(i + 1, n):
            if s[i] == s[j]:
                print("NO")
                return 
    print("YES")


if __name__ == "__main__":
    main()