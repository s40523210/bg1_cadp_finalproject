#include "U8glib.h"
 
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_DEV_0|U8G_I2C_OPT_FAST); //設定LCD面板，根據面板尺寸設定
int i=0;
 
void setup(void) {
  u8g.setFont(u8g_font_5x8); // font instellen.
  pinMode(8, INPUT);
}
 
void loop(void) {
  if(digitalRead(8)){
    i++;
  }
  u8g.firstPage();  
  do {
  u8g.setFont(u8g_font_unifont);
  u8g.setPrintPos(0, 20); //設定顯示位置
    u8g.print(i);
    } while( u8g.nextPage() );
  delay(100); // rebuild the picture after some delay
}
