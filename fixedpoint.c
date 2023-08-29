#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 10e-6
#define F(x) ((x)*(x)*(x)+4*(x)*(x)-10)
#define G(x) ((10 - 4*(x)*(x))/((x)*(x)))


 double  b = 1.26, b1;
 void fixedpoint(){
        
        b1 = G(b);
        if(fabs(F(b1)) < EPS){
          printf("root is %lf\n",b1);
          return ;
        }
        
        b = b1;
        fixedpoint();
  }
int main(){
     printf("initial guess : ");
     scanf("%lf",&b);
     fixedpoint();
   
return 0;
}
