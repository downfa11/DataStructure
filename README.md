# DataStructure
Learn the Data Structure with C++

### 선형 자료구조

- Array
    
    물리적 위치와 논리적 순서가 일치하는 특징을 가진다.
    
    장점 :  index값을 통한 원소 접근이 용이하며, 구현이 쉽다.
    
    단점 : 삽입, 삭제 등에 대한 연산의 비용이 크다. 
    
    ex) index2자리에 원소를 삽입하려면 2345를 모두 바꿔줘야함.
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/764888bc-8d83-4e2b-b032-2c963b29d7af/Untitled.png)
    
- LinkedList
    
    Array 배열의 삽입/삭제 연산의 비효율성을 극복하고자 등장한게 LinkedList
    
    각 원소가 다음 index 위치에 해당하는 물리적 주소를 가지고 있다.
    
    따라서, 삽입/삭제시 데이터를 이동시킬 필요없이 해당 원소의 주소만 변경하면 된다.
    
    단점 : 원하는 index를 참조하려면 1번 index부터 차례대로 접근해야하는 비효율성
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/eaeb9ba2-b4cc-4b3b-a013-4d1795865451/Untitled.png)
    
- Set
    
    데이터의 집합. 
    
    순서가 없고, 중복을 허용하지 않음.
    
- Tuple
    
    List처럼 element 저장시 순차적으로 저장하지만 수정이 불가능하다.
    
    순서가 있어서 원소를 읽는데 빠르며 소규모 데이터를 저장할때 메모리 부담이 적다.
    
- Queue
    
    FIFO 구조로 작업의 우선순위나 **Heap** 구현에 사용된다.
    
    너비 우선 탐색(BFS,Breadth First Search)에 유용하다.
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/861379f8-e076-4764-bda2-72cdccc19752/Untitled.png)
    
- Stack
    
    깊이 우선 탐색(DFS,Depth First Search)에 유용하다.
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/4cc6edd5-b93d-4e12-a0b2-1e936a70b3d7/Untitled.png)

            
- 배열과 스택의 차이점
    
    
    | 배열 | 스택 |
    | --- | --- |
    | 원소들의 집합은 0으로 시작하는 인덱스로 식별되는 데이터 구조 | LIFO 원칙을 따르는 추상 데이터 타입의 원소들의 집합 |
    | 각 원소들은 같은 데이터 타입을 가진다 | 원소들은 데이터 타입이 다를 수 있다. |
    | 랜덤 액세스는 (Read, Write) 인덱스로 자유롭게 접근 가능 | 원소들은 LIFO 원칙을 따른다. Top 부분의 원소 접근만 가능 |
    | 지원되는 함수가 많다. (find ,sort, reverse, push pop etc...) | 한정적 함수. push, pop, peek |
    | 하나의 데이터 타입이다. | 하나의 추상적 자료형이다. |
    | 어떤 데이터 타입을 사용할지 알고, 각 원소에 대해지속적 변경이 필요할경우 유용하다. | 어떤 데이터를 처리할 지 모를 때 동적으로 처리가 가능하며, 빠른 접근시간, 데이터 삽입이 필요할 때 유용하다 |

### 비선형적 자료구조

- Tree
    
    계층적 구조를 표현한 자료구조 형태.
    
    - Node (노드) : 트리를 구성하고 있는 원소 그 자체를 말한다.
    - Edge (간선) : 노드와 노드사이를 연결하고 있는 선을 말한다.
    - Root(Node) : 트리에서 최상위 노드를 말한다.
    - Terminal(Node) : 트리에서 최하위 노드를 말한다. Leaf Node라고도 한다.
    - Internal(Node) : 트리에서 최하위 노드를 제외한 모든 노드를 말한다.
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/cf6672cf-fe09-4a0a-a3fd-1268d03940da/Untitled.png)
    
- Binary Tree(이진 트리)
    
    
    노드를 이루는 각 층을 Level, Level의 수를 이 트리의 height라고 한다.
    
    Root 노드를 포함해서 Leaf 노드를 제외한 모든 노드의 자식이 두 개인 트리.
    
    *공집합 역시 노드로 인정된다.
    
    포화 이진 트리(Full Binary Tree) : 모든 Level이 가득 찬 이진 트리
    
    완전 이진 트리(Complete Binary Tree) : 위에서 아래로, 왼쪽에서 오른쪽으로 순서대로 채워진 트리
    
    위의 두 트리를 노드 개수 n에 대해 i번째 노드를 배열로 구현시
    
    parent(i) = i
    
    left_child = 2i
    
    right_child = 2i+1 의 인덱스 값을 가진다.
    
