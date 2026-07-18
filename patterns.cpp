def pattern1(n):
    for i in range(n):
        for j in range(n):
            print("*",end=" ")
        print()

def pattern2(n):
    for i in range(n):
        for j in range(0,i+1):
            print("*",end=" ")
        print()

def pattern3(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end=" ")
        print()

def pattern4(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(i,end=" ")
        print()

def pattern5(n):
    for i in range(n):
        for j in range(0,n-i):
            print("*",end=" ")
        print()
    
def pattern6(n):
    for i in range(1,n+1):
        for j in range(1,n-i+2):
            print(j,end=" ")
        print()
    
def pattern7(n):
    for i in range(n):

        for j in range(n-i-1):
            print("-",end=" ")
        
        for j in range(2*i+1):
            print("*",end=" ")

        for j in range(n-i-1):
            print("-",end=" ")
        print()

def pattern8(n):
    for i in range(n):

        for j in range(i):
            print("-",end=" ")
        
        for j in range(2*(n-i)-1):
            print("*",end=" ")

        for j in range(i):
            print("-",end=" ")
        print()

def pattern9(n):
    pattern7(n)
    pattern8(n)

def pattern10(n):
    for i in range(1,2*n):
        stars = i
        if i > n : stars = 2*n-i
        for j in range(0,stars):
            print("*",end=" ")
        print()

def pattern11(n):
    start = 1
    for i in range(n):
        if i%2 == 0 : start = 1
        else : start = 0
        for j in range(i+1):
            print(start, end=" ")
            start = 1- start
        print()

def pattern12(n):
    space = 2*(n-1)
    for i in range(n):
        for j in range(1,i+1):
            print(j,end= " ")

        for j in range(0,space):
            print("-",end = " ")

        for j in range(i,0,-1):
            print(j,end = " ")
        space = space-2
        print()
        
def pattern13(n):
    m = 1
    for i in range(1,n+1):
        for j in range(i):
            print(m,end = " ")
            m += 1
        print()

def pattern14(n):
    for i in range(65,65+n):
        for j in range(65,i+1):
            print(chr(j),end = " ")
        print()

def pattern15(n):
    start = 65
    end = 65+n
    counter = 0
    for i in range(start,end):
        for j in range(start,end-counter):
            print(chr(j),end = " ")
        counter = counter+1
        print()
        
def pattern16(n):
    start = 65
    end = 65+n
    for i in range(start,end):
        for j in range(start,i+1):
            print(chr(i),end = " ")
        print()

def pattern17(n):
    
        
        
        

        
        


        

pattern17(5)
