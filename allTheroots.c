#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPS 10e-6
#define F(x) ((x)*(x)*(x)+4*(x)*(x)-5)
void bisec(double a,double b){
  for(int i = 0;i < 100;i++){
      double c = (a+b)/2;
      if(fabs(F(c)) < EPS){
          printf("the root is %lf",c); 
          return ;
      }    
      if(F(a)*F(b) < 0){  b = c;}
      else {a = c;}
  }
}
int main(){
     
      double a ,b,c;
      double segment = 10.0/6;
      a = -5;
      for(int i = 0;i < 6;i++){
              b = a+segment;
              printf("[a: %lf ,b : %lf]\n",a,b);  
              bisec(a,b);
              a = b;
      }
      return 0;
      
          
}
    
