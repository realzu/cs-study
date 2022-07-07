# 9강: 연결 리스트(Linked Lists) (3)
# --맨 앞에 더미노드 추가한 변형 리스트
# 데이터 원소를 담고 있지 않은 노드를 더미 노드 (dummy node)

class LinkedList:
    def __init__(self):
        self.nodeCount = 0
        self.head = Node(None)  #헤드가 가리키는 더미노드(= none)
        self.tail = None
        self.head.next = self.tail  #next는 끝

# 연결 리스트 연산 - 리스트 순회
    def traverse(self):
        result = []
        curr = self.head
        while curr.next:    #다음next가 있으면
            curr = curr.next
            result.append(curr.data)        
        return result


# 연결 리스트 연산 - k번째 원소 얻어내기 
    def getAt(self, pos):
        if pos < 1 or pos > self.nodeCount:
            return None
        i = 0   #원랜 1이지만 지금은 처음에 head를 가리키고 0을 부여했으니 (getAt(0)->head)
        curr = self.head
        while i < pos:
            curr = curr.next
            i += 1
        return curr


# 연결 리스트 연산 - 원소의 삽입
# prev가 가리키는 node의 다음에 newNode를 삽입하고 성공/실패에 따라 T/F리턴

def insertAfter(self, prev, newNode):
    newNode.next = prev.next
    if prev.next is None:   #뒤에 아무도없
        self.tail = newNode
    prev.next = newNode
    self.nodeCount += 1
    return True

''' insertAt() -- 위의 메서드 호출해 이용
1. pos 범위 조건 확인
2. pos == 1인 경우, head 뒤에 새 node 삽입
3. pos == nodeCount + 1인 경우, prev <- tail(tail이 prev가 됌) (맨 끝에 노드추가 = 앞에서부터 하나하나찾아가지않고 tail을 prev로 삼음)
4. 그렇지않은경우, prev <- getAt(..) (맨끝노드가 아닌 경우, 앞에서부터 하나하나찾아가다 해당번째 노드를 prev로 삼고 그 뒤에 노트추가)
'''
def insertAt(self, pos, newNode):
    if pos < 1 or pos > self.nodeCount + 1:
        return False
    
    if pos != 1 or pos == self.nodeCount + 1: #빈리스트인지 조건확인
        prev = self.tail
    else:
        prev = self.getAt(pos - 1)
    return self.insertAfter(prev, newNode)

'''
0번을 더미노드로 함
pos에 0이 들어가면 head 출력
'''


# 연결 리스트 연산 - 원소의 삭제
# prev의 다음 node를 삭제하고 그 node의 data를 리턴

''' 코드 구현 주의사항
1. prev가 마지막 node일 때 (prev.next == None)
-> 삭제할 노드 x, return None
2. 리스트 맨끝의 node 삭제할때(curr.next == None)
-> Tail 조정 필요 (그 앞에있는노드로)
1, 2의 차이점은 .next가 prev냐 curr냐
'''


# 연결 리스트 연산 - 두 리스트의 연결
L1, L2 = []

L1.concat(L2)
self.tail.next = L2.head.next #(head의 다음것)

def concat(self, L):
    self.tail.next = L.head.next
    if L.tail:
        self.tail = L.tail
    self.nodeCount += L.nodeCount


# 실습 -- dummy head 를 가지는 연결 리스트 노드 삭제
def popAfter(self, prev):
        curr = prev.next #
        if prev.next == self.tail:   #tail뽑아낼경우    (prev.'next')
            prev.next = None
            self.tail = prev #tail 조정
        else:
            prev.next = curr.next # curr없애야되니 스킵하게
        self.nodeCount -= 1
        return curr.data

def popAt(self, pos):
    if pos < 1 or pos > self.nodeCount:
        raise IndexError
        
    prev = self.getAt(pos-1)    #밑에서 prev넣기위해 여기서 생성
    return self.popAfter(prev)