- Binary Search Tree(BST, 이진 탐색 트리)
    
    
    데이터를 저장하는 특별한 규칙으로 찾고자 하는 데이터를 찾는다.
    
    1. 이진 탐색 노드에 저장된 값은 유일한 값이다.
    2. 루트 노드의 값은 왼쪽에 있는 모든 노드의 값보다 크다.
    3. 루트 노드의 값은 오른쪽에 있는 모든 노드의 값보다 작다.
    4. 각 서브 트리별로 2, 3번 규칙을 만족한다.
    
    값이 추가되고 삭제됨에 따라서, 한 쪽에 치우져지는 Skewed Tree(편향 트리)가 형성될 수 있음. → Rebalancing 기법
    
- Prior Queue & Heap
    
    Heap : 완전이진트리 형태의 자료구조.
    
    여러 값중 최대 또는 최소값을 찾아내는 연산이 빠르다.
    
    이진탐색트리와 다르게 중복된 값이 허용된다.
    
    배열에 기반한 완전 이진탐색 트리로, Max-Heap과 Min-Heap이 있다.
    
    전자는 상위 노드의 값이 하위 각 노드의 값보다 크며, Min-Heap은 반대로 상위 노드의 값이 하위 각 노드의 값보다 작다. (형제 노드끼리의 값은 상관없음)
    
    ![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/5eb64a3d-7680-44fc-8dde-e8611ab581ab/Untitled.png)
    
    Queue처럼 먼저 들어오는 데이터가 아닌 우선순위가 높은 데이터가 먼저 나가는 형태의 자료구조. 
    
    일반적으로 Heap을 이용해 구현한다.
    
    [https://suyeon96.tistory.com/31](https://suyeon96.tistory.com/31) 
    
- Graph
    
    정점과 간선의 집합이며, 일종의 Tree이다.
    
    Undirected와 Directed Graph가 있는데, 방향성 유무로 결정된다.
    
    Degree란 Undirectd Graph에서 정점에 연결된 간선의 개수이다. 
    
    Directed Graph에서의 Degree는 방향성이 있기 때문에 둘로 나뉘는데, 나가는 간선의 개수는 Outdegree, 들어오는 간선의 개수를 Indegree라 한다.
    
    **가중치 그래프** 란 간선에 가중치를 둔 그래프
    
    **부분 그래프** 란 한 그래프의 일부 정점 및 간선으로 이루어진 그래프.
    
    그래프의 구현 방법 :
    
    1. 인접 행렬 : 정방 행렬을 사용하여 구현. 연결 관계를 O(1)로 파악 가능. 공간 복잡도는 O(2V)
    2. 인접 리스트 : 리스트를 사용하여 구현. 정점간 연결 여부 파악애 오래 걸림. 공간 복잡도는 O(E + V)
    
    탐색 방법에는 깊이 우선 탐색(DFS, Depth First Search)와 너비 우선 탐색(BFS, Breadth First Search)이 있다.
    
    깊이 우선 탐색은 말 그대로 깊숙히 들어가서 탐색하고 나오는 것이며, 유용한 자료구조는 Stack이다.
    
    너비 우선 탐색은 임의의 한 정점에 대해 인접한 정점을 queue에 넣고(enqueue), dequeue연산에서 나온 하나의 정점으로 들어가서 그 정점의 인접한 정점을 다시 Queue에 넣어서 탐색하는 방식. BFS로 찾은 경로는 최단 경로이다.
    

- Map, Dictionary
    
    Key와 Value를 나누서 데이터 관리하는 자료구조형.
    
    순서는 없으며 키에 대한 중복은 허용하지 않는다. (Value의 중복은 가능)
    
    언어에 따라서 Dictionary를 hashmap,hashtable 등이라고도 한다. 
    
    둘다 그냥 Key-Value 형태의 값을 저장하는 자료구조를 뜻한다.
    
- HashTable
