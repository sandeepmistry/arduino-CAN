#include "CH32.h"

#if defined(CH32V20x) || defined(CH32V30x)

CH32Class::CH32Class(CAN_TypeDef *CANx) :
	_CANx(CANx),
	_CAN_InitSturcture({0}) {
}

CH32Class::~CH32Class() {
}

int CH32Class::begin(long baudRate) {
	CANControllerClass::begin(baudRate);

    // http://www.bittiming.can-wiki.info - for STM bxCAN
	const struct {
		long clockFrequency;
		long baudRate;
		uint8_t bs[2];
		uint16_t brp;
	} CNF_MAPPER[] = {
		{  (long)144E6, (long)1000E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 8 },
		{  (long)144E6,  (long)800E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 10 },
		{  (long)144E6,  (long)500E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 16 },
		{  (long)144E6,  (long)250E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 32 },
		{  (long)144E6,  (long)200E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 40 },
		{  (long)144E6,  (long)125E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 64 },
		{  (long)144E6,  (long)100E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 80 },
		{  (long)144E6,   (long)83E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 96 },
		{  (long)144E6,   (long)50E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 160 },
		{  (long)144E6,   (long)40E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 200 },
		{  (long)144E6,   (long)20E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 400 },
		{  (long)144E6,   (long)10E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 800 },
		{  (long)96E6,  (long)1000E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 6 },
		{  (long)96E6,   (long)800E3, { CAN_BS1_12tq, CAN_BS2_2tq }, 8 },
		{  (long)96E6,   (long)500E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 12 },
		{  (long)96E6,   (long)250E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 24 },
		{  (long)96E6,   (long)200E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 30 },
		{  (long)96E6,   (long)125E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 48 },
		{  (long)96E6,   (long)100E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 60 },
		{  (long)96E6,    (long)83E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 72 },
		{  (long)96E6,    (long)50E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 120 },
		{  (long)96E6,    (long)40E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 150 },
		{  (long)96E6,    (long)20E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 300 },
		{  (long)96E6,    (long)10E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 600 },
		{  (long)72E6,  (long)1000E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 4 },
		{  (long)72E6,   (long)800E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 5 },
		{  (long)72E6,   (long)500E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 8 },
		{  (long)72E6,   (long)250E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 16 },
		{  (long)72E6,   (long)200E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 20 },
		{  (long)72E6,   (long)125E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 32 },
		{  (long)72E6,   (long)100E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 40 },
		{  (long)72E6,    (long)83E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 48 },
		{  (long)72E6,    (long)50E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 80 },
		{  (long)72E6,    (long)40E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 100 },
		{  (long)72E6,    (long)20E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 200 },
		{  (long)72E6,    (long)10E3, { CAN_BS1_15tq, CAN_BS2_2tq }, 400 },
		{  (long)48E6,  (long)1000E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 3 },
		{  (long)48E6,   (long)800E3, { CAN_BS1_12tq, CAN_BS2_2tq }, 4 },
		{  (long)48E6,   (long)500E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 6 },
		{  (long)48E6,   (long)250E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 12 },
		{  (long)48E6,   (long)200E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 15 },
		{  (long)48E6,   (long)125E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 24 },
		{  (long)48E6,   (long)100E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 30 },
		{  (long)48E6,    (long)83E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 36 },
		{  (long)48E6,    (long)50E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 60 },
		{  (long)48E6,    (long)40E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 75 },
		{  (long)48E6,    (long)20E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 150 },
		{  (long)48E6,    (long)10E3, { CAN_BS1_13tq, CAN_BS2_2tq }, 300 },
  	};

	// set Pins for CAN
	GPIO_InitTypeDef GPIO_InitSturcture={0};

	if (_CANx == CAN1) {
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO | RCC_APB2Periph_GPIOA, ENABLE);
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);

		GPIO_InitSturcture.GPIO_Pin = GPIO_Pin_12; // TX (MAX 2551)
		GPIO_InitSturcture.GPIO_Mode = GPIO_Mode_AF_PP;		
		GPIO_InitSturcture.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_Init( GPIOA, &GPIO_InitSturcture);
	
		GPIO_InitSturcture.GPIO_Pin = GPIO_Pin_11; // RX (MAX 2551)
		GPIO_InitSturcture.GPIO_Mode = GPIO_Mode_IPU;	
		GPIO_Init( GPIOA, &GPIO_InitSturcture);
	} else {
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO | RCC_APB2Periph_GPIOB, ENABLE);
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN2, ENABLE);

    	GPIO_InitSturcture.GPIO_Pin = GPIO_Pin_13; // TX (MAX 2551)
    	GPIO_InitSturcture.GPIO_Mode = GPIO_Mode_AF_PP;
    	GPIO_InitSturcture.GPIO_Speed = GPIO_Speed_50MHz;
    	GPIO_Init( GPIOB, &GPIO_InitSturcture);

    	GPIO_InitSturcture.GPIO_Pin = GPIO_Pin_12; // RX (MAX 2551)
    	GPIO_InitSturcture.GPIO_Mode = GPIO_Mode_IPU;
    	GPIO_Init( GPIOB, &GPIO_InitSturcture);
	}
	
	_CAN_InitSturcture.CAN_TTCM = DISABLE;		
	_CAN_InitSturcture.CAN_ABOM = DISABLE;		
	_CAN_InitSturcture.CAN_AWUM = DISABLE;		
	_CAN_InitSturcture.CAN_NART = ENABLE;		
	_CAN_InitSturcture.CAN_RFLM = DISABLE;		
	_CAN_InitSturcture.CAN_TXFP = DISABLE;
	_CAN_InitSturcture.CAN_Mode = CAN_Mode_Normal;
	_CAN_InitSturcture.CAN_SJW  = CAN_SJW_1tq;

	bool match = false;

	RCC_ClocksTypeDef RCC_Clocks;
	RCC_GetClocksFreq(&RCC_Clocks);

	for (unsigned int i = 0; i < (sizeof(CNF_MAPPER) / sizeof(CNF_MAPPER[0])); i++) {
		if (CNF_MAPPER[i].clockFrequency == RCC_Clocks.PCLK1_Frequency && CNF_MAPPER[i].baudRate == baudRate) {
			_CAN_InitSturcture.CAN_BS1 = CNF_MAPPER[i].bs[0];
			_CAN_InitSturcture.CAN_BS2 = CNF_MAPPER[i].bs[1];
			_CAN_InitSturcture.CAN_Prescaler = CNF_MAPPER[i].brp;

			match = true;
			break;
		}
  	}

	if (!match) {
		printf("Not match\r\n");
		return 0;
	}

	CAN_Init(_CANx, &_CAN_InitSturcture);

	return 1;
}
    
