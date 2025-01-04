#include "stm32f10x.h"                  // Device header
#include "SSD1306.h"
#include "app.h"
#include "stdlib.h"
#include <stdlib.h>

int main(void)
{
int x1=5;
	int y1=50;
	int y2=50;
	
	SSD1306_Init();
SSD1306_DrawLine(5,60,5,5,SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(5,60,125,60,SSD1306_COLOR_WHITE);
	SSD1306_UpdateScreen();
	
	while(1)
	{
		 int counter=rand()%2;
	SSD1306_DrawPixel(x1,y2,SSD1306_COLOR_WHITE);

		x1++;
  
		if(counter%2==0){
	y2++;
	}
 if(counter%2==1)
	{
	y2--;
	}
 
	SSD1306_GotoXY(64, 5);
		SSD1306_Putc(y2/10%10 + 48, &Font_11x18, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(74, 5);
		SSD1306_Putc(y2%10 + 48, &Font_11x18, SSD1306_COLOR_WHITE);	
		SSD1306_UpdateScreen();
	
	if(x1>=120)
	{
	
	SSD1306_Fill(SSD1306_COLOR_BLACK);
			SSD1306_DrawLine(5,60,5,5,SSD1306_COLOR_WHITE);
	SSD1306_DrawLine(5,60,125,60,SSD1306_COLOR_WHITE);
		SSD1306_UpdateScreen();
		x1=5;
		
}
	}
	
}

