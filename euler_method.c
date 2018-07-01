 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

 float f(float a,float b)
 {
     float n=(-2*a*b*b);
     return(n);

 }

 int main(int a, char **k)
 {
    float x,y,h,x2;
    x=atoi(k[1]);
    y=atoi(k[2]);
    x2=atof(k[3]);
    h=atof(k[4]);
    
   printf("%f",x2);    
    int index=0;
    for(float i=x;i<x2;i+=h) //Go till a value less than x2-h then only y at x2 will be obtained 
       {
        printf("At x[%d]=%f & y[%d]=%f , Value of y[%d]=",index,i,index,y,(index+1));
        y=y+h*f(i,y);
        printf("%f\n",y);
        index=index+1;
       }    

  printf("\n\nValue of y[%f]=%f\n",x2,y);
  return 0;
  
 }

