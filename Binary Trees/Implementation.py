#lets say we have a this tree data strucres
'''                     
                      Drinks
                    /       \
                Cold        Hot
                / \         /  \
            cola    pepsi  tea  coffee

'''

class Node:
    def __init__(self ,val):
        self.val = val
        self.left = None
        self.right = None

drinks = Node("Drinks")
Cold = Node("Cold")
Hot = Node("Hot")
Cola =  Node("Cola")
pepsi = Node("pepsi")
coffee= Node("coffee")
tea = Node("tea")

drinks.left = Cold
drinks.right = Hot
Cold.left = Cola
Cold.right = pepsi
Hot.left = tea
Hot.right = coffee

print(drinks.val)




