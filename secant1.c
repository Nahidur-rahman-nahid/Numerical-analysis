#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 10e-6
#define F(x) ((x)*(x)*(x)+4*(x)*(x)-5)
int main(){
      double a = 1 , b = 1.5;
      double c = (b*F(a) - a*F(b))/(F(a) - F(b));
      while(fabs(F(c))>EPS){
             c = (b*F(a) - a*F(b))/(F(a) - F(b));
             a = b;
             b = c;
      }
      printf("approx. root %lf\n",c);
return 0;
}
