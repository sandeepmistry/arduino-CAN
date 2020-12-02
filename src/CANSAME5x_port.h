struct can_function {
  unsigned port : 3;
  unsigned pin : 5;
  unsigned instance : 1;
  unsigned mux : 4;
};

const can_function can_rx[] = {
#if defined(PINMUX_PA00H_CAN0_RX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 0, PINMUX_PA00H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA01H_CAN0_RX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 0, PINMUX_PA01H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA02H_CAN0_RX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 0, PINMUX_PA02H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA03H_CAN0_RX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 0, PINMUX_PA03H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA04H_CAN0_RX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 0, PINMUX_PA04H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA05H_CAN0_RX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 0, PINMUX_PA05H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA06H_CAN0_RX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 0, PINMUX_PA06H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA07H_CAN0_RX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 0, PINMUX_PA07H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA08H_CAN0_RX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 0, PINMUX_PA08H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA09H_CAN0_RX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 0, PINMUX_PA09H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA10H_CAN0_RX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 0, PINMUX_PA10H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA11H_CAN0_RX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 0, PINMUX_PA11H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA12H_CAN0_RX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 0, PINMUX_PA12H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA13H_CAN0_RX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 0, PINMUX_PA13H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA14H_CAN0_RX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 0, PINMUX_PA14H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA15H_CAN0_RX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 0, PINMUX_PA15H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA16H_CAN0_RX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 0, PINMUX_PA16H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA17H_CAN0_RX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 0, PINMUX_PA17H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA18H_CAN0_RX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 0, PINMUX_PA18H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA19H_CAN0_RX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 0, PINMUX_PA19H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA20H_CAN0_RX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 0, PINMUX_PA20H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA21H_CAN0_RX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 0, PINMUX_PA21H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA22H_CAN0_RX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 0, PINMUX_PA22H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA23H_CAN0_RX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 0, PINMUX_PA23H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA24H_CAN0_RX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 0, PINMUX_PA24H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA25H_CAN0_RX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 0, PINMUX_PA25H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA26H_CAN0_RX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 0, PINMUX_PA26H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA27H_CAN0_RX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 0, PINMUX_PA27H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA28H_CAN0_RX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 0, PINMUX_PA28H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA29H_CAN0_RX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 0, PINMUX_PA29H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA30H_CAN0_RX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 0, PINMUX_PA30H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA31H_CAN0_RX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 0, PINMUX_PA31H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB00H_CAN0_RX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 0, PINMUX_PB00H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB01H_CAN0_RX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 0, PINMUX_PB01H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB02H_CAN0_RX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 0, PINMUX_PB02H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB03H_CAN0_RX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 0, PINMUX_PB03H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB04H_CAN0_RX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 0, PINMUX_PB04H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB05H_CAN0_RX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 0, PINMUX_PB05H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB06H_CAN0_RX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 0, PINMUX_PB06H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB07H_CAN0_RX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 0, PINMUX_PB07H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB08H_CAN0_RX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 0, PINMUX_PB08H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB09H_CAN0_RX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 0, PINMUX_PB09H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB10H_CAN0_RX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 0, PINMUX_PB10H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB11H_CAN0_RX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 0, PINMUX_PB11H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB12H_CAN0_RX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 0, PINMUX_PB12H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB13H_CAN0_RX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 0, PINMUX_PB13H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB14H_CAN0_RX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 0, PINMUX_PB14H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB15H_CAN0_RX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 0, PINMUX_PB15H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB16H_CAN0_RX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 0, PINMUX_PB16H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB17H_CAN0_RX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 0, PINMUX_PB17H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB18H_CAN0_RX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 0, PINMUX_PB18H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB19H_CAN0_RX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 0, PINMUX_PB19H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB20H_CAN0_RX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 0, PINMUX_PB20H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB21H_CAN0_RX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 0, PINMUX_PB21H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB22H_CAN0_RX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 0, PINMUX_PB22H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB23H_CAN0_RX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 0, PINMUX_PB23H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB24H_CAN0_RX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 0, PINMUX_PB24H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB25H_CAN0_RX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 0, PINMUX_PB25H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB26H_CAN0_RX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 0, PINMUX_PB26H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB27H_CAN0_RX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 0, PINMUX_PB27H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB28H_CAN0_RX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 0, PINMUX_PB28H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB29H_CAN0_RX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 0, PINMUX_PB29H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB30H_CAN0_RX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 0, PINMUX_PB30H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB31H_CAN0_RX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 0, PINMUX_PB31H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC00H_CAN0_RX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 0, PINMUX_PC00H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC01H_CAN0_RX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 0, PINMUX_PC01H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC02H_CAN0_RX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 0, PINMUX_PC02H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC03H_CAN0_RX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 0, PINMUX_PC03H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC04H_CAN0_RX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 0, PINMUX_PC04H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC05H_CAN0_RX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 0, PINMUX_PC05H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC06H_CAN0_RX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 0, PINMUX_PC06H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC07H_CAN0_RX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 0, PINMUX_PC07H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC08H_CAN0_RX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 0, PINMUX_PC08H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC09H_CAN0_RX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 0, PINMUX_PC09H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC10H_CAN0_RX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 0, PINMUX_PC10H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC11H_CAN0_RX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 0, PINMUX_PC11H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC12H_CAN0_RX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 0, PINMUX_PC12H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC13H_CAN0_RX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 0, PINMUX_PC13H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC14H_CAN0_RX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 0, PINMUX_PC14H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC15H_CAN0_RX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 0, PINMUX_PC15H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC16H_CAN0_RX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 0, PINMUX_PC16H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC17H_CAN0_RX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 0, PINMUX_PC17H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC18H_CAN0_RX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 0, PINMUX_PC18H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC19H_CAN0_RX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 0, PINMUX_PC19H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC20H_CAN0_RX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 0, PINMUX_PC20H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC21H_CAN0_RX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 0, PINMUX_PC21H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC22H_CAN0_RX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 0, PINMUX_PC22H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC23H_CAN0_RX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 0, PINMUX_PC23H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC24H_CAN0_RX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 0, PINMUX_PC24H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC25H_CAN0_RX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 0, PINMUX_PC25H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC26H_CAN0_RX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 0, PINMUX_PC26H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC27H_CAN0_RX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 0, PINMUX_PC27H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC28H_CAN0_RX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 0, PINMUX_PC28H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC29H_CAN0_RX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 0, PINMUX_PC29H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC30H_CAN0_RX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 0, PINMUX_PC30H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC31H_CAN0_RX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 0, PINMUX_PC31H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD00H_CAN0_RX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 0, PINMUX_PD00H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD01H_CAN0_RX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 0, PINMUX_PD01H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD02H_CAN0_RX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 0, PINMUX_PD02H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD03H_CAN0_RX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 0, PINMUX_PD03H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD04H_CAN0_RX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 0, PINMUX_PD04H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD05H_CAN0_RX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 0, PINMUX_PD05H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD06H_CAN0_RX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 0, PINMUX_PD06H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD07H_CAN0_RX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 0, PINMUX_PD07H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD08H_CAN0_RX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 0, PINMUX_PD08H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD09H_CAN0_RX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 0, PINMUX_PD09H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD10H_CAN0_RX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 0, PINMUX_PD10H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD11H_CAN0_RX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 0, PINMUX_PD11H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD12H_CAN0_RX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 0, PINMUX_PD12H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD13H_CAN0_RX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 0, PINMUX_PD13H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD14H_CAN0_RX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 0, PINMUX_PD14H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD15H_CAN0_RX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 0, PINMUX_PD15H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD16H_CAN0_RX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 0, PINMUX_PD16H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD17H_CAN0_RX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 0, PINMUX_PD17H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD18H_CAN0_RX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 0, PINMUX_PD18H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD19H_CAN0_RX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 0, PINMUX_PD19H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD20H_CAN0_RX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 0, PINMUX_PD20H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD21H_CAN0_RX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 0, PINMUX_PD21H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD22H_CAN0_RX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 0, PINMUX_PD22H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD23H_CAN0_RX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 0, PINMUX_PD23H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD24H_CAN0_RX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 0, PINMUX_PD24H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD25H_CAN0_RX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 0, PINMUX_PD25H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD26H_CAN0_RX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 0, PINMUX_PD26H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD27H_CAN0_RX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 0, PINMUX_PD27H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD28H_CAN0_RX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 0, PINMUX_PD28H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD29H_CAN0_RX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 0, PINMUX_PD29H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD30H_CAN0_RX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 0, PINMUX_PD30H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD31H_CAN0_RX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 0, PINMUX_PD31H_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA00I_CAN0_RX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 0, PINMUX_PA00I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA01I_CAN0_RX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 0, PINMUX_PA01I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA02I_CAN0_RX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 0, PINMUX_PA02I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA03I_CAN0_RX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 0, PINMUX_PA03I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA04I_CAN0_RX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 0, PINMUX_PA04I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA05I_CAN0_RX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 0, PINMUX_PA05I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA06I_CAN0_RX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 0, PINMUX_PA06I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA07I_CAN0_RX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 0, PINMUX_PA07I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA08I_CAN0_RX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 0, PINMUX_PA08I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA09I_CAN0_RX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 0, PINMUX_PA09I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA10I_CAN0_RX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 0, PINMUX_PA10I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA11I_CAN0_RX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 0, PINMUX_PA11I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA12I_CAN0_RX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 0, PINMUX_PA12I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA13I_CAN0_RX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 0, PINMUX_PA13I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA14I_CAN0_RX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 0, PINMUX_PA14I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA15I_CAN0_RX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 0, PINMUX_PA15I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA16I_CAN0_RX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 0, PINMUX_PA16I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA17I_CAN0_RX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 0, PINMUX_PA17I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA18I_CAN0_RX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 0, PINMUX_PA18I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA19I_CAN0_RX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 0, PINMUX_PA19I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA20I_CAN0_RX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 0, PINMUX_PA20I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA21I_CAN0_RX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 0, PINMUX_PA21I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA22I_CAN0_RX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 0, PINMUX_PA22I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA23I_CAN0_RX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 0, PINMUX_PA23I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA24I_CAN0_RX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 0, PINMUX_PA24I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA25I_CAN0_RX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 0, PINMUX_PA25I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA26I_CAN0_RX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 0, PINMUX_PA26I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA27I_CAN0_RX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 0, PINMUX_PA27I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA28I_CAN0_RX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 0, PINMUX_PA28I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA29I_CAN0_RX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 0, PINMUX_PA29I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA30I_CAN0_RX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 0, PINMUX_PA30I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA31I_CAN0_RX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 0, PINMUX_PA31I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB00I_CAN0_RX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 0, PINMUX_PB00I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB01I_CAN0_RX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 0, PINMUX_PB01I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB02I_CAN0_RX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 0, PINMUX_PB02I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB03I_CAN0_RX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 0, PINMUX_PB03I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB04I_CAN0_RX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 0, PINMUX_PB04I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB05I_CAN0_RX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 0, PINMUX_PB05I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB06I_CAN0_RX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 0, PINMUX_PB06I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB07I_CAN0_RX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 0, PINMUX_PB07I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB08I_CAN0_RX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 0, PINMUX_PB08I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB09I_CAN0_RX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 0, PINMUX_PB09I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB10I_CAN0_RX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 0, PINMUX_PB10I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB11I_CAN0_RX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 0, PINMUX_PB11I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB12I_CAN0_RX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 0, PINMUX_PB12I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB13I_CAN0_RX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 0, PINMUX_PB13I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB14I_CAN0_RX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 0, PINMUX_PB14I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB15I_CAN0_RX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 0, PINMUX_PB15I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB16I_CAN0_RX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 0, PINMUX_PB16I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB17I_CAN0_RX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 0, PINMUX_PB17I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB18I_CAN0_RX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 0, PINMUX_PB18I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB19I_CAN0_RX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 0, PINMUX_PB19I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB20I_CAN0_RX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 0, PINMUX_PB20I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB21I_CAN0_RX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 0, PINMUX_PB21I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB22I_CAN0_RX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 0, PINMUX_PB22I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB23I_CAN0_RX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 0, PINMUX_PB23I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB24I_CAN0_RX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 0, PINMUX_PB24I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB25I_CAN0_RX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 0, PINMUX_PB25I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB26I_CAN0_RX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 0, PINMUX_PB26I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB27I_CAN0_RX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 0, PINMUX_PB27I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB28I_CAN0_RX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 0, PINMUX_PB28I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB29I_CAN0_RX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 0, PINMUX_PB29I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB30I_CAN0_RX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 0, PINMUX_PB30I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PB31I_CAN0_RX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 0, PINMUX_PB31I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC00I_CAN0_RX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 0, PINMUX_PC00I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC01I_CAN0_RX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 0, PINMUX_PC01I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC02I_CAN0_RX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 0, PINMUX_PC02I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC03I_CAN0_RX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 0, PINMUX_PC03I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC04I_CAN0_RX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 0, PINMUX_PC04I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC05I_CAN0_RX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 0, PINMUX_PC05I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC06I_CAN0_RX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 0, PINMUX_PC06I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC07I_CAN0_RX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 0, PINMUX_PC07I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC08I_CAN0_RX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 0, PINMUX_PC08I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC09I_CAN0_RX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 0, PINMUX_PC09I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC10I_CAN0_RX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 0, PINMUX_PC10I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC11I_CAN0_RX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 0, PINMUX_PC11I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC12I_CAN0_RX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 0, PINMUX_PC12I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC13I_CAN0_RX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 0, PINMUX_PC13I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC14I_CAN0_RX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 0, PINMUX_PC14I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC15I_CAN0_RX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 0, PINMUX_PC15I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC16I_CAN0_RX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 0, PINMUX_PC16I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC17I_CAN0_RX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 0, PINMUX_PC17I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC18I_CAN0_RX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 0, PINMUX_PC18I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC19I_CAN0_RX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 0, PINMUX_PC19I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC20I_CAN0_RX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 0, PINMUX_PC20I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC21I_CAN0_RX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 0, PINMUX_PC21I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC22I_CAN0_RX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 0, PINMUX_PC22I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC23I_CAN0_RX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 0, PINMUX_PC23I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC24I_CAN0_RX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 0, PINMUX_PC24I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC25I_CAN0_RX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 0, PINMUX_PC25I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC26I_CAN0_RX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 0, PINMUX_PC26I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC27I_CAN0_RX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 0, PINMUX_PC27I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC28I_CAN0_RX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 0, PINMUX_PC28I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC29I_CAN0_RX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 0, PINMUX_PC29I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC30I_CAN0_RX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 0, PINMUX_PC30I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PC31I_CAN0_RX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 0, PINMUX_PC31I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD00I_CAN0_RX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 0, PINMUX_PD00I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD01I_CAN0_RX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 0, PINMUX_PD01I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD02I_CAN0_RX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 0, PINMUX_PD02I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD03I_CAN0_RX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 0, PINMUX_PD03I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD04I_CAN0_RX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 0, PINMUX_PD04I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD05I_CAN0_RX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 0, PINMUX_PD05I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD06I_CAN0_RX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 0, PINMUX_PD06I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD07I_CAN0_RX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 0, PINMUX_PD07I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD08I_CAN0_RX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 0, PINMUX_PD08I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD09I_CAN0_RX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 0, PINMUX_PD09I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD10I_CAN0_RX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 0, PINMUX_PD10I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD11I_CAN0_RX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 0, PINMUX_PD11I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD12I_CAN0_RX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 0, PINMUX_PD12I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD13I_CAN0_RX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 0, PINMUX_PD13I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD14I_CAN0_RX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 0, PINMUX_PD14I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD15I_CAN0_RX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 0, PINMUX_PD15I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD16I_CAN0_RX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 0, PINMUX_PD16I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD17I_CAN0_RX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 0, PINMUX_PD17I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD18I_CAN0_RX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 0, PINMUX_PD18I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD19I_CAN0_RX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 0, PINMUX_PD19I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD20I_CAN0_RX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 0, PINMUX_PD20I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD21I_CAN0_RX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 0, PINMUX_PD21I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD22I_CAN0_RX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 0, PINMUX_PD22I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD23I_CAN0_RX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 0, PINMUX_PD23I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD24I_CAN0_RX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 0, PINMUX_PD24I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD25I_CAN0_RX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 0, PINMUX_PD25I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD26I_CAN0_RX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 0, PINMUX_PD26I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD27I_CAN0_RX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 0, PINMUX_PD27I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD28I_CAN0_RX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 0, PINMUX_PD28I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD29I_CAN0_RX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 0, PINMUX_PD29I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD30I_CAN0_RX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 0, PINMUX_PD30I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PD31I_CAN0_RX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 0, PINMUX_PD31I_CAN0_RX & 0xf},
#endif
#if defined(PINMUX_PA00H_CAN1_RX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 1, PINMUX_PA00H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA01H_CAN1_RX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 1, PINMUX_PA01H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA02H_CAN1_RX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 1, PINMUX_PA02H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA03H_CAN1_RX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 1, PINMUX_PA03H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA04H_CAN1_RX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 1, PINMUX_PA04H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA05H_CAN1_RX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 1, PINMUX_PA05H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA06H_CAN1_RX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 1, PINMUX_PA06H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA07H_CAN1_RX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 1, PINMUX_PA07H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA08H_CAN1_RX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 1, PINMUX_PA08H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA09H_CAN1_RX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 1, PINMUX_PA09H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA10H_CAN1_RX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 1, PINMUX_PA10H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA11H_CAN1_RX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 1, PINMUX_PA11H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA12H_CAN1_RX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 1, PINMUX_PA12H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA13H_CAN1_RX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 1, PINMUX_PA13H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA14H_CAN1_RX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 1, PINMUX_PA14H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA15H_CAN1_RX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 1, PINMUX_PA15H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA16H_CAN1_RX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 1, PINMUX_PA16H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA17H_CAN1_RX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 1, PINMUX_PA17H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA18H_CAN1_RX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 1, PINMUX_PA18H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA19H_CAN1_RX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 1, PINMUX_PA19H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA20H_CAN1_RX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 1, PINMUX_PA20H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA21H_CAN1_RX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 1, PINMUX_PA21H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA22H_CAN1_RX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 1, PINMUX_PA22H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA23H_CAN1_RX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 1, PINMUX_PA23H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA24H_CAN1_RX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 1, PINMUX_PA24H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA25H_CAN1_RX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 1, PINMUX_PA25H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA26H_CAN1_RX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 1, PINMUX_PA26H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA27H_CAN1_RX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 1, PINMUX_PA27H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA28H_CAN1_RX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 1, PINMUX_PA28H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA29H_CAN1_RX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 1, PINMUX_PA29H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA30H_CAN1_RX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 1, PINMUX_PA30H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA31H_CAN1_RX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 1, PINMUX_PA31H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB00H_CAN1_RX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 1, PINMUX_PB00H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB01H_CAN1_RX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 1, PINMUX_PB01H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB02H_CAN1_RX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 1, PINMUX_PB02H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB03H_CAN1_RX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 1, PINMUX_PB03H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB04H_CAN1_RX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 1, PINMUX_PB04H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB05H_CAN1_RX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 1, PINMUX_PB05H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB06H_CAN1_RX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 1, PINMUX_PB06H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB07H_CAN1_RX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 1, PINMUX_PB07H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB08H_CAN1_RX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 1, PINMUX_PB08H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB09H_CAN1_RX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 1, PINMUX_PB09H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB10H_CAN1_RX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 1, PINMUX_PB10H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB11H_CAN1_RX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 1, PINMUX_PB11H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB12H_CAN1_RX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 1, PINMUX_PB12H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB13H_CAN1_RX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 1, PINMUX_PB13H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB14H_CAN1_RX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 1, PINMUX_PB14H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB15H_CAN1_RX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 1, PINMUX_PB15H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB16H_CAN1_RX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 1, PINMUX_PB16H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB17H_CAN1_RX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 1, PINMUX_PB17H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB18H_CAN1_RX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 1, PINMUX_PB18H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB19H_CAN1_RX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 1, PINMUX_PB19H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB20H_CAN1_RX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 1, PINMUX_PB20H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB21H_CAN1_RX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 1, PINMUX_PB21H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB22H_CAN1_RX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 1, PINMUX_PB22H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB23H_CAN1_RX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 1, PINMUX_PB23H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB24H_CAN1_RX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 1, PINMUX_PB24H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB25H_CAN1_RX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 1, PINMUX_PB25H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB26H_CAN1_RX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 1, PINMUX_PB26H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB27H_CAN1_RX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 1, PINMUX_PB27H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB28H_CAN1_RX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 1, PINMUX_PB28H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB29H_CAN1_RX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 1, PINMUX_PB29H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB30H_CAN1_RX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 1, PINMUX_PB30H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB31H_CAN1_RX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 1, PINMUX_PB31H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC00H_CAN1_RX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 1, PINMUX_PC00H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC01H_CAN1_RX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 1, PINMUX_PC01H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC02H_CAN1_RX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 1, PINMUX_PC02H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC03H_CAN1_RX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 1, PINMUX_PC03H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC04H_CAN1_RX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 1, PINMUX_PC04H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC05H_CAN1_RX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 1, PINMUX_PC05H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC06H_CAN1_RX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 1, PINMUX_PC06H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC07H_CAN1_RX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 1, PINMUX_PC07H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC08H_CAN1_RX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 1, PINMUX_PC08H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC09H_CAN1_RX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 1, PINMUX_PC09H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC10H_CAN1_RX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 1, PINMUX_PC10H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC11H_CAN1_RX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 1, PINMUX_PC11H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC12H_CAN1_RX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 1, PINMUX_PC12H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC13H_CAN1_RX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 1, PINMUX_PC13H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC14H_CAN1_RX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 1, PINMUX_PC14H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC15H_CAN1_RX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 1, PINMUX_PC15H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC16H_CAN1_RX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 1, PINMUX_PC16H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC17H_CAN1_RX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 1, PINMUX_PC17H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC18H_CAN1_RX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 1, PINMUX_PC18H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC19H_CAN1_RX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 1, PINMUX_PC19H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC20H_CAN1_RX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 1, PINMUX_PC20H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC21H_CAN1_RX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 1, PINMUX_PC21H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC22H_CAN1_RX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 1, PINMUX_PC22H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC23H_CAN1_RX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 1, PINMUX_PC23H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC24H_CAN1_RX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 1, PINMUX_PC24H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC25H_CAN1_RX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 1, PINMUX_PC25H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC26H_CAN1_RX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 1, PINMUX_PC26H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC27H_CAN1_RX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 1, PINMUX_PC27H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC28H_CAN1_RX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 1, PINMUX_PC28H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC29H_CAN1_RX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 1, PINMUX_PC29H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC30H_CAN1_RX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 1, PINMUX_PC30H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC31H_CAN1_RX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 1, PINMUX_PC31H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD00H_CAN1_RX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 1, PINMUX_PD00H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD01H_CAN1_RX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 1, PINMUX_PD01H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD02H_CAN1_RX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 1, PINMUX_PD02H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD03H_CAN1_RX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 1, PINMUX_PD03H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD04H_CAN1_RX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 1, PINMUX_PD04H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD05H_CAN1_RX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 1, PINMUX_PD05H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD06H_CAN1_RX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 1, PINMUX_PD06H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD07H_CAN1_RX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 1, PINMUX_PD07H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD08H_CAN1_RX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 1, PINMUX_PD08H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD09H_CAN1_RX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 1, PINMUX_PD09H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD10H_CAN1_RX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 1, PINMUX_PD10H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD11H_CAN1_RX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 1, PINMUX_PD11H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD12H_CAN1_RX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 1, PINMUX_PD12H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD13H_CAN1_RX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 1, PINMUX_PD13H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD14H_CAN1_RX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 1, PINMUX_PD14H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD15H_CAN1_RX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 1, PINMUX_PD15H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD16H_CAN1_RX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 1, PINMUX_PD16H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD17H_CAN1_RX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 1, PINMUX_PD17H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD18H_CAN1_RX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 1, PINMUX_PD18H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD19H_CAN1_RX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 1, PINMUX_PD19H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD20H_CAN1_RX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 1, PINMUX_PD20H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD21H_CAN1_RX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 1, PINMUX_PD21H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD22H_CAN1_RX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 1, PINMUX_PD22H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD23H_CAN1_RX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 1, PINMUX_PD23H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD24H_CAN1_RX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 1, PINMUX_PD24H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD25H_CAN1_RX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 1, PINMUX_PD25H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD26H_CAN1_RX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 1, PINMUX_PD26H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD27H_CAN1_RX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 1, PINMUX_PD27H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD28H_CAN1_RX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 1, PINMUX_PD28H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD29H_CAN1_RX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 1, PINMUX_PD29H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD30H_CAN1_RX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 1, PINMUX_PD30H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD31H_CAN1_RX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 1, PINMUX_PD31H_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA00I_CAN1_RX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 1, PINMUX_PA00I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA01I_CAN1_RX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 1, PINMUX_PA01I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA02I_CAN1_RX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 1, PINMUX_PA02I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA03I_CAN1_RX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 1, PINMUX_PA03I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA04I_CAN1_RX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 1, PINMUX_PA04I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA05I_CAN1_RX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 1, PINMUX_PA05I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA06I_CAN1_RX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 1, PINMUX_PA06I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA07I_CAN1_RX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 1, PINMUX_PA07I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA08I_CAN1_RX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 1, PINMUX_PA08I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA09I_CAN1_RX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 1, PINMUX_PA09I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA10I_CAN1_RX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 1, PINMUX_PA10I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA11I_CAN1_RX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 1, PINMUX_PA11I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA12I_CAN1_RX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 1, PINMUX_PA12I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA13I_CAN1_RX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 1, PINMUX_PA13I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA14I_CAN1_RX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 1, PINMUX_PA14I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA15I_CAN1_RX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 1, PINMUX_PA15I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA16I_CAN1_RX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 1, PINMUX_PA16I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA17I_CAN1_RX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 1, PINMUX_PA17I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA18I_CAN1_RX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 1, PINMUX_PA18I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA19I_CAN1_RX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 1, PINMUX_PA19I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA20I_CAN1_RX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 1, PINMUX_PA20I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA21I_CAN1_RX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 1, PINMUX_PA21I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA22I_CAN1_RX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 1, PINMUX_PA22I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA23I_CAN1_RX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 1, PINMUX_PA23I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA24I_CAN1_RX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 1, PINMUX_PA24I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA25I_CAN1_RX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 1, PINMUX_PA25I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA26I_CAN1_RX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 1, PINMUX_PA26I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA27I_CAN1_RX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 1, PINMUX_PA27I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA28I_CAN1_RX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 1, PINMUX_PA28I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA29I_CAN1_RX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 1, PINMUX_PA29I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA30I_CAN1_RX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 1, PINMUX_PA30I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PA31I_CAN1_RX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 1, PINMUX_PA31I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB00I_CAN1_RX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 1, PINMUX_PB00I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB01I_CAN1_RX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 1, PINMUX_PB01I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB02I_CAN1_RX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 1, PINMUX_PB02I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB03I_CAN1_RX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 1, PINMUX_PB03I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB04I_CAN1_RX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 1, PINMUX_PB04I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB05I_CAN1_RX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 1, PINMUX_PB05I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB06I_CAN1_RX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 1, PINMUX_PB06I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB07I_CAN1_RX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 1, PINMUX_PB07I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB08I_CAN1_RX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 1, PINMUX_PB08I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB09I_CAN1_RX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 1, PINMUX_PB09I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB10I_CAN1_RX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 1, PINMUX_PB10I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB11I_CAN1_RX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 1, PINMUX_PB11I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB12I_CAN1_RX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 1, PINMUX_PB12I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB13I_CAN1_RX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 1, PINMUX_PB13I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB14I_CAN1_RX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 1, PINMUX_PB14I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB15I_CAN1_RX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 1, PINMUX_PB15I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB16I_CAN1_RX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 1, PINMUX_PB16I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB17I_CAN1_RX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 1, PINMUX_PB17I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB18I_CAN1_RX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 1, PINMUX_PB18I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB19I_CAN1_RX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 1, PINMUX_PB19I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB20I_CAN1_RX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 1, PINMUX_PB20I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB21I_CAN1_RX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 1, PINMUX_PB21I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB22I_CAN1_RX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 1, PINMUX_PB22I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB23I_CAN1_RX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 1, PINMUX_PB23I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB24I_CAN1_RX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 1, PINMUX_PB24I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB25I_CAN1_RX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 1, PINMUX_PB25I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB26I_CAN1_RX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 1, PINMUX_PB26I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB27I_CAN1_RX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 1, PINMUX_PB27I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB28I_CAN1_RX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 1, PINMUX_PB28I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB29I_CAN1_RX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 1, PINMUX_PB29I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB30I_CAN1_RX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 1, PINMUX_PB30I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PB31I_CAN1_RX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 1, PINMUX_PB31I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC00I_CAN1_RX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 1, PINMUX_PC00I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC01I_CAN1_RX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 1, PINMUX_PC01I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC02I_CAN1_RX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 1, PINMUX_PC02I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC03I_CAN1_RX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 1, PINMUX_PC03I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC04I_CAN1_RX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 1, PINMUX_PC04I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC05I_CAN1_RX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 1, PINMUX_PC05I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC06I_CAN1_RX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 1, PINMUX_PC06I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC07I_CAN1_RX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 1, PINMUX_PC07I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC08I_CAN1_RX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 1, PINMUX_PC08I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC09I_CAN1_RX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 1, PINMUX_PC09I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC10I_CAN1_RX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 1, PINMUX_PC10I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC11I_CAN1_RX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 1, PINMUX_PC11I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC12I_CAN1_RX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 1, PINMUX_PC12I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC13I_CAN1_RX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 1, PINMUX_PC13I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC14I_CAN1_RX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 1, PINMUX_PC14I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC15I_CAN1_RX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 1, PINMUX_PC15I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC16I_CAN1_RX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 1, PINMUX_PC16I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC17I_CAN1_RX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 1, PINMUX_PC17I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC18I_CAN1_RX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 1, PINMUX_PC18I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC19I_CAN1_RX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 1, PINMUX_PC19I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC20I_CAN1_RX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 1, PINMUX_PC20I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC21I_CAN1_RX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 1, PINMUX_PC21I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC22I_CAN1_RX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 1, PINMUX_PC22I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC23I_CAN1_RX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 1, PINMUX_PC23I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC24I_CAN1_RX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 1, PINMUX_PC24I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC25I_CAN1_RX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 1, PINMUX_PC25I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC26I_CAN1_RX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 1, PINMUX_PC26I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC27I_CAN1_RX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 1, PINMUX_PC27I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC28I_CAN1_RX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 1, PINMUX_PC28I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC29I_CAN1_RX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 1, PINMUX_PC29I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC30I_CAN1_RX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 1, PINMUX_PC30I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PC31I_CAN1_RX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 1, PINMUX_PC31I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD00I_CAN1_RX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 1, PINMUX_PD00I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD01I_CAN1_RX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 1, PINMUX_PD01I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD02I_CAN1_RX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 1, PINMUX_PD02I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD03I_CAN1_RX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 1, PINMUX_PD03I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD04I_CAN1_RX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 1, PINMUX_PD04I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD05I_CAN1_RX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 1, PINMUX_PD05I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD06I_CAN1_RX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 1, PINMUX_PD06I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD07I_CAN1_RX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 1, PINMUX_PD07I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD08I_CAN1_RX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 1, PINMUX_PD08I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD09I_CAN1_RX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 1, PINMUX_PD09I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD10I_CAN1_RX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 1, PINMUX_PD10I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD11I_CAN1_RX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 1, PINMUX_PD11I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD12I_CAN1_RX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 1, PINMUX_PD12I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD13I_CAN1_RX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 1, PINMUX_PD13I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD14I_CAN1_RX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 1, PINMUX_PD14I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD15I_CAN1_RX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 1, PINMUX_PD15I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD16I_CAN1_RX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 1, PINMUX_PD16I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD17I_CAN1_RX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 1, PINMUX_PD17I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD18I_CAN1_RX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 1, PINMUX_PD18I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD19I_CAN1_RX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 1, PINMUX_PD19I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD20I_CAN1_RX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 1, PINMUX_PD20I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD21I_CAN1_RX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 1, PINMUX_PD21I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD22I_CAN1_RX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 1, PINMUX_PD22I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD23I_CAN1_RX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 1, PINMUX_PD23I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD24I_CAN1_RX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 1, PINMUX_PD24I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD25I_CAN1_RX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 1, PINMUX_PD25I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD26I_CAN1_RX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 1, PINMUX_PD26I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD27I_CAN1_RX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 1, PINMUX_PD27I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD28I_CAN1_RX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 1, PINMUX_PD28I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD29I_CAN1_RX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 1, PINMUX_PD29I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD30I_CAN1_RX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 1, PINMUX_PD30I_CAN1_RX & 0xf},
#endif
#if defined(PINMUX_PD31I_CAN1_RX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 1, PINMUX_PD31I_CAN1_RX & 0xf},
#endif
};

