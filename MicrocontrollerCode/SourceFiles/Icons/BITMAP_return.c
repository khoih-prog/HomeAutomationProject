/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.32.                      *
*        Compiled Oct  8 2015, 11:58:22                              *
*                                                                    *
*        (c) 1998 - 2015 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: BITMAP_return                                         *
* Dimensions:  48 * 48                                               *
* NumColors:   24bpp: 16777216                                       *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmBITMAP_return;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colorsreturn[] = {
  0xFFFFFF, 0xF4A903, 0xFCEBC5, 0xF5AD10,
  0xF9D481, 0xFAD481, 0xFAD687, 0xFAD788
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _Palreturn = {
  8,  // Number of entries
  1,  // Has transparency
  &_Colorsreturn[0]
};

static GUI_CONST_STORAGE unsigned char _acreturn[] = {
  /* RLE: 407 Pixels @ 000,000 */ 254, 0x00, 153, 0x00,
  /* ABS: 002 Pixels @ 023,008 */ 0, 2, 0x02, 0x07,
  /* RLE: 045 Pixels @ 025,008 */ 45, 0x00,
  /* ABS: 004 Pixels @ 022,009 */ 0, 4, 0x02, 0x03, 0x01, 0x05,
  /* RLE: 043 Pixels @ 026,009 */ 43, 0x00,
  /* ABS: 006 Pixels @ 021,010 */ 0, 6, 0x02, 0x03, 0x01, 0x01, 0x01, 0x05,
  /* RLE: 041 Pixels @ 027,010 */ 41, 0x00,
  /* ABS: 002 Pixels @ 020,011 */ 0, 2, 0x02, 0x03,
  /* RLE: 005 Pixels @ 022,011 */ 5, 0x01,
  /* RLE: 001 Pixels @ 027,011 */ 1, 0x05,
  /* RLE: 039 Pixels @ 028,011 */ 39, 0x00,
  /* ABS: 002 Pixels @ 019,012 */ 0, 2, 0x02, 0x03,
  /* RLE: 007 Pixels @ 021,012 */ 7, 0x01,
  /* RLE: 001 Pixels @ 028,012 */ 1, 0x05,
  /* RLE: 037 Pixels @ 029,012 */ 37, 0x00,
  /* ABS: 002 Pixels @ 018,013 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 020,013 */ 8, 0x01,
  /* RLE: 001 Pixels @ 028,013 */ 1, 0x04,
  /* RLE: 036 Pixels @ 029,013 */ 36, 0x00,
  /* ABS: 002 Pixels @ 017,014 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 019,014 */ 8, 0x01,
  /* RLE: 001 Pixels @ 027,014 */ 1, 0x04,
  /* RLE: 036 Pixels @ 028,014 */ 36, 0x00,
  /* ABS: 002 Pixels @ 016,015 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 018,015 */ 8, 0x01,
  /* RLE: 001 Pixels @ 026,015 */ 1, 0x04,
  /* RLE: 036 Pixels @ 027,015 */ 36, 0x00,
  /* ABS: 002 Pixels @ 015,016 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 017,016 */ 8, 0x01,
  /* RLE: 001 Pixels @ 025,016 */ 1, 0x04,
  /* RLE: 036 Pixels @ 026,016 */ 36, 0x00,
  /* ABS: 002 Pixels @ 014,017 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 016,017 */ 8, 0x01,
  /* RLE: 001 Pixels @ 024,017 */ 1, 0x04,
  /* RLE: 036 Pixels @ 025,017 */ 36, 0x00,
  /* ABS: 002 Pixels @ 013,018 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 015,018 */ 8, 0x01,
  /* RLE: 001 Pixels @ 023,018 */ 1, 0x04,
  /* RLE: 036 Pixels @ 024,018 */ 36, 0x00,
  /* ABS: 002 Pixels @ 012,019 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 014,019 */ 8, 0x01,
  /* RLE: 001 Pixels @ 022,019 */ 1, 0x04,
  /* RLE: 036 Pixels @ 023,019 */ 36, 0x00,
  /* ABS: 002 Pixels @ 011,020 */ 0, 2, 0x02, 0x03,
  /* RLE: 027 Pixels @ 013,020 */ 27, 0x01,
  /* RLE: 018 Pixels @ 040,020 */ 18, 0x00,
  /* ABS: 002 Pixels @ 010,021 */ 0, 2, 0x02, 0x03,
  /* RLE: 028 Pixels @ 012,021 */ 28, 0x01,
  /* RLE: 017 Pixels @ 040,021 */ 17, 0x00,
  /* ABS: 002 Pixels @ 009,022 */ 0, 2, 0x02, 0x03,
  /* RLE: 029 Pixels @ 011,022 */ 29, 0x01,
  /* RLE: 016 Pixels @ 040,022 */ 16, 0x00,
  /* ABS: 002 Pixels @ 008,023 */ 0, 2, 0x02, 0x03,
  /* RLE: 030 Pixels @ 010,023 */ 30, 0x01,
  /* RLE: 016 Pixels @ 040,023 */ 16, 0x00,
  /* ABS: 002 Pixels @ 008,024 */ 0, 2, 0x02, 0x03,
  /* RLE: 030 Pixels @ 010,024 */ 30, 0x01,
  /* RLE: 017 Pixels @ 040,024 */ 17, 0x00,
  /* ABS: 002 Pixels @ 009,025 */ 0, 2, 0x02, 0x03,
  /* RLE: 029 Pixels @ 011,025 */ 29, 0x01,
  /* RLE: 018 Pixels @ 040,025 */ 18, 0x00,
  /* ABS: 002 Pixels @ 010,026 */ 0, 2, 0x02, 0x03,
  /* RLE: 028 Pixels @ 012,026 */ 28, 0x01,
  /* RLE: 019 Pixels @ 040,026 */ 19, 0x00,
  /* ABS: 002 Pixels @ 011,027 */ 0, 2, 0x02, 0x03,
  /* RLE: 027 Pixels @ 013,027 */ 27, 0x01,
  /* RLE: 020 Pixels @ 040,027 */ 20, 0x00,
  /* ABS: 002 Pixels @ 012,028 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 014,028 */ 8, 0x01,
  /* RLE: 001 Pixels @ 022,028 */ 1, 0x05,
  /* RLE: 038 Pixels @ 023,028 */ 38, 0x00,
  /* ABS: 002 Pixels @ 013,029 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 015,029 */ 8, 0x01,
  /* RLE: 001 Pixels @ 023,029 */ 1, 0x05,
  /* RLE: 038 Pixels @ 024,029 */ 38, 0x00,
  /* ABS: 002 Pixels @ 014,030 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 016,030 */ 8, 0x01,
  /* RLE: 001 Pixels @ 024,030 */ 1, 0x05,
  /* RLE: 038 Pixels @ 025,030 */ 38, 0x00,
  /* ABS: 002 Pixels @ 015,031 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 017,031 */ 8, 0x01,
  /* RLE: 001 Pixels @ 025,031 */ 1, 0x05,
  /* RLE: 038 Pixels @ 026,031 */ 38, 0x00,
  /* ABS: 002 Pixels @ 016,032 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 018,032 */ 8, 0x01,
  /* RLE: 001 Pixels @ 026,032 */ 1, 0x05,
  /* RLE: 038 Pixels @ 027,032 */ 38, 0x00,
  /* ABS: 002 Pixels @ 017,033 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 019,033 */ 8, 0x01,
  /* RLE: 001 Pixels @ 027,033 */ 1, 0x05,
  /* RLE: 038 Pixels @ 028,033 */ 38, 0x00,
  /* ABS: 002 Pixels @ 018,034 */ 0, 2, 0x02, 0x03,
  /* RLE: 008 Pixels @ 020,034 */ 8, 0x01,
  /* RLE: 001 Pixels @ 028,034 */ 1, 0x05,
  /* RLE: 038 Pixels @ 029,034 */ 38, 0x00,
  /* ABS: 002 Pixels @ 019,035 */ 0, 2, 0x02, 0x03,
  /* RLE: 007 Pixels @ 021,035 */ 7, 0x01,
  /* RLE: 001 Pixels @ 028,035 */ 1, 0x04,
  /* RLE: 039 Pixels @ 029,035 */ 39, 0x00,
  /* ABS: 002 Pixels @ 020,036 */ 0, 2, 0x02, 0x03,
  /* RLE: 005 Pixels @ 022,036 */ 5, 0x01,
  /* RLE: 001 Pixels @ 027,036 */ 1, 0x04,
  /* RLE: 041 Pixels @ 028,036 */ 41, 0x00,
  /* ABS: 006 Pixels @ 021,037 */ 0, 6, 0x02, 0x03, 0x01, 0x01, 0x01, 0x04,
  /* RLE: 043 Pixels @ 027,037 */ 43, 0x00,
  /* ABS: 004 Pixels @ 022,038 */ 0, 4, 0x02, 0x03, 0x01, 0x04,
  /* RLE: 045 Pixels @ 026,038 */ 45, 0x00,
  /* ABS: 002 Pixels @ 023,039 */ 0, 2, 0x02, 0x06,
  /* RLE: 407 Pixels @ 025,039 */ 254, 0x00, 153, 0x00,
  0
};  // 298 bytes for 2304 pixels

GUI_CONST_STORAGE GUI_BITMAP bmBITMAP_return = { 48, // xSize
		48, // ySize
		48, // BytesPerLine
		GUI_COMPRESS_RLE8, // BitsPerPixel
		_acreturn, // Pointer to picture data (indices)
		&_Palreturn, // Pointer to palette
		GUI_DRAW_RLE8
};

/*************************** End of file ****************************/
