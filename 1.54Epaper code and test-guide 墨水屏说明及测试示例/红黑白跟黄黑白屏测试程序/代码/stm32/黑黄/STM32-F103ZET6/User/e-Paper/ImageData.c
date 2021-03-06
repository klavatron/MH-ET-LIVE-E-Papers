/*****************************************************************************
* | File      	:   ImageData.c
* | Author      :   MH-ET LIVE
* | Function    :	
*----------------
* |	This version:   V1.0
* | Date        :   2018-10-23
* | Info        :
*
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

******************************************************************************/

#include "ImageData.h"

const unsigned char IMAGE_BLACK[] = {
/* 0X00,0X01,0X98,0X00,0X98,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XC7,0XFE,0X3E,0X3F,0XFF,0XFC,
0X89,0XFF,0XFF,0XF3,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XEF,0XFF,0XBF,
0XBF,0XFF,0XFE,0XDB,0XFF,0XFF,0XFB,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,
0XEF,0XFF,0XBF,0XBF,0XFF,0XFE,0XDB,0XFF,0XFF,0XFB,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFD,0XEF,0X1F,0XBF,0XBF,0X8F,0XFE,0XDB,0X8C,0X63,0X8B,0XDF,0XDF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XEE,0XEF,0XBF,0XBF,0X77,0XFE,0XDB,0X77,0X5B,0X73,
0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X0D,0XF7,0XBF,0XBE,0XFB,0XFE,0XAA,
0XFB,0X3E,0XFB,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XEC,0X07,0XBF,0XBE,
0XFB,0XFE,0XAA,0XFB,0X7E,0XFB,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XED,
0XFF,0XBF,0XBE,0XFB,0XFE,0XAA,0XFB,0X7E,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFD,0XED,0XFF,0XBF,0XBE,0XFB,0XFF,0X76,0XFB,0X7E,0XFB,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFD,0XEE,0XF7,0XBF,0XBF,0X77,0XFF,0X77,0X77,0X7F,0X73,0XDF,
0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XC7,0X0E,0X0E,0X0F,0X8F,0XFF,0X77,0X8C,
0X1F,0X89,0XDF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XE0,0XF8,
0X1F,0X07,0XE0,0XF8,0X3F,0X07,0XC0,0XF8,0X3F,0X07,0XC0,0XF8,0X3F,0X07,0XC0,0XF8,
0X07,0XE0,0XF8,0X1F,0X07,0XE0,0XF8,0X3F,0X07,0XC0,0XF8,0X3F,0X07,0XC0,0XF8,0X3F,
0X07,0XC0,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF1,0XFF,0XFD,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFD,
0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XDF,0XFF,0XFD,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0XDF,0XFF,0XFD,0XFF,0XBF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X18,0X43,0X9D,0X93,0X09,0XF2,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XBB,0X5F,0X6D,0XDB,0XBD,0XED,0X6F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X98,0X43,0X6D,0XDB,
0XBD,0XED,0X6F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XDB,
0XFB,0X6D,0XDB,0XBD,0XED,0X6F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X48,0X43,0X90,0X41,0X88,0XF2,0X26,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,
0XFF,0XFF,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,
0XFF,0XFF,0X7F,0XFF,0XCC,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFD,0XDF,0XFF,0XFF,0XEF,0XFF,0XFF,0XED,0XFE,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XDF,0XFF,0XFF,0XEF,0XFF,0XFF,0XED,0XFE,0XF7,0XFF,0XFF,0XE7,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XC1,0XE4,0X9C,0XC2,0X70,0XE1,0XEB,0X9E,0XE1,
0XCE,0X19,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XD6,0XDA,0X7B,0X6F,0X7B,0X5B,
0XEB,0X6E,0XF7,0XB5,0XB6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XD6,0XC2,0XFC,
0X6F,0X7B,0X67,0XF3,0X6E,0XF7,0XC6,0X70,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,
0XD6,0XDE,0XFB,0X6F,0X7B,0X5F,0XF7,0X6E,0XF7,0XB5,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X31,0XE0,0X7C,0X22,0X31,0X23,0XF7,0X98,0X31,0XC2,0X38,0XE7,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XDD,0XFF,0XFF,0XFF,0XFD,
0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,
0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFF,0XF3,0XFF,0XFF,0XF9,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFE,0X38,
0X30,0X66,0X64,0X63,0X83,0X08,0X31,0XE3,0X27,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFD,0XFD,0XDD,0X5A,0XB7,0X73,0X7B,0XBA,0XEE,0XFD,0XDD,0X9B,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XFD,0XDD,0X5A,0XB7,0X77,0X7B,0XBF,0X8E,0XFD,0XDD,0XBB,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFD,0XDD,0X5A,0XB7,0X77,0X7B,0XBF,0X6E,0XFD,
0XDD,0XBB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XED,0XDD,0X5A,0XB6,0X77,0X7B,
0XBA,0XEE,0XDD,0XDD,0XBB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0E,0X25,0X4A,
0X99,0X22,0X20,0X83,0X06,0X10,0X63,0X11,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XED,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFC,0X7F,0XBF,0XFF,0XFF,0XFF,0XFB,0X7F,0XFF,0XFF,0XFF,0XFF,
0XEB,0XFF,0XFF,0XFF,0XFF,0XFF,0XC4,0X7F,0X7F,0XBF,0XFF,0XFF,0XFF,0XFB,0X7F,0XFF,
0XFF,0XFF,0XFF,0XE2,0X1E,0X49,0XC1,0X9F,0XFF,0XE4,0XFF,0X77,0XFF,0XFF,0XFF,0XFF,
0XF8,0XE6,0X1C,0X93,0XFF,0XFF,0XEB,0X6D,0XA7,0XB5,0XBF,0XFF,0XE4,0XFF,0X77,0XFF,
0XFF,0XFF,0XFF,0XFB,0XDB,0X6B,0X4F,0XFF,0XFF,0XEF,0X6C,0X2F,0XCD,0XBF,0XFF,0XE4,
0X27,0X61,0X3F,0XFF,0XFF,0XFF,0XFB,0XE3,0X68,0X5F,0XFF,0XFF,0XED,0X6D,0XEF,0XBE,
0X7F,0XFF,0XEA,0XB7,0X77,0XB8,0X1F,0XFF,0XFF,0XFB,0XDB,0X6B,0XDF,0XFF,0XFF,0XC0,
0X26,0X07,0XC7,0X7F,0XFF,0XEA,0XB7,0X77,0XB8,0X1F,0XFF,0XFF,0XF1,0XE1,0X1C,0X0F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XBA,0XFF,0XFF,0XEA,0XB7,0X77,0XBF,0XFF,0XFF,0XFF,0XFF,
0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XCA,0X40,0X11,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF6,0X7F,0XFF,0XFF,0XFF,0XE1,0XFF,
0XF7,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0X3F,0XFF,0XFF,0XFF,0XF1,0XF7,0X7F,0XFF,0XFF,
0XFF,0XDD,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,0XBF,0XFE,0XDF,0XFF,0XFF,0XFF,0XFB,0XFF,
0X7F,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XED,0XBF,0XDE,0XFF,0XFF,0XFF,
0XFF,0XFB,0XFF,0X7F,0XFF,0XFF,0XFF,0XE7,0X99,0X26,0X1E,0X1F,0XFF,0XED,0XBF,0XDE,
0XFF,0XFF,0XFF,0XFF,0XFB,0XE7,0X4E,0X7F,0XFF,0XFF,0XFB,0X6D,0X77,0X6D,0XBF,0XFF,
0XE3,0XB9,0X84,0X32,0X48,0X7F,0XFF,0XFB,0XF7,0X5D,0XBF,0XFF,0XFF,0XFD,0X8D,0X77,
0X6E,0X7F,0XFF,0XEF,0XB6,0XDE,0XED,0X3A,0XBF,0XFF,0XFB,0XF7,0X3C,0X3F,0XFF,0XFF,
0XDD,0X6E,0XF7,0X6D,0XFF,0XFF,0XEF,0XB8,0XDE,0XED,0X7A,0XBF,0XFF,0XFB,0XB7,0X5D,
0XFF,0XFF,0XFF,0XC3,0X86,0XE2,0X26,0X3F,0XFF,0XEF,0XB6,0XDE,0XED,0X7A,0XBF,0XFF,
0XF0,0X22,0X6E,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XDF,0XFF,0XC6,0X08,0X44,0X32,
0X3A,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};

const unsigned char IMAGE_YELLOW[]  = {
 /* 0X00,0X01,0X98,0X00,0X98,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0XF8,0X00,0X00,0XE0,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF0,0X88,0X00,0X01,0XF0,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X88,0X00,0X01,0X10,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X88,0X00,0X01,0X10,0X1F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XF8,0X01,0X81,0XF0,
0X18,0X7C,0X21,0XC3,0XC0,0X0F,0X00,0X3F,0X83,0XF0,0X0C,0X3C,0X20,0X07,0XE0,0X70,
0X03,0X80,0XE0,0X18,0X7C,0X21,0XC3,0XC0,0X06,0X00,0X1F,0X83,0XF0,0X0C,0X3C,0X20,
0X03,0XE0,0X50,0X07,0X80,0X40,0X1C,0X7C,0X73,0XE7,0XE7,0XC4,0X73,0X8F,0XCF,0XFE,
0X7E,0X7F,0X73,0XE3,0XE0,0X58,0X05,0X80,0X40,0XFC,0X7C,0X73,0XE7,0XE7,0XF4,0XF3,
0XCF,0XCF,0XFE,0X7E,0X7E,0X73,0XFB,0XE0,0X4C,0X05,0X80,0X7F,0XFC,0X38,0X73,0XE7,
0XE7,0XF4,0XF3,0XCF,0XCF,0XFE,0X7E,0X3E,0X73,0XFB,0XE0,0X4C,0X0D,0X80,0X40,0X1C,
0X38,0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7E,0X3E,0X73,0XCF,0XE0,0X46,0X09,
0X80,0X40,0X1C,0X3A,0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7F,0X3C,0XF3,0XCF,
0XE0,0X42,0X19,0X80,0X40,0X1C,0XBA,0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7F,
0X3C,0XF3,0XCF,0XE0,0X43,0X19,0X80,0X40,0XFC,0X92,0X70,0X04,0X20,0X1F,0XF3,0XFF,
0XCF,0XFE,0X7F,0X99,0XF0,0X0F,0XE0,0X41,0X11,0X80,0X7F,0XFC,0X92,0X70,0X04,0X20,
0X1F,0XF3,0XFF,0XCF,0XFE,0X7F,0X99,0XF0,0X0F,0XE0,0X41,0XB1,0X80,0X40,0X1C,0X92,
0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7F,0X99,0XF3,0XCF,0XE0,0X40,0XE1,0X80,
0X40,0X1C,0XD6,0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7F,0XDB,0XF3,0XCF,0XE0,
0X40,0X61,0X80,0X40,0X1C,0XC6,0X73,0XE7,0XE7,0X9F,0XF3,0XFF,0XCF,0XFE,0X7F,0XC3,
0XF3,0XCF,0XE0,0X40,0X01,0X80,0X4F,0X9C,0XC6,0X73,0XE7,0XE7,0XFF,0XF3,0XFF,0XCF,
0XFE,0X7F,0XC3,0XF3,0XFF,0XE1,0XF0,0X01,0X80,0X48,0X9C,0XC6,0X73,0XE7,0XE7,0XF7,
0XF3,0XFF,0XCF,0XFE,0X7F,0XE7,0XF3,0XFB,0XE1,0X10,0X01,0XFF,0XF8,0X9C,0XC6,0X73,
0XE7,0XE7,0XF7,0XF3,0XFF,0XCF,0XDE,0X7F,0XE7,0XF3,0XFB,0XE1,0X1F,0XFF,0XFF,0XF8,
0XFC,0XEE,0X73,0XE7,0XE7,0XE7,0XF3,0XFF,0XCF,0X9E,0X7F,0XE7,0XF3,0XF3,0XE1,0X10,
0X01,0X80,0X4F,0X98,0X6C,0X21,0XC3,0XC0,0X07,0XC0,0XFF,0X80,0X10,0X0F,0XE7,0XE0,
0X03,0XE1,0XF0,0X01,0X80,0X40,0X18,0X7C,0X21,0XC3,0XC0,0X0F,0XC0,0XFF,0X80,0X30,
0X0F,0XE7,0XE0,0X07,0XE0,0X00,0X01,0X80,0X40,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,0X4F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,0X40,0X1F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,
0X80,0X4F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X01,0X80,0X4F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,0X40,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,0X4F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,0X40,0X1F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0X80,
0X40,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
0X00,0X01,0X80,0X40,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XE0,0X00,0X03,0XC0,0XE0,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X06,0X61,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X06,0X61,0X10,0X1F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X06,0X61,0X10,
0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
0X03,0XC1,0XF0,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFC,0X00,0X01,0X80,0X40,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC7,0X81,0XC3,0XFF,0XFC,0X78,0X1C,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X87,0X81,0X81,0XFF,0XF8,0X78,0X18,0X1F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X9F,0XB9,0XFF,0XFE,0X79,0XFB,0X9F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X9F,0XF9,0XCF,0X3E,
0X79,0XFF,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0X83,
0XF9,0XE6,0X7E,0X78,0X3F,0X9F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XE7,0X81,0XF3,0XF0,0XFE,0X78,0X1F,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE7,0XF9,0XE7,0XF9,0XFE,0X7F,0X9E,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE7,0XB9,0XCF,0XF0,0XFE,0X7B,0X9C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0X81,0X81,0XE6,0X78,0X18,
0X18,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0X87,0X81,
0XCF,0X38,0X18,0X78,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,0XF8,0XCC,0XE6,0X09,0X9F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBB,0XF7,0X6D,
0XE6,0XFD,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFB,0XFF,0X6D,0XCE,0XFD,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XE7,0XFC,0XEB,0XCE,0X1D,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0X6B,0X9E,0XED,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0XFF,0X73,0X9F,0XEE,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBB,0X37,0X77,0X3E,
0XEE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,
0X38,0XF6,0X3F,0X1E,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFC,0X10,0X60,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFD,0XDB,0XBB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFB,0XBB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XFB,0XBB,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X18,0X7B,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XDB,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XDB,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFD,0XDB,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X11,0XE0,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XFC,0X1F,0X03,0XE0,0XFC,0X1F,0X03,0XE0,0XF8,0X1F,
0X07,0XE0,0XF8,0X1F,0X07,0XE0,0XF8,0X1F,0XE0,0XFC,0X1F,0X03,0XE0,0XFC,0X1F,0X03,
0XE0,0XF8,0X1F,0X07,0XE0,0XF8,0X1F,0X07,0XE0,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XF8,0X01,0XFF,0XFF,
0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XF0,
0X00,0XFF,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,
0XFF,0XFF,0XE0,0X00,0X7F,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XE3,0XFF,
0XFF,0X03,0XFF,0XFF,0XFF,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,
0XFF,0XE3,0XFF,0XFF,0X21,0XFF,0XFF,0XFF,0X80,0X00,0X1F,0XFF,0XFF,0XFF,0XF9,0X99,
0X9F,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0X30,0XFF,0XFF,0XFF,0X00,0X60,0X1B,0XFF,0XFF,
0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0X38,0X7F,0XFF,0XFE,0X00,0X70,
0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0X3C,0X7F,0XFF,
0XFE,0X00,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0X80,0X07,
0X00,0X7F,0XFF,0XFE,0X01,0XF8,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE3,0X80,0X07,0X00,0X7F,0XFF,0XFE,0X01,0XF8,0X07,0XFF,0XFF,0XFF,0XE0,0X00,0X07,
0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0X03,0XF0,0X0F,0XFF,0XFF,0XFF,
0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XC3,0XE0,0X0F,
0XFF,0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XFE,
0X67,0XFE,0X0F,0XFF,0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,
0X7F,0XFF,0XF0,0X7F,0XFF,0XF8,0XFF,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,
0X80,0X00,0X3C,0X7F,0XFF,0X00,0X7F,0X8F,0XE0,0X7F,0XFF,0XFF,0XE0,0X00,0X07,0XFF,
0XFF,0XFF,0XE3,0X80,0X00,0X3C,0X7F,0XFF,0X80,0X3F,0X1F,0XC0,0X3F,0XFF,0XC0,0X60,
0X00,0X06,0X03,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XC0,0X3E,0X1F,0X80,0X1F,
0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XC0,0X3E,
0X07,0X80,0X0F,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,
0XFF,0X80,0X1E,0X07,0X80,0X0F,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0XFF,
0XFF,0XFC,0X7F,0XFF,0X00,0X1F,0X8F,0XC0,0X0F,0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,
0XFF,0XE3,0X80,0X00,0X3C,0X7F,0XFF,0X00,0XFF,0X1F,0XE0,0X0F,0XFF,0XC0,0X60,0X00,
0X06,0X03,0XFF,0XFF,0XE3,0X80,0X00,0X3C,0X7F,0XFF,0X01,0XFF,0X3F,0XF0,0X0F,0XFF,
0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0X01,0XFF,0X7F,
0XF8,0X0F,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,
0X03,0XFF,0XFE,0XFC,0X0F,0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,0XFF,0XE3,0XFF,0XFF,
0XFC,0X7F,0XFF,0X03,0XFF,0XFC,0XFC,0X0F,0XFF,0XC0,0X60,0X00,0X06,0X03,0XFF,0XFF,
0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0X00,0X00,0XF8,0X00,0X0F,0XFF,0XFF,0XE0,0X00,0X07,
0XFF,0XFF,0XFF,0XE3,0X80,0X00,0X3C,0X7F,0XFF,0X80,0X00,0XF0,0X00,0X0F,0XFF,0XFF,
0XE0,0X00,0X07,0XFF,0XFF,0XFF,0XE3,0X80,0X00,0X3C,0X7F,0XFF,0XC0,0X00,0XE0,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XE0,
0X00,0XC0,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,
0X7F,0XFF,0XF0,0X00,0XC0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,
0XFF,0XFF,0XFC,0X7F,0XFF,0XF8,0X00,0XE0,0X00,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,
0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XFC,0X00,0XF0,0X01,0XFF,0XFF,0XFF,0XF9,
0X99,0X9F,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFC,0X7F,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,
0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
0XFC,0XFF,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0XFF,
0XFF,0XFF,0XFF,0XFE,0XFF,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,0XFF,0XF8,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF9,0X99,0X9F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
