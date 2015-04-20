/*******************************************************************************
  nixtris.c
  author: Johnny Starr
  ____________________________________________________________________________


              ███╗   ██╗██╗██╗  ██╗████████╗██████╗ ██╗███████╗
              ████╗  ██║██║╚██╗██╔╝╚══██╔══╝██╔══██╗██║██╔════╝
              ██╔██╗ ██║██║ ╚███╔╝    ██║   ██████╔╝██║███████╗
              ██║╚██╗██║██║ ██╔██╗    ██║   ██╔══██╗██║╚════██║
              ██║ ╚████║██║██╔╝ ██╗   ██║   ██║  ██║██║███████║
              ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚══════╝
 
  Copyright (C) 2015 Johnny Starr <johnnystarr@gmail.com>
  Distributed under terms of the Apache License 2.0 -- see licence for details

*******************************************************************************/

#include <stdio.h>
#include <time.h>

/* 
 * bitmap of tetris board (16-bits)
 * [00000000,00]xxxxxxx 10 bit wide tetris board
 */
short bmap[20]; 

/*
 * color map of tetris board (8-bits)
 * [0000] left nybble: color
 * [0000] right nybble: texture
 */
char  cmap[20]; 

/*
 * cool ascii textures, capable of expanding to 15 values (4-bits)
 */
const char* textures[] = {
  "░","▒","▓","█"
};

/*
 * All the colors of the rainbow!
 */
const char* colors[] = {
  "\033[0;30m",
  "\033[0;31m",
  "\033[0;32m",
  "\033[0;33m",
  "\033[0;34m",
  "\033[0;35m",
  "\033[0;36m",
  "\033[0;37m",
  "\033[0m", 
};

/*******************************************************************************
  Game Pieces:

  Each piece is encoded as bitpatterns using hexidecimal notation.

*******************************************************************************/

/*
 * I piece, horizontal: ▒▒▒▒
 */
unsigned char IH[] = {
  0x78, 
  0x00
};

/*
 * I piece, vertical: ▒
 *                    ▒
 *                    ▒
 *                    ▒
 */
unsigned char IV[] = {
  0x40, 
  0x40, 
  0x40, 
  0x40,
  0x00
};

/*
 * J piece, horizontal: ▒▒▒
 *                        ▒
 */
unsigned char JH[] = {
  0x70,
  0x08,
  0x00
};

/*
 * J piece, vertical: ▒
 *                    ▒
 *                  ▒▒▒
 */
unsigned char JV[] = {
  0x40,
  0x40,
  0x70
};

/*******************************************************************************
  Prototpes
*******************************************************************************/

void print_logo(void);

/*******************************************************************************
  Main Entry
*******************************************************************************/

int main(void) {

  print_logo();
  return 0;
}

void print_logo(void) {
  printf("%s", colors[2]);
  printf("              ███╗   ██╗██╗██╗  ██╗████████╗██████╗ ██╗███████╗ \n");
  printf("              ████╗  ██║██║╚██╗██╔╝╚══██╔══╝██╔══██╗██║██╔════╝ \n"); 
  printf("              ██╔██╗ ██║██║ ╚███╔╝    ██║   ██████╔╝██║███████╗ \n");
  printf("              ██║╚██╗██║██║ ██╔██╗    ██║   ██╔══██╗██║╚════██║ \n");
  printf("              ██║ ╚████║██║██╔╝ ██╗   ██║   ██║  ██║██║███████║ \n");
  printf("              ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚══════╝ \n");
  printf("\n\n");
  printf("%sCreated By Johnny Starr (c) 2015\n", colors[8]);
}

void test(void) {
  char i,count;

  for(i=0; i < 10; i++) {
    for(count=0; count < 10; count++) {
      short current;
      current = ((bmap[i] >> count) & 0x01);
      if (current) 
        printf("▓%s", colors[2]);
      else
        printf("░%s", colors[6]);
    }
    printf("\n");
  }
}
