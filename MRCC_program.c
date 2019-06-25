#include "LSTD_TYPES.h"
#include "MRCC_private.h"
#include "MRCC_interface.h"


void MRCC_initialize (void)
{
	/*
	RCC_CR   = 0x00010000 ;			// External Clock ON
	RCC_CFGR = 0x00000001 ;			// HSE clock enabled as a System Clock
	*/
	
	MRCC -> CR       = 0x00010000 ;
	MRCC -> CFGR     = 0x00000001 ;
}

void MRCC_EnableClock(u8 Bus, u8 Peripheral)
{
	switch (Bus)
	{
		case BUS_AHB  : MRCC -> AHBENR |= Peripheral; break;
	
		case BUS_ABP1 : MRCC -> APB1ENR|= Peripheral; break;
	
		case BUS_ABP2 : MRCC -> APB2ENR|= Peripheral; break;
	}
}

void MRCC_DisableClock(u8 Bus, u8 Peripheral)
{
	switch (Bus)
	{
		case BUS_AHB  : MRCC -> AHBENR &= ~Peripheral; break;
	
		case BUS_ABP1 : MRCC -> APB1ENR&= ~Peripheral; break;
	
		case BUS_ABP2 : MRCC -> APB2ENR&= ~Peripheral; break;
	}
}
