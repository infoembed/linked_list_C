#include <stdio.h>


typedef struct node {
int data;
struct node * next;
}node_t;

void print_list(node_t* head)
{
    int i = 0;
    while(head){

        printf("node %d ; value %d \n",i++, head->data);
        head = head->next;

    }
}

int main(){
   
    node_t third = {3, NULL};
    node_t second = {2, &third};
    node_t first = {1, &second};

    node_t* head = &first;
    

    print_list(head);

    print_list(head);

   return 0;

}