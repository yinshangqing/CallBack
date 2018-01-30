#include "callback.h"
#include <iostream>

CallBack::CallBack()
{
	InitCallBack();
	
}

CallBack::~CallBack()
{
	
	
}

int CallBack::InitCallBack()
{
	// 设置回调函数  
    // 需要将成员函数的this指针传入  
    // 需要将类成员函数地址强制转换为回调函数类型  
    p_callback((FunCallBack)&CallBack::ConnectMyCB,this);  
	return 0;

} 
// 回调函数  
int CallBack::ConnectMyCB(MsgType *p,void* pp)
{
	// 将回调回来的指针强制转换为类指针，然后调用类的成员函数  
    ((CallBack *)pp)->DealCB(p);  
    return 0;  
	
}
// 业务处理函数  
int CallBack::DealCB(MsgType* p)
{
	std::cout << ".....DealCB....." << std::endl;
	
}