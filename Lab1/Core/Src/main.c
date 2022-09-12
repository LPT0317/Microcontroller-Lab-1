/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  /* function to turn led a, b, c, d, e, f, g on 7segment led */
  void turn7SegLed(int a, int b, int c, int d, int e, int f, int g) {
	  if(a == 0) HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	  if(b == 0) HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	  if(c == 0) HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	  if(d == 0) HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	  if(e == 0) HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	  if(f == 0) HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	  if(g == 0) HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	  else HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
  }
  void turn7SegLed1(int a, int b, int c, int d, int e, int f, int g) {
  	  if(a == 0) HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, GPIO_PIN_SET);
  	  if(b == 0) HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, GPIO_PIN_SET);
  	  if(c == 0) HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, GPIO_PIN_SET);
  	  if(d == 0) HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, GPIO_PIN_SET);
  	  if(e == 0) HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, GPIO_PIN_SET);
  	  if(f == 0) HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, GPIO_PIN_SET);
  	  if(g == 0) HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_RESET);
  	  else HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, GPIO_PIN_SET);
    }
  void display7SEG(int num, int type) {
	  if (type == 0) {
		  if(num == 0) turn7SegLed(0, 0, 0, 0, 0, 0, 1);
		  if(num == 1) turn7SegLed(1, 0, 0, 1, 1, 1, 1);
		  if(num == 2) turn7SegLed(0, 0, 1, 0, 0, 1, 0);
		  if(num == 3) turn7SegLed(0, 0, 0, 0, 1, 1, 0);
		  if(num == 4) turn7SegLed(1, 0, 0, 1, 1, 0, 0);
		  if(num == 5) turn7SegLed(0, 1, 0, 0, 1, 0, 0);
		  if(num == 6) turn7SegLed(0, 1, 0, 0, 0, 0, 0);
		  if(num == 7) turn7SegLed(0, 0, 0, 1, 1, 1, 1);
		  if(num == 8) turn7SegLed(0, 0, 0, 0, 0, 0, 0);
		  if(num == 9) turn7SegLed(0, 0, 0, 0, 1, 0, 0);
	  }
	  else {
		  if(num == 0) turn7SegLed1(0, 0, 0, 0, 0, 0, 1);
		  if(num == 1) turn7SegLed1(1, 0, 0, 1, 1, 1, 1);
		  if(num == 2) turn7SegLed1(0, 0, 1, 0, 0, 1, 0);
		  if(num == 3) turn7SegLed1(0, 0, 0, 0, 1, 1, 0);
		  if(num == 4) turn7SegLed1(1, 0, 0, 1, 1, 0, 0);
		  if(num == 5) turn7SegLed1(0, 1, 0, 0, 1, 0, 0);
		  if(num == 6) turn7SegLed1(0, 1, 0, 0, 0, 0, 0);
		  if(num == 7) turn7SegLed1(0, 0, 0, 1, 1, 1, 1);
		  if(num == 8) turn7SegLed1(0, 0, 0, 0, 0, 0, 0);
		  if(num == 9) turn7SegLed1(0, 0, 0, 0, 1, 0, 0);
	  }
  }
  /* set 2 way north and south is red */
  int time = 5;
  /* set 2 way east and west is green */
  int time1 = 3;
  /* set 2 traffic light status:
   * 1: red
   * 2: yellow
   * 3: green*/
  int stt = 1;
  int stt1 = 3;
  /* set LED on north and south way */
  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, GPIO_PIN_SET);
  /* set LED on east and west way */
  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, GPIO_PIN_RESET);
  while (1)
  {
    /* USER CODE END WHILE */
	  display7SEG(time, 0);
	  display7SEG(time1, 1);
	  HAL_Delay(1000);
	  time--;
	  time1--;
	  if(time == 0) {
		  if(stt == 1) {
			  stt = 3;
			  time = 3;
			  HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			  HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		  }
		  else if(stt == 2) {
			  stt = 1;
			  time = 5;
			  HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			  HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
		  }
		  else {
			  stt = 2;
			  time = 2;
			  HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
			  HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
		  }
	  }
	  if(time1 == 0) {
		  if(stt1 == 1) {
			  stt1 = 3;
			  time1 = 3;
			  HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
			  HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
		  }
		  else if(stt1 == 2) {
			  stt1 = 1;
			  time1 = 5;
			  HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
			  HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
		  }
		  else {
			  stt1 = 2;
			  time1 = 2;
			  HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);
			  HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);
		  }
	  }
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
                          |YELLOW2_Pin|GREEN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a1_Pin
                          |b1_Pin|c1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : RED1_Pin YELLOW1_Pin GREEN1_Pin RED2_Pin
                           YELLOW2_Pin GREEN2_Pin */
  GPIO_InitStruct.Pin = RED1_Pin|YELLOW1_Pin|GREEN1_Pin|RED2_Pin
                          |YELLOW2_Pin|GREEN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d1_Pin
                           e1_Pin f1_Pin g1_Pin d_Pin
                           e_Pin f_Pin g_Pin a1_Pin
                           b1_Pin c1_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a1_Pin
                          |b1_Pin|c1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
