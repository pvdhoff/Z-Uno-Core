#include "ZUNO_OLED_FONT_NUMB40.h"

// Defines minimal font for gothic numbers, size of symbol is 24x40 pixels
char * zuno_font_numbers40 = 
"\x18\x05\x2d" // Header: symbol_size_x(in pixels),symbol_size_y(in rows, 8-pixel blocks), the offset of the first symbol
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x70\xf8\xfc\xfe\xfe\xfc\xf8\x70\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x03\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xc0\xc0\xc0\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\x0f\x1f\x3f\x3f\x1f\x0f\x06\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x38\x7c\xfe\xff\xff\xfe\x7c\x38\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x80\xc0\xe0\xf0\xf8\xf8\xf8\xf0\xf0\xe0\xc0\x80\x00\x00\x00\x00\x00\x00\x00\x00\xc0\xf0\xfc\xfe\x3f\x07\x01\x03\x03\x07\x0f\x1f\x3f\xff\xff\xff\xff\xfc\xf0\x00\x00\x00\x00\xfc\xff\xff\xff\xff\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\xff\xff\xff\xff\x3f\x00\x00\x00\x00\x0f\x3f\xff\xff\xff\xff\xfc\xf8\xf0\xe0\xe0\xc0\x80\xe0\xf8\xff\x3f\x0f\x03\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x07\x07\x0f\x1f\x1f\x1f\x0f\x07\x03\x01\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x80\xc0\xe0\xf0\xf0\xe0\xc0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02\x07\x07\x07\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\x00\x80\x80\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\x07\x0f\x1f\x3f\x3f\x1f\x0f\x07\x03\x01\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x80\xc0\xe0\xf0\xf8\xf8\xf0\xf0\xe0\xc0\x80\x80\x00\x00\x00\x00\x00\x00\x00\x00\x08\x1c\x3e\x7f\x7f\x3f\x1f\x0f\x07\x03\x03\x01\x83\xff\xff\xff\xff\xfe\xfe\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xc0\xe0\xf8\xfc\xff\xff\x7f\x3f\x1f\x07\x01\x00\x00\x00\x00\x00\x00\x80\xe0\xf0\xf8\xfe\xdf\xef\xef\xe7\xe3\xe1\xe1\xe0\xe0\xc0\xc0\xc0\xc0\x80\x00\x00\x00\x00\x1e\x1f\x0f\x0f\x0f\x07\x07\x07\x07\x07\x07\x07\x0f\x0f\x1f\x1f\x0f\x07\x03\x00\x00\x00"
"\x00\x00\x00\x00\x80\xc0\xe0\xe0\xf0\xf8\xf8\xf8\xf0\xf0\xe0\xe0\xc0\xc0\x80\x80\x00\x00\x00\x00\x00\x00\x00\x03\x07\x0f\x1f\x0f\x07\x03\x01\x81\xc0\xf0\xff\xff\xff\xff\xff\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0e\x0e\x0e\x0f\x0f\x0f\x1f\x3f\xff\xff\xff\xf9\xf0\xe0\xc0\x00\x00\x00\x00\x18\x3c\x7e\xff\xff\xfe\xfc\xf8\xf0\xe0\xc0\x80\x00\xc1\xff\xff\xff\xff\xff\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x07\x0f\x0f\x0f\x0f\x07\x07\x07\x03\x03\x01\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xe0\xf8\xf8\xf8\xf0\xe0\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xc0\xe0\xf8\x3c\x1f\x07\x03\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf8\xfc\xff\xe7\xe3\xe0\xe0\xe0\xe0\xe0\xff\xff\xff\xff\xff\xe0\xe0\xe0\xe0\xe0\x00\x00\x00\x00\x03\x03\x03\x03\x03\x03\x03\x03\x03\xc3\xff\xff\xff\xff\xff\xc3\x83\xc3\xc3\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x03\x07\x0f\x0f\x0f\x07\x03\x01\x01\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\x78\x10\x00\x00\x00\x00\x00\x00\x00\x00\x80\xff\xff\x07\x01\x81\xc1\xc1\xe1\xf1\xe1\xe1\xc1\x81\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x3f\x3f\x1f\x0e\x07\x07\x07\x07\x0f\x1f\x3f\xff\xff\xff\xff\xfe\xf8\x00\x00\x00\x00\x00\x60\xf0\xfc\xfc\xfc\xf8\xf0\xf0\xe0\xc0\xc0\x80\x80\xe0\xff\xff\x7f\x3f\x07\x00\x00\x00\x00\x00\x00\x00\x01\x01\x03\x07\x07\x0f\x0f\x0f\x0f\x07\x07\x03\x01\x01\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x80\xc0\xe0\xf0\xf8\xf8\xf8\xf0\xf0\xe0\xc0\xc0\x80\x00\x00\x00\x00\x00\x00\x00\xe0\xf8\xfc\xfe\x7f\x0f\x01\x01\x03\x83\x87\xcf\xcf\xdf\x8f\x07\x01\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xb8\x1c\x1e\x0e\x07\x0f\x1f\x3f\x7f\xff\xff\xff\xfe\xf8\x00\x00\x00\x00\x00\x0f\x3f\xff\xff\xff\xff\xfc\xf8\xf0\xe0\xc0\xc0\x80\xe0\xff\xff\x3f\x1f\x07\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x07\x07\x0f\x0f\x0f\x0f\x07\x03\x03\x01\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\xc0\xf0\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\x78\x38\x00\x00\x00\x00\x18\x1e\x1f\x07\x03\x03\x01\x01\x01\x81\xc1\xf1\xf9\xfd\x3f\x0f\x03\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xf0\xfc\xfe\xff\xff\x3f\x07\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe0\xfe\xff\xff\xff\xff\xff\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0f\x0f\x0f\x07\x07\x07\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x80\xe0\xf0\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf0\xe0\xc0\x80\x00\x00\x00\x00\x00\x00\xf0\xfc\xff\xff\xe7\xc1\xc1\x81\x81\x81\x81\x83\xc3\xff\xff\x7f\x3f\x0f\x00\x00\x00\x00\x00\x00\x03\xcf\xff\xff\x7f\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x7f\x7f\xff\xff\xfe\xf8\xe0\x00\x00\x00\x00\x00\xff\xff\xff\xff\xf8\xf0\xe0\xe0\xc0\xc0\xc0\xc0\xc0\xe0\xe0\xfb\x7f\x1f\x07\x00\x00\x00\x00\x00\x00\x03\x07\x07\x0f\x0f\x0f\x0f\x1f\x1f\x0f\x0f\x07\x03\x01\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x80\xc0\xe0\xf0\xf0\xf8\xf8\xf8\xf0\xe0\xe0\xc0\x80\x00\x00\x00\x00\x00\x00\x00\xc0\xf8\xfe\xff\xff\x87\x01\x01\x01\x03\x07\x0f\x1f\x7f\xff\xff\xff\xfe\xfc\xe0\x00\x00\x00\x00\x03\x1f\x7f\xff\xff\xff\xfe\xfc\xf8\xf0\x70\x38\x3c\x1e\xcf\xff\xff\xff\xff\x3f\x00\x00\x00\x00\x00\x00\xe0\xf0\xf9\xfd\xfb\xf1\xf0\xe0\xc0\xc0\xe0\xfc\xff\x7f\x1f\x0f\x01\x00\x00\x00\x00\x00\x00\x00\x00\x01\x03\x03\x07\x07\x0f\x0f\x0f\x07\x03\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00";