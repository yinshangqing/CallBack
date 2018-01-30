//main.cpp  
#include "Gamestart.h"  
  
int main()  
{  
  
    CGameStart *pGame = new CGameStart;  
    pGame -> run();  
    if(pGame->pCommu->func_list[CB_MOVE] != NULL)//回调函数的触发  
    {  
        pGame->pCommu->func_list[CB_MOVE](pGame->pCommu->func_args[CB_MOVE]);  
    }  
    return 0;  
}  