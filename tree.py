from collections import deque

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


# ---------- Insertion ----------

def bfs0(root,data):
    new_node = Node(data) #remove if traversal

    if root is None:
        return  new_node #None if tarversal
    
    q = deque([root]) 

    while q:
        temp = q.popleft()

        if temp.left is None:
            temp.left = new_node
            return root
        else:
            q.append(temp.left)
        
        if temp.right is None:
            temp.right = new_node
            return root
        else:
            q.append(temp.right)

def dfs0(root,data):

    if root is None:
        return Node(data)
    
    if data < root.data:
        root.left = dfs0(root.left,data)
    else:
        root.right = dfs0(root.right,data)

    return root



# ---------- Traversals ----------

def preorder(root):

    if root:
        print(root.data,end= " ")
        preorder(root.left)
        preorder(root.right)

def inorder(root):

    if root:
        inorder(root.left)
        print(root.data,end = " ")
        inorder(root.right)
    
def postorder(root):

    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.data,end = " ")

def level_order_traversal(root):
    if root is None:
        return
    
    q = deque([root])

    while q:
        temp = q.popleft()
        print(temp.data,end = " ")

        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)




# ---------- driver code ----------

arr = [1,2,3,4,5,6,7]

root = None

for x in arr:
    root = bfs0(root,x)

preorder(root)
print()
inorder(root)
print()
postorder(root)
print()
level_order_traversal(root)
print()
