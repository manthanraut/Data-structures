class Node:
    def __init__(self,data=None,next=None):
        self.data=data
        self.next=next
class LinkedList:
    def __init__(self):
        self.head=None
    def insert_at_beginning(self,data):
        node=Node(data,self.head)
        self.head=node
    def print_list(self):
        if self.head==None:
            return -1
        else:
            itr=self.head
            s=""
            while itr:
               s+=str(itr.data)+"-->"
               itr=itr.next
        print(s[:len(s)-3])
    def insert_at_end(self,data):
        if self.head==None:
            return -1
        else:
            itr=self.head
            while itr.next:
                itr=itr.next
            itr.next=Node(data,None)
    def find_length(self):
        itr=self.head
        count=0
        while itr:
            count+=1
            itr=itr.next
        return count
    def insert_at(self,data,index):
        if self.head==None:
            return -1
        elif index<0 or index>self.find_length():
            print("Invalid index")
        else:
            itr=self.head
            count=0
            while itr:
                if count==index-1:
                    node=Node(data,itr.next)
                    itr.next=node
                count+=1
                itr=itr.next
    def delete_at(self,index):
        if self.head==None:
            print("Linked list is empty")
        elif index==0:
            self.head=None
        else:
            itr=self.head
            count=0
            while itr:
                if count==index-1:
                    itr.next=itr.next.next
                    break
                itr=itr.next
                count+=1

def generate_list(elements):
    l = LinkedList()
    if len(elements)==0:
        print("Invalid input")
    else:
        for item in elements:
            l.insert_at_beginning(item)
    l.insert_at(100,5)
    l.print_list()
    l.delete_at(5)
    l.print_list()
li=[1,2,3,4,5,6,7,8,9]
generate_list(li)
