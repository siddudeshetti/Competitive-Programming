import sys
from collections import defaultdict, Counter, deque
from bisect import bisect_left, bisect_right
from heapq import heappush, heappop
input = sys.stdin.readline

INF = 10**18
MOD = 10**9 + 7

def solve():

    n = int(input())
    # s = input()
    # s = input().strip()
    # n, m = map(int, input().split())
    arr = list(map(int, input().split()))

    # mp = {}
    # for x in arr:
    #     if x not in mp:
    #         mp[x] = 0
    #     mp[x] += 1

    # for key, value in mp.items():
    #     print(key, value)

    # Algorithm =======
    




t = int(input())
while t > 0:
    solve()
    t-=1
