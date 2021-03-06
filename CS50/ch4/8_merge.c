// 4-8 병합 정렬
/*
왼쪽 절반 정렬 -> 오른쪽 절반 정렬 -> 병합
병합 : 두 배열 중에서 가장 작은 값을 꺼내 -> 다른 배열의 가장 작은 값 다음에 두는 과정
so, 원소가 한 개가 될 때까지 계속 반으로 나누다가 -> 나눈 것들끼리 비교해가며 다시 병합
7 4 5 2 -> 7 4 / 5 2 -> '7 / 4' / 5 2 (나눠진 부분 중 1번째 한번더 나눔) -> '4 7' / 5 2 -> 4 7 / '5 / 2' -> ...

실행 시간의 상한은 O(n log n)
숫자들을 반으로 나누는 데는 O(log n)의 시간, 반으로 나눈 부분들을 다시 정렬해서 병합하는 데 각각 O(n)의 시간

실행 시간의 하한도 역시 Ω(n log n) 
숫자들이 이미 정렬되었는지 여부에 관계 없이 나누고 병합하는 과정이 필요
*/

/*
Quiz)
선택 O(n^2 O(n^2
버블 O(n^2) Ω(n^2)->Ω(n)
선형 O(n) Ω(1)
이진 O(log n) Ω(1)
병합 O(n log n) Ω(n log n) 

이 선형 버블 선택
버블 병합 선택
*/