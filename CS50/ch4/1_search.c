/* 4-1 검색 알고리즘

선형 검색(linear search) : 배열의 인덱스를 처음부터 끝까지 하나씩 증가시키면서 방문하여 그 값이 속하는지를 검사

For i from 0 to n–1

    If i'th element is 50
        Return true

Return false


이진 검색(binary search) (배열 정렬 시) :
배열 '중간' 인덱스부터 시작하여 찾는 값과 비교하며 그보다 '작은'(작은 값이 저장돼있는) 인덱스 or '큰' (큰 값이 저장돼있는) 인덱스로 이동을 반복

If no items
    Return false

If middle item is 50
    Return true

Else if 50 < middle item
    Search left half

Else if 50 > middle item
    Search right half
*/