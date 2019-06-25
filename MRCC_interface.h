#ifndef _MRCC_INTERFACE_H
#define _MRCC_INTERFACE_H



/**************************************/

#define BUS_AHB         5
#define BUS_ABP1        7
#define BUS_ABP2        29

#define PERIPHERAL_DMA1 1
#define PERIPHERAL_DMA2 2

#define PERIPHERAL_GPIOA 0x04
#define PERIPHERAL_GPIOB 0x08
#define PERIPHERAL_GPIOC 0x10

/**************************************/


/**************Function Initialization******************/

void MRCC_initialize (void);
void MRCC_EnableClock(u8 Bus, u8 Peripheral);
void MRCC_DisableClock(u8 Bus, u8 Peripheral);

/*******************************************************/






#endif /* _MRCC_INTERFACE_H */