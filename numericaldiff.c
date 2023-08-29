#include<stdio.h>
#include<math.h>
#define f(x) (sin(x))
#define EPS 1e-6
int main(){
  double a = 0.0,b = 2.0*3.1416,h;int n = 100;
  h = (b - a)/n;
  double x[n+1],df[n+1];
  x[0] = a;
  for(int i = 1;i <= n - 1;i++){
         x[i] = x[i-1]+h;
  }
  x[n] = b;
  df[0] = ((f(x[1]) - f(x[0]))/(x[1]-x[0]));
  for(int i = 1;i < n ;i++){
      df[i] = ((f(x[i+1]) - f(x[i-1]))/(x[i+1] - x[i-1]));
    
  }
  df[n] = ((f(x[n]) - f(x[n - 1]))/(x[n] - x[n-1]));
  printf("\"x\" , \"f(x)\" ,\"f'(x)\"\n");
  for(int i = 0;i <= n ;i++){
    printf("%.2lf , %.2lf , %.2lf \n",x[i],f(x[i]),df[i]);
  }
 


return 0;
}
