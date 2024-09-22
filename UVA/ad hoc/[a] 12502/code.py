t = int(input())
for i in range(t):
    x, y, z = map(int, input().split())
    print(max(int((2*x-y)*z/(x+y)), 0))