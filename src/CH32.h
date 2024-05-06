#ifndef CH32_H
#define CH32_H

#if defined(CH32V20x) || defined(CH32V30x)

#include "CANController.h"

class CH32Class : public CANControllerClass {
public:
    CH32Class(CAN_TypeDef *CANx); // constructor declaration
    ~CH32Class(); // destructor declaration
  
    int begin(long baudRate) override; 
    void end() override;
    int endPacket() override; 
    int parsePacket() override; 

    void onReceive(void(*callback)(int)) override;

    using CANControllerClass::filter;
    virtual int filter(int id, int mask);
    using CANControllerClass::filterExtended; 
    virtual int filterExtended(long id, long mask);
  
    int observe() override;
    int loopback() override;
    int sleep() override;
    int wakeup() override;
private:
    CAN_TypeDef *_CANx;
    CAN_InitTypeDef _CAN_InitSturcture;
};

#if defined(CH32V20x) 
extern CH32Class CAN;
#else
extern CH32Class CAN_1;
extern CH32Class CAN_2;
#endif

#endif

#endif // CH32_H