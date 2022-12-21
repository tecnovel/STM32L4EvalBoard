/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define O2_Pin GPIO_PIN_2
#define O2_GPIO_Port GPIOE
#define O1_Pin GPIO_PIN_3
#define O1_GPIO_Port GPIOE
#define O0_Pin GPIO_PIN_4
#define O0_GPIO_Port GPIOE
#define I3_Pin GPIO_PIN_5
#define I3_GPIO_Port GPIOE
#define I2_Pin GPIO_PIN_6
#define I2_GPIO_Port GPIOE
#define ROT_A_Pin GPIO_PIN_13
#define ROT_A_GPIO_Port GPIOC
#define ROT_A_EXTI_IRQn EXTI15_10_IRQn
#define ROT_B_Pin GPIO_PIN_14
#define ROT_B_GPIO_Port GPIOC
#define DIR_Pin GPIO_PIN_15
#define DIR_GPIO_Port GPIOC
#define D0_Pin GPIO_PIN_0
#define D0_GPIO_Port GPIOF
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOF
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOF
#define D3_Pin GPIO_PIN_3
#define D3_GPIO_Port GPIOF
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOF
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOF
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOF
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOF
#define I0_Pin GPIO_PIN_10
#define I0_GPIO_Port GPIOF
#define I1_Pin GPIO_PIN_0
#define I1_GPIO_Port GPIOH
#define RGB_Pin GPIO_PIN_1
#define RGB_GPIO_Port GPIOH
#define AIN0_Pin GPIO_PIN_0
#define AIN0_GPIO_Port GPIOC
#define AIN1_Pin GPIO_PIN_1
#define AIN1_GPIO_Port GPIOC
#define POT0_Pin GPIO_PIN_2
#define POT0_GPIO_Port GPIOC
#define POT1_Pin GPIO_PIN_3
#define POT1_GPIO_Port GPIOC
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_1
#define A1_GPIO_Port GPIOA
#define A2_Pin GPIO_PIN_2
#define A2_GPIO_Port GPIOA
#define A3_Pin GPIO_PIN_3
#define A3_GPIO_Port GPIOA
#define DAC0_Pin GPIO_PIN_4
#define DAC0_GPIO_Port GPIOA
#define DAC1_Pin GPIO_PIN_5
#define DAC1_GPIO_Port GPIOA
#define A4_Pin GPIO_PIN_6
#define A4_GPIO_Port GPIOA
#define A5_Pin GPIO_PIN_7
#define A5_GPIO_Port GPIOA
#define A6_Pin GPIO_PIN_4
#define A6_GPIO_Port GPIOC
#define A7_Pin GPIO_PIN_0
#define A7_GPIO_Port GPIOB
#define ECHO_Pin GPIO_PIN_1
#define ECHO_GPIO_Port GPIOB
#define ECHO_EXTI_IRQn EXTI1_IRQn
#define TRIG_Pin GPIO_PIN_2
#define TRIG_GPIO_Port GPIOB
#define P15_Pin GPIO_PIN_11
#define P15_GPIO_Port GPIOF
#define P14_Pin GPIO_PIN_12
#define P14_GPIO_Port GPIOF
#define P13_Pin GPIO_PIN_13
#define P13_GPIO_Port GPIOF
#define P12_Pin GPIO_PIN_14
#define P12_GPIO_Port GPIOF
#define P11_Pin GPIO_PIN_15
#define P11_GPIO_Port GPIOF
#define P10_Pin GPIO_PIN_0
#define P10_GPIO_Port GPIOG
#define P9_Pin GPIO_PIN_1
#define P9_GPIO_Port GPIOG
#define P8_Pin GPIO_PIN_7
#define P8_GPIO_Port GPIOE
#define P7_Pin GPIO_PIN_8
#define P7_GPIO_Port GPIOE
#define P6_Pin GPIO_PIN_9
#define P6_GPIO_Port GPIOE
#define P5_Pin GPIO_PIN_10
#define P5_GPIO_Port GPIOE
#define P4_Pin GPIO_PIN_11
#define P4_GPIO_Port GPIOE
#define P3_Pin GPIO_PIN_12
#define P3_GPIO_Port GPIOE
#define P2_Pin GPIO_PIN_13
#define P2_GPIO_Port GPIOE
#define P1_Pin GPIO_PIN_14
#define P1_GPIO_Port GPIOE
#define P0_Pin GPIO_PIN_15
#define P0_GPIO_Port GPIOE
#define SPI2_CS_Pin GPIO_PIN_12
#define SPI2_CS_GPIO_Port GPIOB
#define BTN7_Pin GPIO_PIN_8
#define BTN7_GPIO_Port GPIOD
#define BTN7_EXTI_IRQn EXTI9_5_IRQn
#define BTN6_Pin GPIO_PIN_9
#define BTN6_GPIO_Port GPIOD
#define BTN6_EXTI_IRQn EXTI9_5_IRQn
#define BTN5_Pin GPIO_PIN_10
#define BTN5_GPIO_Port GPIOD
#define BTN5_EXTI_IRQn EXTI15_10_IRQn
#define BTN4_Pin GPIO_PIN_11
#define BTN4_GPIO_Port GPIOD
#define BTN4_EXTI_IRQn EXTI15_10_IRQn
#define PWM_Pin GPIO_PIN_12
#define PWM_GPIO_Port GPIOD
#define BUZ_Pin GPIO_PIN_13
#define BUZ_GPIO_Port GPIOD
#define BTN3_Pin GPIO_PIN_14
#define BTN3_GPIO_Port GPIOD
#define BTN3_EXTI_IRQn EXTI15_10_IRQn
#define BTN2_Pin GPIO_PIN_15
#define BTN2_GPIO_Port GPIOD
#define BTN2_EXTI_IRQn EXTI15_10_IRQn
#define BTN1_Pin GPIO_PIN_2
#define BTN1_GPIO_Port GPIOG
#define BTN1_EXTI_IRQn EXTI2_IRQn
#define BTN0_Pin GPIO_PIN_3
#define BTN0_GPIO_Port GPIOG
#define BTN0_EXTI_IRQn EXTI3_IRQn
#define SW7_Pin GPIO_PIN_4
#define SW7_GPIO_Port GPIOG
#define SW6_Pin GPIO_PIN_5
#define SW6_GPIO_Port GPIOG
#define SW5_Pin GPIO_PIN_6
#define SW5_GPIO_Port GPIOG
#define SW4_Pin GPIO_PIN_6
#define SW4_GPIO_Port GPIOC
#define SW3_Pin GPIO_PIN_7
#define SW3_GPIO_Port GPIOC
#define SW2_Pin GPIO_PIN_8
#define SW2_GPIO_Port GPIOC
#define SW1_Pin GPIO_PIN_9
#define SW1_GPIO_Port GPIOC
#define SW0_Pin GPIO_PIN_9
#define SW0_GPIO_Port GPIOA
#define LED0_Pin GPIO_PIN_10
#define LED0_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_10
#define LED2_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_11
#define LED3_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_12
#define LED4_GPIO_Port GPIOC
#define LED5_Pin GPIO_PIN_0
#define LED5_GPIO_Port GPIOD
#define LED6_Pin GPIO_PIN_1
#define LED6_GPIO_Port GPIOD
#define LED7_Pin GPIO_PIN_2
#define LED7_GPIO_Port GPIOD
#define TFT_A0_Pin GPIO_PIN_3
#define TFT_A0_GPIO_Port GPIOD
#define CUR_R_Pin GPIO_PIN_4
#define CUR_R_GPIO_Port GPIOD
#define CUR_R_EXTI_IRQn EXTI4_IRQn
#define CUR_D_Pin GPIO_PIN_5
#define CUR_D_GPIO_Port GPIOD
#define CUR_D_EXTI_IRQn EXTI9_5_IRQn
#define CUR_OK_Pin GPIO_PIN_6
#define CUR_OK_GPIO_Port GPIOD
#define CUR_OK_EXTI_IRQn EXTI9_5_IRQn
#define CUR_L_Pin GPIO_PIN_7
#define CUR_L_GPIO_Port GPIOD
#define CUR_L_EXTI_IRQn EXTI9_5_IRQn
#define TFT_SCK_Pin GPIO_PIN_9
#define TFT_SCK_GPIO_Port GPIOG
#define TFT_RST_Pin GPIO_PIN_10
#define TFT_RST_GPIO_Port GPIOG
#define TFT_MOSI_Pin GPIO_PIN_11
#define TFT_MOSI_GPIO_Port GPIOG
#define CUR_U_Pin GPIO_PIN_12
#define CUR_U_GPIO_Port GPIOG
#define CUR_U_EXTI_IRQn EXTI15_10_IRQn
#define TIB_SPI_CS_Pin GPIO_PIN_15
#define TIB_SPI_CS_GPIO_Port GPIOG
#define TFT_CS_Pin GPIO_PIN_3
#define TFT_CS_GPIO_Port GPIOH
#define INT_Pin GPIO_PIN_0
#define INT_GPIO_Port GPIOE
#define INT_EXTI_IRQn EXTI0_IRQn
#define O3_Pin GPIO_PIN_1
#define O3_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
