# #adj_matrix ========================================

# n = int(input())
# matrix = []

# for i in range(n):
#     row = list(map(int,input().split()))
#     matrix.append(row)

# for i in range(n):
#     for j in range(n):
#         print(matrix[i][j],end = " ")
#     print()





# adj_list ========================================

# n, m = list(map(int,input().split()))

# adj_list = []
# for i in range(n):
#     adj_list.append([])

# for i in range(m):
#     u, v = list(map(int,input().split()))
#     adj_list[u].append(v)
#     adj_list[v].append(u)

# for i in range(n):
#     print(i,"=",adj_list[i])





# adj_list traversal ========================================

# def bfs(adj_list):
#     n = len(adj_list)

#     visit =[0]*n
#     q = deque()
#     ans = []

#     visit[0] = 1
#     q.append(0)

#     while q:

#         node = q.popleft()
#         ans.append(node)

#         for x in adj_list[node]:
#             if not visit[x]:
#                 visit[x] = 1
#                 q.append(x)

#     return ans





# def dfs(node,adj_list,visit,ans):
#     visit[node] = 1
#     ans.append(node)

#     for x in adj_list[node]:
#         if not visit[x]:
#             dfs(x,adj_list,visit,ans)

#     return ans





# matrix to adj_list ========================================

# adj_list =[]

# for i in range(n):
#     row = []

#     for j in range(n):
#         if matrix[i][j]==1:
#             row.append(j)

#     adj_list.append(row)





# adj_list to matrix========================================

# matrix = []
# for i in range(n):
#     rows = []
#     for j in range(n):
#         rows.append(0)
#     matrix.append(rows)

# for i in range(n):
#     for j in adj_list[i]:
#         matrix[i][j] =1
