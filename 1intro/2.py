n = int(input())

k = set(range(1, n+1))

e = list(map(int, input().split()))

print(list(k - set(e))[0])
