//Gamestart.cpp  
#include "Gamestart.h"  
  
CGameStart::CGameStart():pCommu(NULL)  
{}  
  
void CGameStart::Init() //初始化的时候，注册回调函数   
{  
    pCommu  = new CCommu;  
    pCommu ->reg_cb(CB_MOVE, Move , this);  
    pCommu->reg_cb (CB_COMEBACK, Comeback,this );  
}  
  
void CGameStart::run()  
{  
    Init();  
}  
  
void CGameStart::Execute()  
{  
    cout<<"callback funciton is running"<<endl;  
  
}  
CGameStart::~CGameStart()  
{  
    if(pCommu != NULL)  
    {  
        delete pCommu;  
        pCommu = NULL;  
    }  
}  
  
void CGameStart::Move(void *args)  
{  
    CGameStart *pGame  = (CGameStart *)args;  
    pGame -> Execute();  
}  
void CGameStart::Comeback(void *args)   
{  
    //char *str = (char *)args;  
    //cout << str <<endl;  
}  