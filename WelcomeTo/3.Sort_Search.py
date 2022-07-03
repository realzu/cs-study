# 3강: 정렬(Sort), 탐색(Search)
'''* 정렬'''
L = [3, 8, 2, 7, 6, 10, 9]

L2 = sorted(L)
print(L2)

L.sort()
print(L)

L2 = sorted(L, reverse=True)
L.sort(reverse=True)

# 문자열 길이 순서 정렬 : key 이용
L = ['abcd', 'xyz', 'span']
L2 = sorted(L, key=lambda x : len(x)) #같은4글자라면 먼저 입력된 순서로 나온다

# key를 지정하는 다른 예 : 사전 이용
L = [{'name':'John', 'score':93}, {'name':'Paul', 'score':65}]
L.sort(key=lambda x : x['name']) #레코드 이름 순
L.sort(key=lambda x : x['score'], reverse=True) #점수 높은순 정렬


'''* 탐색'''
# 선형 탐색
def linear_search(L, x):
    i = 0   #index
    while i < len(L) and L[i] != x:
        i += 1
    if i < len(L): #while문에서 나온것
        return i
    else:
        return -1

# 이진 탐색 --이미 리스트가 정렬되어 있는 경우에 적용 가능
'''
lower = 0
upper = len(L) - 1
idx = -1
while lower <= upper:
    middle = (lower + upper) // 2
    if L[middle] == target:
        ...
    elif L[middle] < target:
        lower = ...
    else:
        upper = ...
'''



'''(실습3) 이진탐색'''
def solution(L, x):
    answer = -1
    
    low = 0
    up = len(L) - 1
    
    while low <= up:
        mid = (low + up) // 2
        if L[mid] == x:
            answer = mid
            break
        elif L[mid] < x:
            low = mid + 1
        else:
            up = mid - 1
    
    return answer
