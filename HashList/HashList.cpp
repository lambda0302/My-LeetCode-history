#define MAXSIZE 769
typedef struct Node{
    int elem;
    struct ListNode* node;
    struct Node* next;
}List;

typedef struct{
    List* Hashhead[MAXSIZE];
}MyHashSet;

MyHashSet* MyHashSetCreat(){
    MyHashSet* newHash=(MyHashSet*)malloc(sizeof(MyHashSet));
    for(int i=0;i<MAXSIZE;i++){
        newHash->Hashhead[i]=NULL;
    }
    return newHash;
}

bool Isinhash(){

}

bool MyHashSetContain(){

}

void MyHashSetAdd(){

}

void MyHashSetRemove(){

}


void MyHashSetFree(){

}

