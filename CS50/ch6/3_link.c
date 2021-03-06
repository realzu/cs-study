// 6-3 연결리스트 : 도입

/*
자료구조는 컴퓨터 메모리에 정보를 각기 다른 방법으로 저장할수있게해줌
데이터 구조는 컴퓨터 메모리를 더 효율적으로 관리하기 위해 새로 정의하는 구조체 (=일종의 메모리 레이아웃)

=> 데이터 구조 중 하나인, '연결 리스트'

struct --구조체
.   --node.number과 같이 속성 이어줌
*   --반대 연산자

배열은 고정된 메모리 덩어리
연결 리스트(linked list)는 메모리 덩어리 여러개를 포함한 데이터 구조 (각 값이 메모리상에서 나뉘어있어도 바로 다음 값의 메모리 주소만 기억하고 있으면 연이어 읽어들일수있음)
: 포인터로 연결돼있음
1 2 3 (각각 다른 메모리(=다른 주소))의 애들을 연결시키기 위해, 3개의 포인터를 더 저장(다음에 연결될 주소). 즉, 2배의 메모리 필요
마지막의 끝나는 곳에는 NULL(0x0)

number + next(리스트의 다음 요소를 가리키는 메모리 덩어리)

node : 직사각형으로 나타낼수있는 메모리 덩어리
*/

//연결 리스트의 기본 단위가 되는 node 구조체를 정의합니다.
typedef struct node //struct뒤에 단어를 추가해줌으로써, 사용하고자 하는 단어 추가 -> 안그러면 맨밑의node가 생기기도 전에 {}안에 있는 node가 인식이 안됌 -- top to bottom
{
    //node 안에서 정수형 값이 저장되는 변수를 name으로 지정합니다.
    int number; //숫자

    //다음 node의 주소를 가리키는 포인터를  *next로 지정합니다.
    struct node *next;  //포인터 -- node구조체를 가리키는
}
node;