# 파트4. 재귀 알고리즘(Recursive Algorithms) 기초

def sum(n):
    if n <= 1:  #종결 조건이 있어야함 - 없으면 계속 반복되어 에러
        return n
    else:
        return n + sum(n-1) #--자기자신을 재귀적으로 호출


# n! (팩토리얼)
def what(n):
    if n <= 1:
        return 1
    else:
        return n * what(n-1)


'''(실습4) 피보나치 순열 구하기'''
# 재귀적 방법
def solution(x):
    
    if x <= 1:
        return x
    else:
        return solution(x-1) + solution(x-2)

# 반복적 방법 ★
def solution(x):
    cur, nex = 0, 1

    for i in range(x):  #3번
        cur, nex = nex, (cur + nex) #1, 1(0+1) / 1, 2(1+1) / 2, 3(1+2)
    return cur