#pragma once
#include <stdint.h>
#include <avr/pgmspace.h>

const unsigned char PROGMEM mapTiles[] =
{
// frame 0: sky tile
8, 8,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// frame 1: ground tile
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 

// frame 2: ground left
0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 

// frame 3: ground right
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 

// frame 4: tube
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 

// frame 5: cap
0xff, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xff, 

// frame 6: left wall
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// frame 7: right wall
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 

// frame 8: pixel both
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 

// frame 9: pixel left
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

// frame 10: pixel right
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 

// frame 11: left wall right pixel
0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 

// frame 12: right wall left pixel
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
};

const unsigned char PROGMEM playerSprite[] =
{
// frame 0: player right
8, 8,
0x7e, 0xc3, 0x81, 0x89, 0x81, 0x89, 0xc3, 0x7e, 

// frame 1: player left
0x7e, 0xc3, 0x89, 0x81, 0x89, 0x81, 0xc3, 0x7e, 
};
