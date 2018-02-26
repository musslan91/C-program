#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *next;
} Node, *NodePtr;

int main()
{
    int lenght(NodePtr top){
    int n = 0;

    NodePtr curr = top;
    while(curr != NULL){
        n++;
        curr = curr -> next;
    }
        return n;

}
    return 0;
}
