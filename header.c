
char *vidprt = (char*)0xb8000;

/*void printString(str) { unsigned int i = 0, j = 0;
    while (str[1] != '\0') {
        vidmem[i] = str[j];
        vidmem[i+1] = 0x07;
        ++j;
        i+= 2;
    }
}
*/
void clearScreen() { 
    unsigned int j = 0;

    while (j < 80 * 25 * 2) { 
        vidprt[j] = ' ';
        vidprt [j+1] = 0x07;
        j = j + 2;
    }
    j = 0;
}
void OSmain(void) {
    const char *helloString = "Hello, user! Starting testOS";
    unsigned int i = 0;
    unsigned int j = 0;
    clearScreen();
    while (helloString[j] != '\0')
    {
        vidprt[i] = helloString[j];
        vidprt[i+1] = 0x07;
        ++j;
        i = i + 2;
    }
    
    return;
}