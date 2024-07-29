#include<stdio.h>
#include<math.h>
 
typedef struct{//c oops 
    double x;
    double  y;
    char oopsinc[100];
    double (*calculation)(struct Point*);
    void (*quots)(struct Point*);
    void (*name)(struct Point*);
}Point;

int _cal(Point *p){
    return sqrt(p->x * p->x + p->y * p->y);
}
void _get_data(Point *p){
    printf("%s welcome to dark side of the 'C'",p->oopsinc);
}
void _quots(Point *p){
    printf("\nc oops is understand is difficult but if you are understand than make a f*** the world \n");
}
void  __init___(Point *p,double x, double y,char *msg){
    p->x = x;//(*p).x
    p->y = y;
    strcpy(p->oopsinc,msg);
    p->calculation = _cal;
    p->quots=_quots;
    p->name= _get_data;
}

int main(){
    char name[100];
    Point P;
    printf("Enter you sweet name :");
    scanf("%s",name);
    __init___(&P,3,6,&name);
    printf("%fl",P.calculation(&P));
    P.quots(&P);
    P.name(&P);
    
}   
//python oops 
// class point:
//     def __init__(self,x,y):
//         self.x = x
//         self.y = y
//     def cal(self):
//         return sqrt(self.x * self.x + self.y * self.y)

// p = point
// print(p.cal)