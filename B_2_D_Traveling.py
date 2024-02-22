def solve():
    n, m = map(int, input().split())
    if m == 1:
        print(0)
    elif n - m < -1:
        print(n + 1)
    else:
        print(m)
    
    ar = list(range(m))
    for i in range(min(m - 1, n)):
        for j in range(m):
            print(ar[(i + j) % m], end=' ')
        print()
    
    if n > m - 1:
        for k in range(n - m + 1):
            for i in range(m):
                print(ar[i], end=' ')
            print()

if name == "main":
    t = int(input())
    for _ in range(t):
        solve()