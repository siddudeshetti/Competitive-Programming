from collections import deque

def graph_insertion():
    n = int(input())
    m = int(input())

    #adj matrix------------------------------
    
    matrix = []
    for i in range(n):
        matrix.append([0]*n)


    for i in range(m):
        u = int(input())
        v = int(input())

        matrix[u][v] = 1
        matrix[v][u] = 1

    #adj list------------------------------

    arr = []
    for i in range(n):
        arr.append([])


    for i in range(m):
        u = int(input())
        v = int(input())

        arr[u].append(u)
        arr[v].append(v)

def dfs(node,adj,visit,ans):
    visit[node] = 1
    ans.append(node)

    for x in adj[node]:
        if not visit[x]:
            dfs(x,adj,visit,ans)

def bfs(v,adj):

    visit = [0]*v
    visit[0] = 1

    ans = []

    q = deque()
    q.append(0)

    while q:
        node = q.popleft()
        ans.append(node)

        for x in adj[node]:
            if not visit[x]:
                visit[x] =1
                q.append(x)

    return ans


        

