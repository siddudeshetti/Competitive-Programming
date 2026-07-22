class Node:
    def __init__(self,val):
        self.val = val 
        self.left = None
        self.right = None





# ---------- SLL ----------

def sll_insertion_at_last(head,val):

    new_node = Node(val)

    if head is None:
        return new_node

    temp = head

    while temp.right:
        temp = temp.right
    temp.right = new_node

    return head

def sll_delete_at_last(head):

    if head is None:
        return None

    if head.right is None:
        return None

    prev = None
    temp = head

    while temp.right:
        prev = temp
        temp = temp.right
    prev.right = None

    return head





# ---------- DLL  ----------
def dll_insertion_at_last(head,val):

    new_node = Node(val)

    if head is None:
        return new_node

    temp = head

    while temp.right:
        temp = temp.right
    temp.right = new_node
    new_node.left = temp

    return head

def dll_insertion_at_position(head,val,postion):
    new_node = Node(val)

    if postion == 0:
        new_node.right = head
        if head:
            head.left = new_node
        return new_node

    temp = head
    i = 0

    while temp and i < postion-1:
        temp = temp.right
        i+=1

    if temp is None:
        return head
    
    new_node.right = temp.right
    new_node.left = temp

    if temp.right:
        temp.right.left = new_node

    temp.right = new_node
    

    return head


def dll_delete_at_end(head):
    if head is None or head.right is None:
        return None

    temp = head

    while temp.right:
        temp = temp.right

    temp.left.right = None

    return head

def dll_delete_at_position(head,position):
    if head is None:
        return None

    if position == 0:
        head = head.right
        if head:
            head.left = None
        return head

    temp = head
    i = 0
    while temp and i < position:
        temp = temp.right
        i+=1

    if temp is None:
        return head

    temp.left.right = temp.right
    if temp.right:
        temp.right.left = temp.left
    return head
    




