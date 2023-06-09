/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define Current_measurement_Pin GPIO_PIN_0
#define Current_measurement_GPIO_Port GPIOA
#define Upper_Voltage_Interrupt_Pin GPIO_PIN_2
#define Upper_Voltage_Interrupt_GPIO_Port GPIOA
#define Upper_Voltage_Interrupt_EXTI_IRQn EXTI2_IRQn
#define Lower_Voltage_Interrupt_Pin GPIO_PIN_3
#define Lower_Voltage_Interrupt_GPIO_Port GPIOA
#define Lower_Voltage_Interrupt_EXTI_IRQn EXTI3_IRQn
#define Voltage_Measurement_Pin GPIO_PIN_5
#define Voltage_Measurement_GPIO_Port GPIOA
#define Firing_Pin_Pin GPIO_PIN_8
#define Firing_Pin_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
