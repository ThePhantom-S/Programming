#Singly Linked List

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.prev = None

def traverse(node: Node):
    while node:
        print(node.data, end = "->")
        node = node.next
    print("NULL")
def rev(node: Node):
    while node:
        print(node.data,end = "->")
        node = node.prev
    print("NULL")

node1:Node = Node(1)
node2:Node = Node(2)
node3:Node = Node(3)
node4:Node = Node(4)

node1.next = node2
node2.next = node3
node3.next = node4

node2.prev = node1
node3.prev = node2
node4.prev = node3

traverse(node1)
rev(node4)