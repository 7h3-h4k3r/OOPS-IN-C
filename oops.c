#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int x;
    int y;
    void (*print)(struct pointer_t*);
} pointer_t;

void print_data(pointer_t *p){
    printf("%d %d\n",p->x,p->y);
}

pointer_t* _creat(int x,int y){
    pointer_t *p=(pointer_t*)malloc(sizeof(pointer_t));
    p->x =x;
    p->y =y;
    p->print=print_data;
    return p;
}

int main(){
    pointer_t *p = _creat(5,6);
    p->print(p);
    free(p);
    return 0;
}