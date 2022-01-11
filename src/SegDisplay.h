#ifndef SEGDISPLAY_H
#define SEGDISPLAY_H

#include <mbed.h>
//Allow Seg1 & Seg2 to be manipulated by external files
extern BusOut Seg1; 
extern BusOut Seg2;

void SegInit(void);
int SegConvert(char SegValue);
#endif