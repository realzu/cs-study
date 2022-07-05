# 파트7. 연결 리스트(Linked Lists) (1) 

class Node:
    def __init__(self, item):
        self.data = item
        self.next = None

class LinkedList:
    def __init__(self):
        self.nodeCount = 0 #노드갯수0
        self.head = None
        self.tail = None    #즉 비어있는 연결리스트


# 67(Head) - 34 - 58(Tail)
'''
인덱스 0을 시작번호로 지정하지 않고 임의로 1부터 시작하는게 편할 경우도 있음 (배열이 아니니까)
'''

# 특정 원소 참조    --k번째노드찾기
def getAt(self, pos): #pos번째에 있는 노드 자체를 리턴
    if pos <= 0 or pos > self.nodeCount:
        return None
    
    i = 1
    curr = self.head    #curr= current
    while i < pos:  #i가 pos보다 작을 동안 반복함
        curr = curr.next #다음 노드로 연결
        i += 1    
    return curr