const can_function can_tx[] = {
#if defined(PINMUX_PA00H_CAN0_TX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 0, PINMUX_PA00H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA01H_CAN0_TX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 0, PINMUX_PA01H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA02H_CAN0_TX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 0, PINMUX_PA02H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA03H_CAN0_TX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 0, PINMUX_PA03H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA04H_CAN0_TX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 0, PINMUX_PA04H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA05H_CAN0_TX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 0, PINMUX_PA05H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA06H_CAN0_TX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 0, PINMUX_PA06H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA07H_CAN0_TX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 0, PINMUX_PA07H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA08H_CAN0_TX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 0, PINMUX_PA08H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA09H_CAN0_TX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 0, PINMUX_PA09H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA10H_CAN0_TX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 0, PINMUX_PA10H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA11H_CAN0_TX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 0, PINMUX_PA11H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA12H_CAN0_TX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 0, PINMUX_PA12H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA13H_CAN0_TX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 0, PINMUX_PA13H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA14H_CAN0_TX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 0, PINMUX_PA14H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA15H_CAN0_TX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 0, PINMUX_PA15H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA16H_CAN0_TX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 0, PINMUX_PA16H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA17H_CAN0_TX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 0, PINMUX_PA17H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA18H_CAN0_TX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 0, PINMUX_PA18H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA19H_CAN0_TX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 0, PINMUX_PA19H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA20H_CAN0_TX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 0, PINMUX_PA20H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA21H_CAN0_TX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 0, PINMUX_PA21H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA22H_CAN0_TX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 0, PINMUX_PA22H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA23H_CAN0_TX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 0, PINMUX_PA23H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA24H_CAN0_TX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 0, PINMUX_PA24H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA25H_CAN0_TX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 0, PINMUX_PA25H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA26H_CAN0_TX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 0, PINMUX_PA26H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA27H_CAN0_TX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 0, PINMUX_PA27H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA28H_CAN0_TX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 0, PINMUX_PA28H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA29H_CAN0_TX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 0, PINMUX_PA29H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA30H_CAN0_TX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 0, PINMUX_PA30H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA31H_CAN0_TX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 0, PINMUX_PA31H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB00H_CAN0_TX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 0, PINMUX_PB00H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB01H_CAN0_TX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 0, PINMUX_PB01H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB02H_CAN0_TX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 0, PINMUX_PB02H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB03H_CAN0_TX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 0, PINMUX_PB03H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB04H_CAN0_TX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 0, PINMUX_PB04H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB05H_CAN0_TX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 0, PINMUX_PB05H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB06H_CAN0_TX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 0, PINMUX_PB06H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB07H_CAN0_TX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 0, PINMUX_PB07H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB08H_CAN0_TX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 0, PINMUX_PB08H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB09H_CAN0_TX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 0, PINMUX_PB09H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB10H_CAN0_TX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 0, PINMUX_PB10H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB11H_CAN0_TX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 0, PINMUX_PB11H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB12H_CAN0_TX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 0, PINMUX_PB12H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB13H_CAN0_TX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 0, PINMUX_PB13H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB14H_CAN0_TX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 0, PINMUX_PB14H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB15H_CAN0_TX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 0, PINMUX_PB15H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB16H_CAN0_TX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 0, PINMUX_PB16H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB17H_CAN0_TX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 0, PINMUX_PB17H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB18H_CAN0_TX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 0, PINMUX_PB18H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB19H_CAN0_TX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 0, PINMUX_PB19H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB20H_CAN0_TX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 0, PINMUX_PB20H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB21H_CAN0_TX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 0, PINMUX_PB21H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB22H_CAN0_TX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 0, PINMUX_PB22H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB23H_CAN0_TX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 0, PINMUX_PB23H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB24H_CAN0_TX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 0, PINMUX_PB24H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB25H_CAN0_TX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 0, PINMUX_PB25H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB26H_CAN0_TX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 0, PINMUX_PB26H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB27H_CAN0_TX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 0, PINMUX_PB27H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB28H_CAN0_TX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 0, PINMUX_PB28H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB29H_CAN0_TX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 0, PINMUX_PB29H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB30H_CAN0_TX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 0, PINMUX_PB30H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB31H_CAN0_TX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 0, PINMUX_PB31H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC00H_CAN0_TX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 0, PINMUX_PC00H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC01H_CAN0_TX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 0, PINMUX_PC01H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC02H_CAN0_TX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 0, PINMUX_PC02H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC03H_CAN0_TX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 0, PINMUX_PC03H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC04H_CAN0_TX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 0, PINMUX_PC04H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC05H_CAN0_TX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 0, PINMUX_PC05H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC06H_CAN0_TX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 0, PINMUX_PC06H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC07H_CAN0_TX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 0, PINMUX_PC07H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC08H_CAN0_TX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 0, PINMUX_PC08H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC09H_CAN0_TX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 0, PINMUX_PC09H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC10H_CAN0_TX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 0, PINMUX_PC10H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC11H_CAN0_TX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 0, PINMUX_PC11H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC12H_CAN0_TX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 0, PINMUX_PC12H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC13H_CAN0_TX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 0, PINMUX_PC13H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC14H_CAN0_TX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 0, PINMUX_PC14H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC15H_CAN0_TX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 0, PINMUX_PC15H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC16H_CAN0_TX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 0, PINMUX_PC16H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC17H_CAN0_TX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 0, PINMUX_PC17H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC18H_CAN0_TX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 0, PINMUX_PC18H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC19H_CAN0_TX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 0, PINMUX_PC19H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC20H_CAN0_TX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 0, PINMUX_PC20H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC21H_CAN0_TX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 0, PINMUX_PC21H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC22H_CAN0_TX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 0, PINMUX_PC22H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC23H_CAN0_TX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 0, PINMUX_PC23H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC24H_CAN0_TX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 0, PINMUX_PC24H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC25H_CAN0_TX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 0, PINMUX_PC25H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC26H_CAN0_TX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 0, PINMUX_PC26H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC27H_CAN0_TX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 0, PINMUX_PC27H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC28H_CAN0_TX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 0, PINMUX_PC28H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC29H_CAN0_TX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 0, PINMUX_PC29H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC30H_CAN0_TX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 0, PINMUX_PC30H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC31H_CAN0_TX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 0, PINMUX_PC31H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD00H_CAN0_TX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 0, PINMUX_PD00H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD01H_CAN0_TX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 0, PINMUX_PD01H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD02H_CAN0_TX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 0, PINMUX_PD02H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD03H_CAN0_TX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 0, PINMUX_PD03H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD04H_CAN0_TX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 0, PINMUX_PD04H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD05H_CAN0_TX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 0, PINMUX_PD05H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD06H_CAN0_TX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 0, PINMUX_PD06H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD07H_CAN0_TX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 0, PINMUX_PD07H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD08H_CAN0_TX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 0, PINMUX_PD08H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD09H_CAN0_TX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 0, PINMUX_PD09H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD10H_CAN0_TX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 0, PINMUX_PD10H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD11H_CAN0_TX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 0, PINMUX_PD11H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD12H_CAN0_TX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 0, PINMUX_PD12H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD13H_CAN0_TX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 0, PINMUX_PD13H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD14H_CAN0_TX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 0, PINMUX_PD14H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD15H_CAN0_TX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 0, PINMUX_PD15H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD16H_CAN0_TX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 0, PINMUX_PD16H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD17H_CAN0_TX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 0, PINMUX_PD17H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD18H_CAN0_TX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 0, PINMUX_PD18H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD19H_CAN0_TX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 0, PINMUX_PD19H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD20H_CAN0_TX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 0, PINMUX_PD20H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD21H_CAN0_TX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 0, PINMUX_PD21H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD22H_CAN0_TX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 0, PINMUX_PD22H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD23H_CAN0_TX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 0, PINMUX_PD23H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD24H_CAN0_TX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 0, PINMUX_PD24H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD25H_CAN0_TX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 0, PINMUX_PD25H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD26H_CAN0_TX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 0, PINMUX_PD26H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD27H_CAN0_TX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 0, PINMUX_PD27H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD28H_CAN0_TX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 0, PINMUX_PD28H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD29H_CAN0_TX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 0, PINMUX_PD29H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD30H_CAN0_TX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 0, PINMUX_PD30H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD31H_CAN0_TX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 0, PINMUX_PD31H_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA00I_CAN0_TX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 0, PINMUX_PA00I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA01I_CAN0_TX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 0, PINMUX_PA01I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA02I_CAN0_TX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 0, PINMUX_PA02I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA03I_CAN0_TX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 0, PINMUX_PA03I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA04I_CAN0_TX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 0, PINMUX_PA04I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA05I_CAN0_TX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 0, PINMUX_PA05I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA06I_CAN0_TX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 0, PINMUX_PA06I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA07I_CAN0_TX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 0, PINMUX_PA07I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA08I_CAN0_TX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 0, PINMUX_PA08I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA09I_CAN0_TX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 0, PINMUX_PA09I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA10I_CAN0_TX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 0, PINMUX_PA10I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA11I_CAN0_TX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 0, PINMUX_PA11I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA12I_CAN0_TX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 0, PINMUX_PA12I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA13I_CAN0_TX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 0, PINMUX_PA13I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA14I_CAN0_TX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 0, PINMUX_PA14I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA15I_CAN0_TX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 0, PINMUX_PA15I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA16I_CAN0_TX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 0, PINMUX_PA16I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA17I_CAN0_TX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 0, PINMUX_PA17I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA18I_CAN0_TX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 0, PINMUX_PA18I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA19I_CAN0_TX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 0, PINMUX_PA19I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA20I_CAN0_TX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 0, PINMUX_PA20I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA21I_CAN0_TX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 0, PINMUX_PA21I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA22I_CAN0_TX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 0, PINMUX_PA22I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA23I_CAN0_TX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 0, PINMUX_PA23I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA24I_CAN0_TX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 0, PINMUX_PA24I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA25I_CAN0_TX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 0, PINMUX_PA25I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA26I_CAN0_TX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 0, PINMUX_PA26I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA27I_CAN0_TX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 0, PINMUX_PA27I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA28I_CAN0_TX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 0, PINMUX_PA28I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA29I_CAN0_TX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 0, PINMUX_PA29I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA30I_CAN0_TX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 0, PINMUX_PA30I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA31I_CAN0_TX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 0, PINMUX_PA31I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB00I_CAN0_TX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 0, PINMUX_PB00I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB01I_CAN0_TX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 0, PINMUX_PB01I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB02I_CAN0_TX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 0, PINMUX_PB02I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB03I_CAN0_TX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 0, PINMUX_PB03I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB04I_CAN0_TX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 0, PINMUX_PB04I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB05I_CAN0_TX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 0, PINMUX_PB05I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB06I_CAN0_TX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 0, PINMUX_PB06I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB07I_CAN0_TX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 0, PINMUX_PB07I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB08I_CAN0_TX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 0, PINMUX_PB08I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB09I_CAN0_TX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 0, PINMUX_PB09I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB10I_CAN0_TX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 0, PINMUX_PB10I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB11I_CAN0_TX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 0, PINMUX_PB11I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB12I_CAN0_TX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 0, PINMUX_PB12I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB13I_CAN0_TX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 0, PINMUX_PB13I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB14I_CAN0_TX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 0, PINMUX_PB14I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB15I_CAN0_TX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 0, PINMUX_PB15I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB16I_CAN0_TX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 0, PINMUX_PB16I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB17I_CAN0_TX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 0, PINMUX_PB17I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB18I_CAN0_TX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 0, PINMUX_PB18I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB19I_CAN0_TX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 0, PINMUX_PB19I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB20I_CAN0_TX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 0, PINMUX_PB20I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB21I_CAN0_TX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 0, PINMUX_PB21I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB22I_CAN0_TX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 0, PINMUX_PB22I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB23I_CAN0_TX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 0, PINMUX_PB23I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB24I_CAN0_TX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 0, PINMUX_PB24I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB25I_CAN0_TX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 0, PINMUX_PB25I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB26I_CAN0_TX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 0, PINMUX_PB26I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB27I_CAN0_TX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 0, PINMUX_PB27I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB28I_CAN0_TX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 0, PINMUX_PB28I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB29I_CAN0_TX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 0, PINMUX_PB29I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB30I_CAN0_TX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 0, PINMUX_PB30I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PB31I_CAN0_TX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 0, PINMUX_PB31I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC00I_CAN0_TX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 0, PINMUX_PC00I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC01I_CAN0_TX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 0, PINMUX_PC01I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC02I_CAN0_TX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 0, PINMUX_PC02I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC03I_CAN0_TX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 0, PINMUX_PC03I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC04I_CAN0_TX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 0, PINMUX_PC04I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC05I_CAN0_TX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 0, PINMUX_PC05I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC06I_CAN0_TX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 0, PINMUX_PC06I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC07I_CAN0_TX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 0, PINMUX_PC07I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC08I_CAN0_TX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 0, PINMUX_PC08I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC09I_CAN0_TX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 0, PINMUX_PC09I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC10I_CAN0_TX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 0, PINMUX_PC10I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC11I_CAN0_TX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 0, PINMUX_PC11I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC12I_CAN0_TX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 0, PINMUX_PC12I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC13I_CAN0_TX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 0, PINMUX_PC13I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC14I_CAN0_TX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 0, PINMUX_PC14I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC15I_CAN0_TX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 0, PINMUX_PC15I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC16I_CAN0_TX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 0, PINMUX_PC16I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC17I_CAN0_TX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 0, PINMUX_PC17I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC18I_CAN0_TX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 0, PINMUX_PC18I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC19I_CAN0_TX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 0, PINMUX_PC19I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC20I_CAN0_TX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 0, PINMUX_PC20I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC21I_CAN0_TX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 0, PINMUX_PC21I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC22I_CAN0_TX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 0, PINMUX_PC22I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC23I_CAN0_TX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 0, PINMUX_PC23I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC24I_CAN0_TX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 0, PINMUX_PC24I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC25I_CAN0_TX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 0, PINMUX_PC25I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC26I_CAN0_TX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 0, PINMUX_PC26I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC27I_CAN0_TX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 0, PINMUX_PC27I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC28I_CAN0_TX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 0, PINMUX_PC28I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC29I_CAN0_TX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 0, PINMUX_PC29I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC30I_CAN0_TX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 0, PINMUX_PC30I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PC31I_CAN0_TX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 0, PINMUX_PC31I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD00I_CAN0_TX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 0, PINMUX_PD00I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD01I_CAN0_TX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 0, PINMUX_PD01I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD02I_CAN0_TX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 0, PINMUX_PD02I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD03I_CAN0_TX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 0, PINMUX_PD03I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD04I_CAN0_TX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 0, PINMUX_PD04I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD05I_CAN0_TX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 0, PINMUX_PD05I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD06I_CAN0_TX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 0, PINMUX_PD06I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD07I_CAN0_TX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 0, PINMUX_PD07I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD08I_CAN0_TX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 0, PINMUX_PD08I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD09I_CAN0_TX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 0, PINMUX_PD09I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD10I_CAN0_TX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 0, PINMUX_PD10I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD11I_CAN0_TX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 0, PINMUX_PD11I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD12I_CAN0_TX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 0, PINMUX_PD12I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD13I_CAN0_TX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 0, PINMUX_PD13I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD14I_CAN0_TX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 0, PINMUX_PD14I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD15I_CAN0_TX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 0, PINMUX_PD15I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD16I_CAN0_TX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 0, PINMUX_PD16I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD17I_CAN0_TX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 0, PINMUX_PD17I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD18I_CAN0_TX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 0, PINMUX_PD18I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD19I_CAN0_TX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 0, PINMUX_PD19I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD20I_CAN0_TX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 0, PINMUX_PD20I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD21I_CAN0_TX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 0, PINMUX_PD21I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD22I_CAN0_TX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 0, PINMUX_PD22I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD23I_CAN0_TX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 0, PINMUX_PD23I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD24I_CAN0_TX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 0, PINMUX_PD24I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD25I_CAN0_TX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 0, PINMUX_PD25I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD26I_CAN0_TX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 0, PINMUX_PD26I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD27I_CAN0_TX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 0, PINMUX_PD27I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD28I_CAN0_TX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 0, PINMUX_PD28I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD29I_CAN0_TX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 0, PINMUX_PD29I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD30I_CAN0_TX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 0, PINMUX_PD30I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PD31I_CAN0_TX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 0, PINMUX_PD31I_CAN0_TX & 0xf},
#endif
#if defined(PINMUX_PA00H_CAN1_TX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 1, PINMUX_PA00H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA01H_CAN1_TX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 1, PINMUX_PA01H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA02H_CAN1_TX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 1, PINMUX_PA02H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA03H_CAN1_TX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 1, PINMUX_PA03H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA04H_CAN1_TX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 1, PINMUX_PA04H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA05H_CAN1_TX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 1, PINMUX_PA05H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA06H_CAN1_TX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 1, PINMUX_PA06H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA07H_CAN1_TX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 1, PINMUX_PA07H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA08H_CAN1_TX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 1, PINMUX_PA08H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA09H_CAN1_TX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 1, PINMUX_PA09H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA10H_CAN1_TX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 1, PINMUX_PA10H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA11H_CAN1_TX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 1, PINMUX_PA11H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA12H_CAN1_TX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 1, PINMUX_PA12H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA13H_CAN1_TX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 1, PINMUX_PA13H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA14H_CAN1_TX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 1, PINMUX_PA14H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA15H_CAN1_TX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 1, PINMUX_PA15H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA16H_CAN1_TX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 1, PINMUX_PA16H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA17H_CAN1_TX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 1, PINMUX_PA17H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA18H_CAN1_TX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 1, PINMUX_PA18H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA19H_CAN1_TX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 1, PINMUX_PA19H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA20H_CAN1_TX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 1, PINMUX_PA20H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA21H_CAN1_TX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 1, PINMUX_PA21H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA22H_CAN1_TX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 1, PINMUX_PA22H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA23H_CAN1_TX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 1, PINMUX_PA23H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA24H_CAN1_TX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 1, PINMUX_PA24H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA25H_CAN1_TX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 1, PINMUX_PA25H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA26H_CAN1_TX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 1, PINMUX_PA26H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA27H_CAN1_TX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 1, PINMUX_PA27H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA28H_CAN1_TX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 1, PINMUX_PA28H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA29H_CAN1_TX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 1, PINMUX_PA29H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA30H_CAN1_TX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 1, PINMUX_PA30H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA31H_CAN1_TX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 1, PINMUX_PA31H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB00H_CAN1_TX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 1, PINMUX_PB00H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB01H_CAN1_TX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 1, PINMUX_PB01H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB02H_CAN1_TX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 1, PINMUX_PB02H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB03H_CAN1_TX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 1, PINMUX_PB03H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB04H_CAN1_TX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 1, PINMUX_PB04H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB05H_CAN1_TX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 1, PINMUX_PB05H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB06H_CAN1_TX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 1, PINMUX_PB06H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB07H_CAN1_TX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 1, PINMUX_PB07H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB08H_CAN1_TX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 1, PINMUX_PB08H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB09H_CAN1_TX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 1, PINMUX_PB09H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB10H_CAN1_TX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 1, PINMUX_PB10H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB11H_CAN1_TX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 1, PINMUX_PB11H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB12H_CAN1_TX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 1, PINMUX_PB12H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB13H_CAN1_TX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 1, PINMUX_PB13H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB14H_CAN1_TX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 1, PINMUX_PB14H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB15H_CAN1_TX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 1, PINMUX_PB15H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB16H_CAN1_TX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 1, PINMUX_PB16H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB17H_CAN1_TX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 1, PINMUX_PB17H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB18H_CAN1_TX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 1, PINMUX_PB18H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB19H_CAN1_TX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 1, PINMUX_PB19H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB20H_CAN1_TX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 1, PINMUX_PB20H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB21H_CAN1_TX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 1, PINMUX_PB21H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB22H_CAN1_TX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 1, PINMUX_PB22H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB23H_CAN1_TX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 1, PINMUX_PB23H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB24H_CAN1_TX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 1, PINMUX_PB24H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB25H_CAN1_TX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 1, PINMUX_PB25H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB26H_CAN1_TX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 1, PINMUX_PB26H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB27H_CAN1_TX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 1, PINMUX_PB27H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB28H_CAN1_TX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 1, PINMUX_PB28H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB29H_CAN1_TX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 1, PINMUX_PB29H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB30H_CAN1_TX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 1, PINMUX_PB30H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB31H_CAN1_TX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 1, PINMUX_PB31H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC00H_CAN1_TX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 1, PINMUX_PC00H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC01H_CAN1_TX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 1, PINMUX_PC01H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC02H_CAN1_TX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 1, PINMUX_PC02H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC03H_CAN1_TX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 1, PINMUX_PC03H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC04H_CAN1_TX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 1, PINMUX_PC04H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC05H_CAN1_TX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 1, PINMUX_PC05H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC06H_CAN1_TX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 1, PINMUX_PC06H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC07H_CAN1_TX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 1, PINMUX_PC07H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC08H_CAN1_TX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 1, PINMUX_PC08H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC09H_CAN1_TX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 1, PINMUX_PC09H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC10H_CAN1_TX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 1, PINMUX_PC10H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC11H_CAN1_TX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 1, PINMUX_PC11H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC12H_CAN1_TX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 1, PINMUX_PC12H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC13H_CAN1_TX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 1, PINMUX_PC13H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC14H_CAN1_TX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 1, PINMUX_PC14H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC15H_CAN1_TX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 1, PINMUX_PC15H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC16H_CAN1_TX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 1, PINMUX_PC16H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC17H_CAN1_TX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 1, PINMUX_PC17H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC18H_CAN1_TX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 1, PINMUX_PC18H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC19H_CAN1_TX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 1, PINMUX_PC19H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC20H_CAN1_TX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 1, PINMUX_PC20H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC21H_CAN1_TX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 1, PINMUX_PC21H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC22H_CAN1_TX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 1, PINMUX_PC22H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC23H_CAN1_TX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 1, PINMUX_PC23H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC24H_CAN1_TX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 1, PINMUX_PC24H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC25H_CAN1_TX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 1, PINMUX_PC25H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC26H_CAN1_TX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 1, PINMUX_PC26H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC27H_CAN1_TX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 1, PINMUX_PC27H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC28H_CAN1_TX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 1, PINMUX_PC28H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC29H_CAN1_TX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 1, PINMUX_PC29H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC30H_CAN1_TX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 1, PINMUX_PC30H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC31H_CAN1_TX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 1, PINMUX_PC31H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD00H_CAN1_TX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 1, PINMUX_PD00H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD01H_CAN1_TX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 1, PINMUX_PD01H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD02H_CAN1_TX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 1, PINMUX_PD02H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD03H_CAN1_TX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 1, PINMUX_PD03H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD04H_CAN1_TX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 1, PINMUX_PD04H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD05H_CAN1_TX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 1, PINMUX_PD05H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD06H_CAN1_TX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 1, PINMUX_PD06H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD07H_CAN1_TX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 1, PINMUX_PD07H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD08H_CAN1_TX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 1, PINMUX_PD08H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD09H_CAN1_TX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 1, PINMUX_PD09H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD10H_CAN1_TX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 1, PINMUX_PD10H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD11H_CAN1_TX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 1, PINMUX_PD11H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD12H_CAN1_TX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 1, PINMUX_PD12H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD13H_CAN1_TX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 1, PINMUX_PD13H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD14H_CAN1_TX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 1, PINMUX_PD14H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD15H_CAN1_TX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 1, PINMUX_PD15H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD16H_CAN1_TX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 1, PINMUX_PD16H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD17H_CAN1_TX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 1, PINMUX_PD17H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD18H_CAN1_TX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 1, PINMUX_PD18H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD19H_CAN1_TX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 1, PINMUX_PD19H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD20H_CAN1_TX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 1, PINMUX_PD20H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD21H_CAN1_TX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 1, PINMUX_PD21H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD22H_CAN1_TX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 1, PINMUX_PD22H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD23H_CAN1_TX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 1, PINMUX_PD23H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD24H_CAN1_TX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 1, PINMUX_PD24H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD25H_CAN1_TX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 1, PINMUX_PD25H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD26H_CAN1_TX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 1, PINMUX_PD26H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD27H_CAN1_TX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 1, PINMUX_PD27H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD28H_CAN1_TX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 1, PINMUX_PD28H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD29H_CAN1_TX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 1, PINMUX_PD29H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD30H_CAN1_TX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 1, PINMUX_PD30H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD31H_CAN1_TX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 1, PINMUX_PD31H_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA00I_CAN1_TX) && !defined(IGNORE_PIN_PA00)
    {PIN_PA00 >> 5, PIN_PA00 & 0x1f, 1, PINMUX_PA00I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA01I_CAN1_TX) && !defined(IGNORE_PIN_PA01)
    {PIN_PA01 >> 5, PIN_PA01 & 0x1f, 1, PINMUX_PA01I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA02I_CAN1_TX) && !defined(IGNORE_PIN_PA02)
    {PIN_PA02 >> 5, PIN_PA02 & 0x1f, 1, PINMUX_PA02I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA03I_CAN1_TX) && !defined(IGNORE_PIN_PA03)
    {PIN_PA03 >> 5, PIN_PA03 & 0x1f, 1, PINMUX_PA03I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA04I_CAN1_TX) && !defined(IGNORE_PIN_PA04)
    {PIN_PA04 >> 5, PIN_PA04 & 0x1f, 1, PINMUX_PA04I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA05I_CAN1_TX) && !defined(IGNORE_PIN_PA05)
    {PIN_PA05 >> 5, PIN_PA05 & 0x1f, 1, PINMUX_PA05I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA06I_CAN1_TX) && !defined(IGNORE_PIN_PA06)
    {PIN_PA06 >> 5, PIN_PA06 & 0x1f, 1, PINMUX_PA06I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA07I_CAN1_TX) && !defined(IGNORE_PIN_PA07)
    {PIN_PA07 >> 5, PIN_PA07 & 0x1f, 1, PINMUX_PA07I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA08I_CAN1_TX) && !defined(IGNORE_PIN_PA08)
    {PIN_PA08 >> 5, PIN_PA08 & 0x1f, 1, PINMUX_PA08I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA09I_CAN1_TX) && !defined(IGNORE_PIN_PA09)
    {PIN_PA09 >> 5, PIN_PA09 & 0x1f, 1, PINMUX_PA09I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA10I_CAN1_TX) && !defined(IGNORE_PIN_PA10)
    {PIN_PA10 >> 5, PIN_PA10 & 0x1f, 1, PINMUX_PA10I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA11I_CAN1_TX) && !defined(IGNORE_PIN_PA11)
    {PIN_PA11 >> 5, PIN_PA11 & 0x1f, 1, PINMUX_PA11I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA12I_CAN1_TX) && !defined(IGNORE_PIN_PA12)
    {PIN_PA12 >> 5, PIN_PA12 & 0x1f, 1, PINMUX_PA12I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA13I_CAN1_TX) && !defined(IGNORE_PIN_PA13)
    {PIN_PA13 >> 5, PIN_PA13 & 0x1f, 1, PINMUX_PA13I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA14I_CAN1_TX) && !defined(IGNORE_PIN_PA14)
    {PIN_PA14 >> 5, PIN_PA14 & 0x1f, 1, PINMUX_PA14I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA15I_CAN1_TX) && !defined(IGNORE_PIN_PA15)
    {PIN_PA15 >> 5, PIN_PA15 & 0x1f, 1, PINMUX_PA15I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA16I_CAN1_TX) && !defined(IGNORE_PIN_PA16)
    {PIN_PA16 >> 5, PIN_PA16 & 0x1f, 1, PINMUX_PA16I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA17I_CAN1_TX) && !defined(IGNORE_PIN_PA17)
    {PIN_PA17 >> 5, PIN_PA17 & 0x1f, 1, PINMUX_PA17I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA18I_CAN1_TX) && !defined(IGNORE_PIN_PA18)
    {PIN_PA18 >> 5, PIN_PA18 & 0x1f, 1, PINMUX_PA18I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA19I_CAN1_TX) && !defined(IGNORE_PIN_PA19)
    {PIN_PA19 >> 5, PIN_PA19 & 0x1f, 1, PINMUX_PA19I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA20I_CAN1_TX) && !defined(IGNORE_PIN_PA20)
    {PIN_PA20 >> 5, PIN_PA20 & 0x1f, 1, PINMUX_PA20I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA21I_CAN1_TX) && !defined(IGNORE_PIN_PA21)
    {PIN_PA21 >> 5, PIN_PA21 & 0x1f, 1, PINMUX_PA21I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA22I_CAN1_TX) && !defined(IGNORE_PIN_PA22)
    {PIN_PA22 >> 5, PIN_PA22 & 0x1f, 1, PINMUX_PA22I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA23I_CAN1_TX) && !defined(IGNORE_PIN_PA23)
    {PIN_PA23 >> 5, PIN_PA23 & 0x1f, 1, PINMUX_PA23I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA24I_CAN1_TX) && !defined(IGNORE_PIN_PA24)
    {PIN_PA24 >> 5, PIN_PA24 & 0x1f, 1, PINMUX_PA24I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA25I_CAN1_TX) && !defined(IGNORE_PIN_PA25)
    {PIN_PA25 >> 5, PIN_PA25 & 0x1f, 1, PINMUX_PA25I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA26I_CAN1_TX) && !defined(IGNORE_PIN_PA26)
    {PIN_PA26 >> 5, PIN_PA26 & 0x1f, 1, PINMUX_PA26I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA27I_CAN1_TX) && !defined(IGNORE_PIN_PA27)
    {PIN_PA27 >> 5, PIN_PA27 & 0x1f, 1, PINMUX_PA27I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA28I_CAN1_TX) && !defined(IGNORE_PIN_PA28)
    {PIN_PA28 >> 5, PIN_PA28 & 0x1f, 1, PINMUX_PA28I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA29I_CAN1_TX) && !defined(IGNORE_PIN_PA29)
    {PIN_PA29 >> 5, PIN_PA29 & 0x1f, 1, PINMUX_PA29I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA30I_CAN1_TX) && !defined(IGNORE_PIN_PA30)
    {PIN_PA30 >> 5, PIN_PA30 & 0x1f, 1, PINMUX_PA30I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PA31I_CAN1_TX) && !defined(IGNORE_PIN_PA31)
    {PIN_PA31 >> 5, PIN_PA31 & 0x1f, 1, PINMUX_PA31I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB00I_CAN1_TX) && !defined(IGNORE_PIN_PB00)
    {PIN_PB00 >> 5, PIN_PB00 & 0x1f, 1, PINMUX_PB00I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB01I_CAN1_TX) && !defined(IGNORE_PIN_PB01)
    {PIN_PB01 >> 5, PIN_PB01 & 0x1f, 1, PINMUX_PB01I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB02I_CAN1_TX) && !defined(IGNORE_PIN_PB02)
    {PIN_PB02 >> 5, PIN_PB02 & 0x1f, 1, PINMUX_PB02I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB03I_CAN1_TX) && !defined(IGNORE_PIN_PB03)
    {PIN_PB03 >> 5, PIN_PB03 & 0x1f, 1, PINMUX_PB03I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB04I_CAN1_TX) && !defined(IGNORE_PIN_PB04)
    {PIN_PB04 >> 5, PIN_PB04 & 0x1f, 1, PINMUX_PB04I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB05I_CAN1_TX) && !defined(IGNORE_PIN_PB05)
    {PIN_PB05 >> 5, PIN_PB05 & 0x1f, 1, PINMUX_PB05I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB06I_CAN1_TX) && !defined(IGNORE_PIN_PB06)
    {PIN_PB06 >> 5, PIN_PB06 & 0x1f, 1, PINMUX_PB06I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB07I_CAN1_TX) && !defined(IGNORE_PIN_PB07)
    {PIN_PB07 >> 5, PIN_PB07 & 0x1f, 1, PINMUX_PB07I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB08I_CAN1_TX) && !defined(IGNORE_PIN_PB08)
    {PIN_PB08 >> 5, PIN_PB08 & 0x1f, 1, PINMUX_PB08I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB09I_CAN1_TX) && !defined(IGNORE_PIN_PB09)
    {PIN_PB09 >> 5, PIN_PB09 & 0x1f, 1, PINMUX_PB09I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB10I_CAN1_TX) && !defined(IGNORE_PIN_PB10)
    {PIN_PB10 >> 5, PIN_PB10 & 0x1f, 1, PINMUX_PB10I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB11I_CAN1_TX) && !defined(IGNORE_PIN_PB11)
    {PIN_PB11 >> 5, PIN_PB11 & 0x1f, 1, PINMUX_PB11I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB12I_CAN1_TX) && !defined(IGNORE_PIN_PB12)
    {PIN_PB12 >> 5, PIN_PB12 & 0x1f, 1, PINMUX_PB12I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB13I_CAN1_TX) && !defined(IGNORE_PIN_PB13)
    {PIN_PB13 >> 5, PIN_PB13 & 0x1f, 1, PINMUX_PB13I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB14I_CAN1_TX) && !defined(IGNORE_PIN_PB14)
    {PIN_PB14 >> 5, PIN_PB14 & 0x1f, 1, PINMUX_PB14I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB15I_CAN1_TX) && !defined(IGNORE_PIN_PB15)
    {PIN_PB15 >> 5, PIN_PB15 & 0x1f, 1, PINMUX_PB15I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB16I_CAN1_TX) && !defined(IGNORE_PIN_PB16)
    {PIN_PB16 >> 5, PIN_PB16 & 0x1f, 1, PINMUX_PB16I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB17I_CAN1_TX) && !defined(IGNORE_PIN_PB17)
    {PIN_PB17 >> 5, PIN_PB17 & 0x1f, 1, PINMUX_PB17I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB18I_CAN1_TX) && !defined(IGNORE_PIN_PB18)
    {PIN_PB18 >> 5, PIN_PB18 & 0x1f, 1, PINMUX_PB18I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB19I_CAN1_TX) && !defined(IGNORE_PIN_PB19)
    {PIN_PB19 >> 5, PIN_PB19 & 0x1f, 1, PINMUX_PB19I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB20I_CAN1_TX) && !defined(IGNORE_PIN_PB20)
    {PIN_PB20 >> 5, PIN_PB20 & 0x1f, 1, PINMUX_PB20I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB21I_CAN1_TX) && !defined(IGNORE_PIN_PB21)
    {PIN_PB21 >> 5, PIN_PB21 & 0x1f, 1, PINMUX_PB21I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB22I_CAN1_TX) && !defined(IGNORE_PIN_PB22)
    {PIN_PB22 >> 5, PIN_PB22 & 0x1f, 1, PINMUX_PB22I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB23I_CAN1_TX) && !defined(IGNORE_PIN_PB23)
    {PIN_PB23 >> 5, PIN_PB23 & 0x1f, 1, PINMUX_PB23I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB24I_CAN1_TX) && !defined(IGNORE_PIN_PB24)
    {PIN_PB24 >> 5, PIN_PB24 & 0x1f, 1, PINMUX_PB24I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB25I_CAN1_TX) && !defined(IGNORE_PIN_PB25)
    {PIN_PB25 >> 5, PIN_PB25 & 0x1f, 1, PINMUX_PB25I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB26I_CAN1_TX) && !defined(IGNORE_PIN_PB26)
    {PIN_PB26 >> 5, PIN_PB26 & 0x1f, 1, PINMUX_PB26I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB27I_CAN1_TX) && !defined(IGNORE_PIN_PB27)
    {PIN_PB27 >> 5, PIN_PB27 & 0x1f, 1, PINMUX_PB27I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB28I_CAN1_TX) && !defined(IGNORE_PIN_PB28)
    {PIN_PB28 >> 5, PIN_PB28 & 0x1f, 1, PINMUX_PB28I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB29I_CAN1_TX) && !defined(IGNORE_PIN_PB29)
    {PIN_PB29 >> 5, PIN_PB29 & 0x1f, 1, PINMUX_PB29I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB30I_CAN1_TX) && !defined(IGNORE_PIN_PB30)
    {PIN_PB30 >> 5, PIN_PB30 & 0x1f, 1, PINMUX_PB30I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PB31I_CAN1_TX) && !defined(IGNORE_PIN_PB31)
    {PIN_PB31 >> 5, PIN_PB31 & 0x1f, 1, PINMUX_PB31I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC00I_CAN1_TX) && !defined(IGNORE_PIN_PC00)
    {PIN_PC00 >> 5, PIN_PC00 & 0x1f, 1, PINMUX_PC00I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC01I_CAN1_TX) && !defined(IGNORE_PIN_PC01)
    {PIN_PC01 >> 5, PIN_PC01 & 0x1f, 1, PINMUX_PC01I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC02I_CAN1_TX) && !defined(IGNORE_PIN_PC02)
    {PIN_PC02 >> 5, PIN_PC02 & 0x1f, 1, PINMUX_PC02I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC03I_CAN1_TX) && !defined(IGNORE_PIN_PC03)
    {PIN_PC03 >> 5, PIN_PC03 & 0x1f, 1, PINMUX_PC03I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC04I_CAN1_TX) && !defined(IGNORE_PIN_PC04)
    {PIN_PC04 >> 5, PIN_PC04 & 0x1f, 1, PINMUX_PC04I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC05I_CAN1_TX) && !defined(IGNORE_PIN_PC05)
    {PIN_PC05 >> 5, PIN_PC05 & 0x1f, 1, PINMUX_PC05I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC06I_CAN1_TX) && !defined(IGNORE_PIN_PC06)
    {PIN_PC06 >> 5, PIN_PC06 & 0x1f, 1, PINMUX_PC06I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC07I_CAN1_TX) && !defined(IGNORE_PIN_PC07)
    {PIN_PC07 >> 5, PIN_PC07 & 0x1f, 1, PINMUX_PC07I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC08I_CAN1_TX) && !defined(IGNORE_PIN_PC08)
    {PIN_PC08 >> 5, PIN_PC08 & 0x1f, 1, PINMUX_PC08I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC09I_CAN1_TX) && !defined(IGNORE_PIN_PC09)
    {PIN_PC09 >> 5, PIN_PC09 & 0x1f, 1, PINMUX_PC09I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC10I_CAN1_TX) && !defined(IGNORE_PIN_PC10)
    {PIN_PC10 >> 5, PIN_PC10 & 0x1f, 1, PINMUX_PC10I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC11I_CAN1_TX) && !defined(IGNORE_PIN_PC11)
    {PIN_PC11 >> 5, PIN_PC11 & 0x1f, 1, PINMUX_PC11I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC12I_CAN1_TX) && !defined(IGNORE_PIN_PC12)
    {PIN_PC12 >> 5, PIN_PC12 & 0x1f, 1, PINMUX_PC12I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC13I_CAN1_TX) && !defined(IGNORE_PIN_PC13)
    {PIN_PC13 >> 5, PIN_PC13 & 0x1f, 1, PINMUX_PC13I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC14I_CAN1_TX) && !defined(IGNORE_PIN_PC14)
    {PIN_PC14 >> 5, PIN_PC14 & 0x1f, 1, PINMUX_PC14I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC15I_CAN1_TX) && !defined(IGNORE_PIN_PC15)
    {PIN_PC15 >> 5, PIN_PC15 & 0x1f, 1, PINMUX_PC15I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC16I_CAN1_TX) && !defined(IGNORE_PIN_PC16)
    {PIN_PC16 >> 5, PIN_PC16 & 0x1f, 1, PINMUX_PC16I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC17I_CAN1_TX) && !defined(IGNORE_PIN_PC17)
    {PIN_PC17 >> 5, PIN_PC17 & 0x1f, 1, PINMUX_PC17I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC18I_CAN1_TX) && !defined(IGNORE_PIN_PC18)
    {PIN_PC18 >> 5, PIN_PC18 & 0x1f, 1, PINMUX_PC18I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC19I_CAN1_TX) && !defined(IGNORE_PIN_PC19)
    {PIN_PC19 >> 5, PIN_PC19 & 0x1f, 1, PINMUX_PC19I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC20I_CAN1_TX) && !defined(IGNORE_PIN_PC20)
    {PIN_PC20 >> 5, PIN_PC20 & 0x1f, 1, PINMUX_PC20I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC21I_CAN1_TX) && !defined(IGNORE_PIN_PC21)
    {PIN_PC21 >> 5, PIN_PC21 & 0x1f, 1, PINMUX_PC21I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC22I_CAN1_TX) && !defined(IGNORE_PIN_PC22)
    {PIN_PC22 >> 5, PIN_PC22 & 0x1f, 1, PINMUX_PC22I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC23I_CAN1_TX) && !defined(IGNORE_PIN_PC23)
    {PIN_PC23 >> 5, PIN_PC23 & 0x1f, 1, PINMUX_PC23I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC24I_CAN1_TX) && !defined(IGNORE_PIN_PC24)
    {PIN_PC24 >> 5, PIN_PC24 & 0x1f, 1, PINMUX_PC24I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC25I_CAN1_TX) && !defined(IGNORE_PIN_PC25)
    {PIN_PC25 >> 5, PIN_PC25 & 0x1f, 1, PINMUX_PC25I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC26I_CAN1_TX) && !defined(IGNORE_PIN_PC26)
    {PIN_PC26 >> 5, PIN_PC26 & 0x1f, 1, PINMUX_PC26I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC27I_CAN1_TX) && !defined(IGNORE_PIN_PC27)
    {PIN_PC27 >> 5, PIN_PC27 & 0x1f, 1, PINMUX_PC27I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC28I_CAN1_TX) && !defined(IGNORE_PIN_PC28)
    {PIN_PC28 >> 5, PIN_PC28 & 0x1f, 1, PINMUX_PC28I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC29I_CAN1_TX) && !defined(IGNORE_PIN_PC29)
    {PIN_PC29 >> 5, PIN_PC29 & 0x1f, 1, PINMUX_PC29I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC30I_CAN1_TX) && !defined(IGNORE_PIN_PC30)
    {PIN_PC30 >> 5, PIN_PC30 & 0x1f, 1, PINMUX_PC30I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PC31I_CAN1_TX) && !defined(IGNORE_PIN_PC31)
    {PIN_PC31 >> 5, PIN_PC31 & 0x1f, 1, PINMUX_PC31I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD00I_CAN1_TX) && !defined(IGNORE_PIN_PD00)
    {PIN_PD00 >> 5, PIN_PD00 & 0x1f, 1, PINMUX_PD00I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD01I_CAN1_TX) && !defined(IGNORE_PIN_PD01)
    {PIN_PD01 >> 5, PIN_PD01 & 0x1f, 1, PINMUX_PD01I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD02I_CAN1_TX) && !defined(IGNORE_PIN_PD02)
    {PIN_PD02 >> 5, PIN_PD02 & 0x1f, 1, PINMUX_PD02I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD03I_CAN1_TX) && !defined(IGNORE_PIN_PD03)
    {PIN_PD03 >> 5, PIN_PD03 & 0x1f, 1, PINMUX_PD03I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD04I_CAN1_TX) && !defined(IGNORE_PIN_PD04)
    {PIN_PD04 >> 5, PIN_PD04 & 0x1f, 1, PINMUX_PD04I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD05I_CAN1_TX) && !defined(IGNORE_PIN_PD05)
    {PIN_PD05 >> 5, PIN_PD05 & 0x1f, 1, PINMUX_PD05I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD06I_CAN1_TX) && !defined(IGNORE_PIN_PD06)
    {PIN_PD06 >> 5, PIN_PD06 & 0x1f, 1, PINMUX_PD06I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD07I_CAN1_TX) && !defined(IGNORE_PIN_PD07)
    {PIN_PD07 >> 5, PIN_PD07 & 0x1f, 1, PINMUX_PD07I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD08I_CAN1_TX) && !defined(IGNORE_PIN_PD08)
    {PIN_PD08 >> 5, PIN_PD08 & 0x1f, 1, PINMUX_PD08I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD09I_CAN1_TX) && !defined(IGNORE_PIN_PD09)
    {PIN_PD09 >> 5, PIN_PD09 & 0x1f, 1, PINMUX_PD09I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD10I_CAN1_TX) && !defined(IGNORE_PIN_PD10)
    {PIN_PD10 >> 5, PIN_PD10 & 0x1f, 1, PINMUX_PD10I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD11I_CAN1_TX) && !defined(IGNORE_PIN_PD11)
    {PIN_PD11 >> 5, PIN_PD11 & 0x1f, 1, PINMUX_PD11I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD12I_CAN1_TX) && !defined(IGNORE_PIN_PD12)
    {PIN_PD12 >> 5, PIN_PD12 & 0x1f, 1, PINMUX_PD12I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD13I_CAN1_TX) && !defined(IGNORE_PIN_PD13)
    {PIN_PD13 >> 5, PIN_PD13 & 0x1f, 1, PINMUX_PD13I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD14I_CAN1_TX) && !defined(IGNORE_PIN_PD14)
    {PIN_PD14 >> 5, PIN_PD14 & 0x1f, 1, PINMUX_PD14I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD15I_CAN1_TX) && !defined(IGNORE_PIN_PD15)
    {PIN_PD15 >> 5, PIN_PD15 & 0x1f, 1, PINMUX_PD15I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD16I_CAN1_TX) && !defined(IGNORE_PIN_PD16)
    {PIN_PD16 >> 5, PIN_PD16 & 0x1f, 1, PINMUX_PD16I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD17I_CAN1_TX) && !defined(IGNORE_PIN_PD17)
    {PIN_PD17 >> 5, PIN_PD17 & 0x1f, 1, PINMUX_PD17I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD18I_CAN1_TX) && !defined(IGNORE_PIN_PD18)
    {PIN_PD18 >> 5, PIN_PD18 & 0x1f, 1, PINMUX_PD18I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD19I_CAN1_TX) && !defined(IGNORE_PIN_PD19)
    {PIN_PD19 >> 5, PIN_PD19 & 0x1f, 1, PINMUX_PD19I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD20I_CAN1_TX) && !defined(IGNORE_PIN_PD20)
    {PIN_PD20 >> 5, PIN_PD20 & 0x1f, 1, PINMUX_PD20I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD21I_CAN1_TX) && !defined(IGNORE_PIN_PD21)
    {PIN_PD21 >> 5, PIN_PD21 & 0x1f, 1, PINMUX_PD21I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD22I_CAN1_TX) && !defined(IGNORE_PIN_PD22)
    {PIN_PD22 >> 5, PIN_PD22 & 0x1f, 1, PINMUX_PD22I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD23I_CAN1_TX) && !defined(IGNORE_PIN_PD23)
    {PIN_PD23 >> 5, PIN_PD23 & 0x1f, 1, PINMUX_PD23I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD24I_CAN1_TX) && !defined(IGNORE_PIN_PD24)
    {PIN_PD24 >> 5, PIN_PD24 & 0x1f, 1, PINMUX_PD24I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD25I_CAN1_TX) && !defined(IGNORE_PIN_PD25)
    {PIN_PD25 >> 5, PIN_PD25 & 0x1f, 1, PINMUX_PD25I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD26I_CAN1_TX) && !defined(IGNORE_PIN_PD26)
    {PIN_PD26 >> 5, PIN_PD26 & 0x1f, 1, PINMUX_PD26I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD27I_CAN1_TX) && !defined(IGNORE_PIN_PD27)
    {PIN_PD27 >> 5, PIN_PD27 & 0x1f, 1, PINMUX_PD27I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD28I_CAN1_TX) && !defined(IGNORE_PIN_PD28)
    {PIN_PD28 >> 5, PIN_PD28 & 0x1f, 1, PINMUX_PD28I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD29I_CAN1_TX) && !defined(IGNORE_PIN_PD29)
    {PIN_PD29 >> 5, PIN_PD29 & 0x1f, 1, PINMUX_PD29I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD30I_CAN1_TX) && !defined(IGNORE_PIN_PD30)
    {PIN_PD30 >> 5, PIN_PD30 & 0x1f, 1, PINMUX_PD30I_CAN1_TX & 0xf},
#endif
#if defined(PINMUX_PD31I_CAN1_TX) && !defined(IGNORE_PIN_PD31)
    {PIN_PD31 >> 5, PIN_PD31 & 0x1f, 1, PINMUX_PD31I_CAN1_TX & 0xf},
#endif
};