void CH32Class::end() {
    CANControllerClass::end();

	CAN_DeInit(_CANx);
}
  
int CH32Class::endPacket() {
  if (!CANControllerClass::endPacket()) {
    return 0;
  }

  CanTxMsg CanTxStructure;

  if (_txExtended) {
    CanTxStructure.ExtId = _txId;
    CanTxStructure.IDE = CAN_Id_Extended;
  } else {
    CanTxStructure.StdId = _txId;
    CanTxStructure.IDE = CAN_Id_Standard;
  }

  if (_txRtr) {
    CanTxStructure.RTR = CAN_RTR_Remote;
    CanTxStructure.DLC = _txLength;
  } else {
    CanTxStructure.RTR = CAN_RTR_Data;
    CanTxStructure.DLC = _txLength;

    for (int i = 0; i < _txLength; i++) {
      CanTxStructure.Data[i] = _txData[i];
    }
  }

  uint8_t mbox = CAN_Transmit(_CANx, &CanTxStructure);
  uint16_t i = 0;

  while((CAN_TransmitStatus(_CANx, mbox) != CAN_TxStatus_Ok) && (i < 0xFFF)) {
    i++;
    //yield();
  }

  if(i == 0xFFF) {
    return 1;
  } else {
    return 0;
  }
}
    
int CH32Class::parsePacket() {
    u8 i;

    CanRxMsg CanRxStructure;

    if(CAN_MessagePending(_CANx, CAN_FIFO0) == 0) {
        return 0;
    }

    CAN_Receive(_CANx, CAN_FIFO0, &CanRxStructure);

    _rxExtended = CanRxStructure.IDE == CAN_Id_Extended ? true : false;
	_rxRtr = CanRxStructure.RTR == CAN_RTR_Remote ? true : false;
	_rxId = _rxExtended ? CanRxStructure.ExtId : CanRxStructure.StdId;
	_rxDlc = CanRxStructure.DLC;
	_rxIndex = 0;
	  
	if (_rxRtr) {
		_rxLength = 0;
  	} else {
    	_rxLength = _rxDlc;

    	for (int i = 0; i < _rxLength; i++) {
      		_rxData[i] = CanRxStructure.Data[i];
    	}
  	}

    return 1;
}

