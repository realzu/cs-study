# 파트2. 선형 배열(Linear Arrays)

L = ['Bob', 'Cat', 'Spam', 'Programmers']

print(L[1]) #앞에서 2번째
print(L[-2]) #뒤에서 2번째



''' 리스트(배열) 연산 '''
#원소 덧붙이기
L.append('New')

# 끝에서 꺼내기 --하나의 원소
L.pop()     #리스트 길이와 무관 (=상수 시간 =O(1))



L = [20, 37, 58, 72, 91]
# 원소 삽입하기
L.insert(3, 65)     #3번째 index에 65값 추가

# 원소 삭제하기
del(L[2])       #2번째 index 원소 삭제

L.pop(2)    #65삭제 --del과의 차이는?



L = ['Bob', 'Cat', 'Spam', 'Programmers']
L.index('Spam') #2



'''(실습1) 정렬된 리스트에 원소 삽입'''
def solution(L, x):

    if x > L[-1]:
        L.append(x) #@
        return L
    
    for i in L:
        if x <= i:
            index = L.index(i)
            L.insert(index, x)
            return L

# 다른 사람의 풀이  -- enumerate★
def Solution(L, x):
    for idx, num in enumerate(L):
        if x < num:
            L.insert(idx, x)
            break

        if L[-1] < x:
            L.append(x)
        else:
            break
    
    return L

'''
+ enumerate : 인덱스와 원소로 이루어진 tuple 만듦

2차원 리스트 루프
L = [['A', 'B', 'C'], ['D', 'E', 'F'], ['G', 'H', 'I']]
for r in range(len(L)):
    for c in range(len(L[r])):
        print(r, c, L[r][c])    # 0 0 A / 0 1 B

-> enumerate 사용!
for r, row in enumerate(L):
    for c, letter in enumerate(row):
        print(r, c, letter)
'''


'''(실습2) 리스트에서 원소 찾아내기'''
def solution(L, x):
    answer = []
    
    n = 0
    for idx, num in enumerate(L):
        if x in L[n:idx+1]:
            answer.append(idx)
            n = idx+1
    
    if x not in L:
        answer.append(-1)
    
    return answer

# 다른 사람의 풀이
def solution(L, x):
    if x in L:
        return [i for i, num in enumerate(L) if num == x]
    else:
        return [-1]