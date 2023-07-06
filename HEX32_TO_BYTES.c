#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* hexString = "465B5CE8B199B49FAA5F0A2EE238A6BC";
    int len = strlen(hexString) / 2;
    unsigned char* byteData = (unsigned char*)malloc(len);
    for (int i = 0; i < len; i++) {
        int index = i * 2;
        sscanf(&hexString[index], "%2hhx", &byteData[i]);
    }
    for (int i = 0; i < len; i++) {
        printf("%02X ",
        byteData[i]);
    }
    printf("\n");

    // for (int i = 0; i < len; i++) {
        printf("%02X %02X %02X %02X\n %02X %02X %02X %02X \n%02X %02X %02X %02X\n %02X %02X %02X %02X\n %02X %02X %02X %02X\n %02X %02X %02X %02X ",
        byteData[0], byteData[1], byteData[2], byteData[3],
       byteData[4], byteData[5], byteData[6], byteData[7],
       byteData[8], byteData[9], byteData[10], byteData[11],
       byteData[12], byteData[13], byteData[14], byteData[15]);
    // }
    // printf("\n");
    // printf("%ld\n",strlen(byteData));
    // printf("%s\n",byteData);

    free(byteData);
    return 0;
}