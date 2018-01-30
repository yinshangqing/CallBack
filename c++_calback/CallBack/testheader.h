#ifndef TESTHEADER_H_
#define TESTHEADER_H_
#include <stdio.h>

typedef struct  
{  
    int  a;  
    char *str;  
}MsgType;  
  
// 回调函数指针定义 void*用来保存this指针  
typedef int (*FunCallBack) (MsgType *, void *);  
FunCallBack p_callback; // 保存回调函数地址  
void* p_this;// 保存this指针  
// 回调函数  
int setCBTest(FunCallBack pf, void * pp)  
{  
    printf("wei....... set cb ok!!!\n");  
    p_callback = pf;  
    p_this = pp;  
    return 0;  
}  
  
int cbfuc()  
{  
    printf("cb func !!!\n");  
    MsgType* type = new MsgType;  
    p_callback(type,p_this); // 调用回调函数  
    return 0;  
}  

#endif