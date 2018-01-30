//Gamestart.h  
#include "def.h"  
  
class CGameStart  
{  
  
public:  
    CGameStart();  
    ~CGameStart();  
    void Init();  
    void run();  
    void Execute();  
      
    //一些回调函数  
    void static Move(void *args);  
    void static Comeback(void *args);  
    void static Buyequip(void *args);  
  
public:  
    CCommu *pCommu;  
  
};  