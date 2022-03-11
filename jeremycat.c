#include<stdio.h>
#include<math.h>
 
int main(){
  float a,b,c,d,root1,root2;  
 
  printf("Enter a, b and c of quadratic equation: ");
  scanf("%f%f%f",&a,&b,&c);
   
  d = b * b - 4 * a * c;
  
  if(d==0){
    printf("The equation has two equal values.\n");
   root1 = -b /(2* a);
   printf("Root of quadratic equation is: %.3f ",root1);
  }
  else if(d > 0){
   printf("The equation has two distinct values.\n");
  
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
  
  }
  else{
   printf("The equation has no roots.\n");
   printf("Roots of quadratic equation are: ");
    printf("%.2f%+.2f",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.2f%+.2f",-b/(2*a),-sqrt(-d)/(2*a));
  }
  return 0;
}