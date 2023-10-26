//int calclate_X(int minute)
//{
//	int centerX = 65;
//	int centerY = 81;
//	int x1 = 65;  // �?iểm bắt đầu x
//	int y1 = 50;
////	int y2 = centerY;
//	float angle = minute *pi/180;
//
//	  int newX1 = centerX + (x1 - centerX) * cos(angle) - (y1 - centerY) * sin(angle);
//	  return newX1;
//}
//
//int calclate_Y(int minute)
//{
//	int centerX = 65;
//	int centerY = 81;
//	int x1 = 65;  // �?iểm bắt đầu x
//	int y1 = 50;
//	float angle = minute *pi/180;
//
//	  int newY1 = centerY + (x1 - centerX) * sin(angle) + (y1 - centerY) * cos(angle);
////	  int newY2 = centerY + (x2 - centerX) * sin(angle) + (y2 - centerY) * cos(angle);
//	  return newY1;
//}
//void inhinhanh()
//{
//
////	ST7735_DrawImage(0, 0, 128, 160, (uint8_t*)gImage_image);
////	ST7735_FillScreen(ST7735_BLACK);
////	HAL_Delay(1000);
////	drawLine(65, 81, 65, 40, ST7735_RED);
////	fillCircle(65, 81, 55, ST7735_BLUE);
//	for(int i=0; i<360; i+=30)
//	{
//
////		drawLine(65, 81, calclate_X((i-1)), calclate_Y((i-1)), ST7735_BLUE);
//		drawLine(65, 81, calclate_X(i), calclate_Y(i), ST7735_RED);
//		HAL_Delay(1000);
//		drawLine(65, 81, calclate_X(i), calclate_Y(i), ST7735_BLUE);
////		x_2 = x_1;
////		x_1 = calclate_X(i,x_1,y_1);
////		y_1 = calclate_Y(i,x_2,y_1);
//	}
//	HAL_Delay(1000);
////	drawLine(65, 81, 24, 81, ST7735_BLUE);
////	drawLine(65, 81, 65, 40, ST7735_RED);
////	HAL_Delay(1000);
////
////	drawLine(65, 81, 65, 40, ST7735_BLUE);
////	drawLine(65, 81, 106, 81, ST7735_RED);
////	HAL_Delay(1000);
////
////	drawLine(65, 81, 106, 81, ST7735_BLUE);
////	drawLine(65, 81, 65, 122, ST7735_RED);
////	HAL_Delay(1000);
////
////	drawLine(65, 81, 65, 122, ST7735_BLUE);
////	drawLine(65, 81, 24, 81, ST7735_RED);
////	HAL_Delay(1000);
//
//	ST7735_DrawImage(0, 0, 128, 160, (uint8_t*)gImage_pikachu);
//}

int main()
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
  MX_SPI1_Init();
  MX_SPI2_Init();
  MX_FATFS_Init();
  /* USER CODE BEGIN 2 */
  ST7735_Init();
  HAL_Delay(500);
//  ST7735_DrawImage(0, 0, 128, 160, (uint8_t*)gImage_pikachu);
  ST7735_FillScreen(ST7735_BLACK);
  sd_read();
//  HAL_Delay(500);
//  ST7735_DrawImage(0, 0, 128, 160, (uint8_t*)gImage_vangogh);

//  fillCircle(65, 81, 55, ST7735_BLUE);
//  drawCircle(65, 81, 55, ST7735_BLUE);
//  ST7735_WriteString(58, 32, "12", Font_7x10, ST7735_WHITE, ST7735_BLUE);
//  ST7735_WriteString(106, 76, "3", Font_7x10, ST7735_WHITE, ST7735_BLUE);
//  ST7735_WriteString(61, 125, "6", Font_7x10, ST7735_WHITE, ST7735_BLUE);
//  ST7735_WriteString(19, 76, "9", Font_7x10, ST7735_WHITE, ST7735_BLUE);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
//	  y0_image =0;
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}
