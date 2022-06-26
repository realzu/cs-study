// 4-4 버블 정렬

/*
정렬 알고리즘 中 1
2 개의 인접한 자료 값을 비교하며 위치 교환하는 정렬
단 2개의 좁은 범위의 요소끼리 정렬

의사코드)
Repeat n–1 times
    For i from 0 to n–2
        If i'th and i+1'th elements out of order
            Swap them

중첩 루프
버블 정렬 실행 시간의 상한은 O(n^2), 하한은 Ω(n^2)
*/