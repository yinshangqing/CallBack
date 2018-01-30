#ifndef CALLBACK_H_
#define CALLBACK_H_
#include "testheader.h"

class CallBack
{
	CallBack();
	~CallBack();
	int InitCallBack();  
    // 类的非静态成员函数作为回调函数参数  
    int ConnectMyCB(MsgType *p,void* pp);  
    int DealCB(MsgType* p);  
};

#endif