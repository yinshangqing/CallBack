#include "callback.h"
#include "callback_test.h"

#if 0
///1、静态成员函数的地址可用普通函数指针储存，而普通成员函数地址需要用 类成员函数指针来储存。举例如下：
class base
{   
	static int func1();   
	int func2();   
};  
int (*pf1)()=&base::func1;//普通的函数指针   
int (base::*pf2)()=&base::func2;//成员函数指针 
///2、静态成员函数不可以调用类的非静态成员。静态成员函数不含this指针，而普通成员函数默认携带this指针参数。
#endif

int main()
{
	
	
	return 0;
}