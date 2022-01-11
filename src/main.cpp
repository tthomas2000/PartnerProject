#include <mbed.h>
#include "HostIO.h"
#include "SegDisplay.h"


int main() {
  char data1, data2;
  SegInit(); //Initializes the 7-Segment Display
  HostInit(); //Initializes communication w/ the host computer
  
  while(1) {
    data2 = GetKeyInput();
    Seg2 = SegConvert(data2);
    
    data1 = GetKeyInput();
    Seg1 = SegConvert(data1);

    printf("  "); //Display spaces on host after recieving 2 digits
  }
}