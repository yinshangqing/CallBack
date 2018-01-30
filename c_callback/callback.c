#include <stdio.h>  
  
typedef void (*CallBackFun)(char *a,int b,double c);  
  
void funA(char *a,int b,double c)  
{  
    printf("funA: \n");  
    printf("char *: %s:int : %d:float :%lf\n",a,b,c);  
    printf("\n");  
}  
  
void funB(char *a,int b,double c)  
{  
    printf("funB: \n");  
    printf("char *: %s:int : %d:float :%lf\n",a,b,c);  
    printf("\n");  
}  
  
void Call(CallBackFun fun,char *a,int b,double c)  
{  
    printf("进入了回调函数!!!\n");  
    fun(a,b,c);  
    printf("离开了回调函数!!!\n");  
}  
  
int main()  
{  
    Call(funA,"我是A",100,100.101);  
    Call(funB,"我是B",101,99.909);  
    return 0;  
}  
