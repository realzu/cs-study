# 파트8. 연결 리스트(Linked Lists) (2)

# 원소의 삽입
'''
    prev = self.getAt(pos-1)
    newNode.next = prev.next
    prev.next = newNode
    self.nodeCount += 1
'''
def insertAt(self, pos, newNode):

    if pos < 1 or pos > self.nodeCount: #정상적x
        return False

    if pos == 1: #첫번째
        newNode.next = self.head
        self.head = newNode
    
    else:
        if pos == self.nodeCount + 1:
            prev = self.tail    #바로 연결
        else:
            prev = self.getAt(pos-1)
        newNode.next = prev.next
        prev.next = newNode
    
    if pos == self.nodeCount + 1: #맨뒤에 삽입
        self.tail = newNode

    self.nodeCount += 1
    return True

    #빈 리스트라면 15, 24 라인의 if절을 통과하여 head와 tail이 생김

'''코드 구현 주의사항
1) 삽입/삭제 위치가 리스트 맨 앞일때
prev (x)
Head 조정 필요

2) 삽입/삭제 위치가 리스트 맨 끝일때
Tail 조정 필요

-> 빈 리스트에 삽입할 때
위의 조건에 의해 처리 가능(Cf. 삭제는 x)
'''


# 원소 삭제
# pos-1번째(prev) 노드 찾고, pos를 current로 저장 -> prev.next를 current.next(pos+1)로 가리킴
# current의 data꺼내서 return
# nodeCount - 1

def popAt(self, pos):
        data = 0
        if pos < 0 or pos > self.nodeCount:
            raise IndexError

        if self.nodeCount == 1:
            data = self.head.data
            self.head = None
            self.tail = None

        else:
            if pos == 1:
                data = self.head.data
                self.head = self.head.next  #★
            else:
                prev = self.getAt(pos - 1)
                if pos == self.nodeCount:
                    data = prev.next.data
                    prev.next = None
                    self.tail = prev
                else:
                    data = prev.next.data
                    prev.next = prev.next.next

        self.nodeCount -= 1
        return data

'''
맨 끝의 노드 삭제 시(pos == nodeCount):
curr = tail (X)
prev찾을수없으므로!
'''


# 두 리스트의 연결 (L1, L2)
def concat(self, L):    #L은 뒤에 붙는 리스트
    self.tail.next = L.head
    if L.tail:  #L이 비었다면(tail이 none) --★왜!가 아닌지?
        self.tail = L.tail
    self.nodeCount += L.nodeCount
