// 6-6 연결 리스트 : 트리

/*
트리는 연결리스트를 기반으로 한 새로운 데이터 구조
트리에서의 노드 연결은 2차원적 구성 (각 노드 위치 + 다음 층의 노드 가리키는 포인터)
*/

//이진 탐색 트리의 노드 구조체  --자신 기준으로 왼쪽에있는모든값들이 더 작고 / 오른쪽은 더 큼  -- O(log n)
typedef struct node
{
    int number;           // 노드의 값
    struct node *left;    // 왼쪽 자식 노드
    struct node *right;   // 오른쪽 자식 노드   //=> 노드에 포인터가 2개씩 들어가게(공간 더 사용)해서 탐색시간 log로 단축
} node;

// 이진 검색 함수 (*tree는 이진 검색 트리를 가리키는 포인터 = 정확하게는 트리 루트의 주소)
bool search(node *tree)
{
    // 트리가 비어있는 경우 ‘false’를 반환하고 함수 종료
    if (tree == NULL)
    {
        return false;
    }
    // 현재 노드의 값(트리의 number)이 50보다 크면 왼쪽 노드 검색
    else if (50 < tree->number)
    {
        return search(tree->left);
    }
    // 현재 노드의 값이 50보다 작으면 오른쪽 노드 검색
    else if (50 > tree->number)
    {
        return search(tree->right);
    }
    // 위 모든 조건이 만족하지 않으면 노드의 값이 50이므로 ‘true’ 반환
    else {
        return true;
    }
}