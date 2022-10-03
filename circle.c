#include <stdlib.h>
#include "circle.h"



void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
for(int i = 0; i < 5; ++i){
c[i].r = i+1; 
c[i].p.x = i+1;
c[i].p.y = i+1;
}

}


int circleIsValid(const circle* c) {

/*post: answer to exercise 6.c*/
if(c->r > 0){
	return 1;
}
else{
  return 0;
}
}

void translate(circle* c, const point* p) {
//*ansver to exercise 6.d
c->p.x = c->p.x + p->x;
c->p.y = c->p.y + p->y;

}
