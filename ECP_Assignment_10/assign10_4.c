#include <stdio.h>

unsigned char adjustToEvenParity(unsigned char byte) {

    unsigned char count = 0;
    unsigned char temp = byte;
    
    while (temp) {
        count += temp & 1;
        temp >>= 1;
    }
    
          if (count % 2 == 1) {
        byte |= 0x80; 
    }
    
    return byte;
}


int main() {
    unsigned char byte = 0x5A; 
    
    printf("Original byte: 0x%X\n", byte);
    
    byte = adjustToEvenParity(byte);
    
    printf("Adjusted byte: 0x%X\n", byte);
    
    return 0;
}




































