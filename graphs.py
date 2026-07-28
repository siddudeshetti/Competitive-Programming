def graph():
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



        


