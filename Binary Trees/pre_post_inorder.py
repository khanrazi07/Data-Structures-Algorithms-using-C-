#here i am writing the codes for pre post and in order traversal 
# i am writing the dynamic code and not going to implement tree also


def pre_order(self , Node):
    if Node == None:
        return
    print(Node.val)
    self.pre_order(Node.left)
    self.pre_order(Node.right)

def post_order(self , Node):
    if Node == None:
        return
    self.post_order(Node.left)
    self.post_order(Node.right)
    print(Node.val)

def In_order(self , Node):
    if Node == None:
        return
    
    self.In_order(Node.left)
    print(Node.val)
    self.In_order(Node.right)