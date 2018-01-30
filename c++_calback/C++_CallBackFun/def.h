//def.h  
#include <iostream>  
#include <stdio.h>  
#include <string.h>
using namespace std;  
  
typedef enum  
{  
    CB_MOVE = 0,    //    
    CB_COMEBACK,    //  
    CB_BUYEQUIIP,   //  
}cb_type;  
  
typedef void(*cb_func)(void *);  
  
class CCommu //模块类  
{  
public:  
    CCommu()  
    {  
        memset(func_list, 0, sizeof(cb_func) *(CB_BUYEQUIIP +1));  
        memset(func_args, 0, sizeof(void *) *(CB_BUYEQUIIP +1));  
    }  
  
    int reg_cb(cb_type type, cb_func func, void *args = NULL)//注册回调函数   
    {  
        if(type <= CB_BUYEQUIIP)   
        {  
            func_list[ type ] = func;  
            func_args[type] = args;  
            return 0;  
        }  
    }  
public:  
    cb_func func_list[CB_BUYEQUIIP + 1] ;   //函数指针数组  
    void * func_args[CB_BUYEQUIIP +1];  
};  
