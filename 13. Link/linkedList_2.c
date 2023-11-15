#include <stdio.h>
#include <stdlib.h>


typedef struct Node_t{
    int data;
    struct Node* next; 
}Node;

typedef struct LinkedList_t{
    Node* head;
    int length; 
}LinkedList;

void print(LinkedList* list){
    for(Node* p = list->head; p != NULL; p = p->next){
        printf("%d\n",p->data);
    }
}
void pushIntoTail(LinkedList* list, int value){
    Node* nodeInHeap = (Node *) malloc(sizeof(Node));
    nodeInHeap->data = value;
    nodeInHeap->next = NULL;
    list->length++;

    if(list->head == NULL){
        list->head = nodeInHeap;
        return; 
    }

    Node* p = list->head;
    while(p->next != NULL) p = p->next;
    p->next = nodeInHeap;

}

Node* at(LinkedList* list, int index){
    int position = 0;
    for(Node* p = list->head;p != NULL;p = p->next){
        if(position == index) return p;
        position++;
    }
    return NULL;
}
void Insert(LinkedList* list, int pos, int value){
    if(pos<0 || pos> (list->length - 1)) printf("Out of range");
    list->length++;
    Node* nodeInHeap = (Node*) malloc(sizeof(Node*));
    nodeInHeap->data = value;

    if(pos == 0){
        nodeInHeap->next = list->head;
        list->head = nodeInHeap;
        return;
    }

    int i = 1;
    Node* pBack = list->head; 
    Node* pFront = pBack->next;
    while(pFront->next != NULL){
        if(i == pos){
            pBack->next = nodeInHeap; 
            nodeInHeap->next = pFront;
            return;
        }
        pBack = pFront;
        pFront = pFront->next;
        i++;
    }

}
void RemoveNode(LinkedList* list, int pos){
    if(pos<0 || pos>(list->length -1)) printf("Out of range => Can not remove node \n");
    list->length--;
    if(pos == 0){
        Node* p = list->head;
        list->head = list->head->next;
        free(p);
        return;
    }
    int i = 1;
    Node* pBack = list->head; 
    Node* pFront = pBack->next;
    while(pFront->next != NULL){
        if(i == pos){
            pBack->next = pFront->next; 
            return;
        }
        pBack = pFront;
        pFront = pFront->next;
        i++;
    }

}
int main(){
    LinkedList list = {NULL,0};
    pushIntoTail(&list,0);
    pushIntoTail(&list,1);
    pushIntoTail(&list,2);
    pushIntoTail(&list,3);
    pushIntoTail(&list,4);
    pushIntoTail(&list,5);
    // Insert(&list,2,0);
    RemoveNode(&list,3);
    RemoveNode(&list,2);
    print(&list);
    return 0;
}