# 파트5. 재귀 알고리즘(Recursive Algorithms) 응용

'''조합의 수 계산
n! / m!(n-m)!
'''
# 라이브러리 사용
from math import factorial as f

def combi(n, m):
    return f(n) / (f(m) * f(n-m))

# 재귀적 방법
def combi(n, m):
    if n == m:      #종결조건
        return 1
    elif m == 0:
        return 1
    else:   #진행
        return combi(n-1, m) + combi(n-1, m-1)  #이 원소 포함x경우 + 포함o경우


def solution(L, x, l, u):
    # if x not in L[l:u+1]:   #리스트 L전체를 비교하면->효율성 낮아서실패
    if l > u:   #밑에 else문처럼 계속 l이 mid+1로 증가하다가 u보다 커질 땐 값이 없다는거니.
        return -1
    mid = (l + u) // 2
    if x == L[mid]:
        return mid
    elif x < L[mid]:
        return solution(L, x, l, mid-1)
    else:
        return solution(L, x, mid+1, u)