void CH32Class::onReceive(void(*callback)(int)) {
	CANControllerClass::onReceive(callback);

	// TODO:
}

int CH32Class::filter(int id, int mask) {
	id &= 0x7ff;
	mask &= 0x7ff;

	CAN_FilterInitTypeDef CAN_FilterInitSturcture={0};
    
	CAN_FilterInitSturcture.CAN_FilterNumber = 0;
	if (_CANx != CAN1) {
		CAN_FilterInitSturcture.CAN_FilterNumber = 10;
	}

	/* identifier/mask mode, One 32-bit filter, StdId: 0x317 */
	CAN_FilterInitSturcture.CAN_FilterMode = CAN_FilterMode_IdMask;	 
	CAN_FilterInitSturcture.CAN_FilterScale = CAN_FilterScale_32bit; 
	CAN_FilterInitSturcture.CAN_FilterIdHigh = id;
	CAN_FilterInitSturcture.CAN_FilterIdLow = 0;
	CAN_FilterInitSturcture.CAN_FilterMaskIdHigh = mask;  	
	CAN_FilterInitSturcture.CAN_FilterMaskIdLow = 0x0006;	 
	
	CAN_FilterInitSturcture.CAN_FilterFIFOAssignment = CAN_Filter_FIFO0;
	CAN_FilterInitSturcture.CAN_FilterActivation = ENABLE;
	CAN_FilterInit(&CAN_FilterInitSturcture);

    if (_CANx != CAN1) {
		CAN_SlaveStartBank(9);
	}

	return 1;
}

int CH32Class::filterExtended(long id, long mask) {
  	id &= 0x1FFFFFFF;
  	mask &= 0x1FFFFFFF;

	CAN_FilterInitTypeDef CAN_FilterInitSturcture={0};

	CAN_FilterInitSturcture.CAN_FilterNumber = 0;		
	if (_CANx != CAN1) {
		CAN_FilterInitSturcture.CAN_FilterNumber = 10;
	}

	CAN_FilterInitSturcture.CAN_FilterMode = CAN_FilterMode_IdMask;		
	CAN_FilterInitSturcture.CAN_FilterScale = CAN_FilterScale_32bit;

	CAN_FilterInitSturcture.CAN_FilterIdHigh = id >> 13 & 0xFFFF;
	CAN_FilterInitSturcture.CAN_FilterIdLow = id << 3 & 0xFFF8;
	CAN_FilterInitSturcture.CAN_FilterMaskIdHigh = mask >> 13 & 0xFFFF;
	CAN_FilterInitSturcture.CAN_FilterMaskIdLow = mask << 3 & 0xFFF8;

	CAN_FilterInitSturcture.CAN_FilterFIFOAssignment = CAN_Filter_FIFO0;
	CAN_FilterInitSturcture.CAN_FilterActivation = ENABLE;
	CAN_FilterInit(&CAN_FilterInitSturcture);

    if (_CANx != CAN1) {
		CAN_SlaveStartBank(9);
	}

	return 1;
}
  
int CH32Class::observe() {
    _CAN_InitSturcture.CAN_Mode |= CAN_Mode_Silent;
	CAN_Init(_CANx, &_CAN_InitSturcture);

	return 0;
}
    
int CH32Class::loopback() {
    _CAN_InitSturcture.CAN_Mode |= CAN_Mode_LoopBack;
	CAN_Init(_CANx, &_CAN_InitSturcture);

	return 0;
}
    
int CH32Class::sleep() {
    return CAN_Sleep(_CANx);
}
  
int CH32Class::wakeup() {
    return CAN_WakeUp(_CANx);
}

#if defined(CH32V20x)
CH32Class CAN(CAN1);
#elif defined(CH32V30x)
CH32Class CAN_1(CAN1);
CH32Class CAN_2(CAN2);
#endif

#endif
