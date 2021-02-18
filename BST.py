class BST:
    def __init__(self,data=None):
        self.data=data
        self.left=None
        self.right=None
    def add_child(self,data):
        if self.data==data:
            return
        else:
            if data<self.data:
                if self.left:
                    self.left.add_child(data)
                else:
                    self.left=BST(data)
            else:
                if self.right:
                    self.right.add_child(data)
                else:
                    self.right=BST(data)
    def search(self,data):
        if self.data==data:
            print("Key exists on BST")
        else:
            if data<self.data:
                if self.left:
                    self.left.search(data)
            else:
                if self.right:
                    self.right.search(data)

        return False
    def in_order_traversal(self):
        elements=[]
        if self.left:
            elements+=self.left.in_order_traversal()
        elements.append(self.data)
        if self.right:
            elements+=self.right.in_order_traversal()
        return elements

    def delete(self, val):
        if val < self.data:
            if self.left:
                self.left = self.left.delete(val)
        elif val > self.data:
            if self.right:
                self.right = self.right.delete(val)
        else:
            if self.left is None and self.right is None:
                return None
            elif self.left is None:
                return self.right
            elif self.right is None:
                return self.left

            min_val = self.right.find_min()
            self.data = min_val
            self.right = self.right.delete(min_val)

        return self

    def find_max(self):
        if self.right is None:
            return self.data
        return self.right.find_max()

    def find_min(self):
        if self.left is None:
            return self.data
        return self.left.find_min()
def generate_BST(elements):
    root=BST(elements[0])
    for item in elements[1:]:
        root.add_child(item)
    return root
numbers_tree = generate_BST([17, 4, 1, 20, 9, 23, 18, 34])
print(numbers_tree.in_order_traversal())
numbers_tree.search(21)
numbers_tree.delete(20)
print(numbers_tree.in_order_traversal())