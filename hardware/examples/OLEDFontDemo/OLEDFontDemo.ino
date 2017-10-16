// Here we test custom fonts and images on the OLED screen
#include <ZUNO_OLED_I2C.h>
#include <ZUNO_OLED_FONT_NUMB16.h>
// You can use another builtin fonts for numbers..._NUMB24, _NUMB40
#include <ZUNO_OLED_FONT_RUS8.h> // Russian font
#include <ZUNO_OLED_IMG_LOGO.h> // Z-Uno logo

OLED oled;

// You can create your own image for OLED using oled_img_conv.py  srcipt. I located in the folder of OLED library
// Just a Z-Wawe PLUS LOGO
// We created this from bitmap file using this:
// python oled_img_conv.py conv ~/logo/Z-WavePlusProduct.bmp -s "x,64" -d
// -s "x,64" means that we convert size from original to scaled for 64 pixels height
// -d gives your an ASCII output of target image
// and then you can see a string representation 
char * my_image_data=
"\x4f\x08"
"\x7f\x0f\x07\xe3\xf1\xf9\xf9\xf9\xf8\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf8\xf9\xf8\xf9\xf9\xf1\xe3\x07\x0f"
"\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\x7f\x3f\x1f\x0f\x8f\xc7\xc3\xe3\xe3\x71\x71\x31\x39\x38\x38\x38\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00"
"\x00\x00\x00\xff\xff\xff\xff\xff\x1f\x07\x01\xe0\xf8\x7c\x1e\x0f\x87\xc3\xe1\xf0\xf8\xfc\x7c\x3e\x1e\x1e\x1e\x1e\x1f\x1f\x1f\x3f\x7f\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00"
"\x00\x00\x00\xff\xff\xff\xff\xe0\xe0\xe0\xff\xff\xe7\xe0\xe0\xfc\xff\xff\xff\x07\x01\x00\x00\x00\x86\xe6\xf6\xfe\xbe\x8e\x86\x00\x00\x00\x01\x87\xff\xf1\x01\x01\x3f\x01\xc1\x01\x0f\x03\x01\xc1\xfd\x1f\x07\x01\x21\x01\x01\x07\x3f\xf1\x81\x01\x07\x0f\x01\x81\xf1\xfd\xff\x01\x01\x01\x49\x49\xff\xff\xff\xff\xff\x00\x00"
"\x00\x00\x00\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\x7f\xff\xff\xfc\xf8\xf0\xe1\xe1\xe1\xc1\xc1\xc1\xe1\xe0\xe0\xf0\xf8\xfc\xff\xff\x7f\x7f\x7e\x7e\x7e\x7f\x7e\x7e\x7e\x7e\x7f\x7e\x7e\x7e\x7e\x7f\x7f\x7e\x7e\x7e\x7f\x7f\x7e\x7e\x7e\x7e\x7f\x7f\x7f\x7f\x7e\x7e\x7c\x7c\x7c\x7f\x7f\x7f\x7f\x7f\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x01\x03\x03\x07\x07\x07\x07\x07\x07\x07\x07\x07\x03\x03\x01\x00\x00\x00\x00\x00\x00\x80\x80\x80\x80\x00\x00\x00\x00\x80\x80\x00\x00\x00\x00\x00\x80\x80\x00\x00\x80\x80\x00\x00\x00\x00\x80\x80\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\x08\x0f\x07\x00\x00\x00\xff\xff\xc0\xc0\x00\x00\x00\x7f\xff\xc0\xc0\xff\x7f\x00\x00\x00\xc3\xcf\xdc\xf8\x30\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\xfc\xe0\xc0\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xc0\xe0";

void setup() {
  oled.begin();
  oled.clrscr();
}

byte loop_count = 0;
void loop() {
   // clear the screen
  oled.clrscr();
  delay(5);
  if(loop_count %3 == 0)
  {
  	// Set default font
  	oled.setFont(0);
  	oled.gotoXY(0, 0);
  	oled.print("Quick brown fox jumps over a lazy dog!");
	oled.gotoXY(26, 3);
    // Some "digital" font (only to print a numbers)
    oled.setFont(zuno_font_numbers16);
    // Draw Fix point number
    oled.fixPrint(loop_count,1);
    oled.gotoXY(15, 7);
    // A sample of custom regional font, 
    // from where the Z-Uno was born 
    oled.setFont(zuno_font_rus8);
    oled.print("Ghbdtn!");   //  Привет! = Hellow! (in Russian)
  }
  else
  {
  	 // Draw the image
     oled.gotoXY(16, 0);
     oled.invert(false);
     if(loop_count %3 == 1)
     	oled.writeData(my_image_data); 
   	 else
     	oled.writeData(zuno_img_logo); 
     	  
  }
  delay(1000);
  // Some SFX
  oled.invert(true);
  delay(1000);
  oled.invert(false);
 
  loop_count++;
}
