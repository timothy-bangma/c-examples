#include <stdio.h>
#include "escapes.h"

int main(void) {
    setupConsole();
    puts("\x1b[31m\x1b[44mHello, World");
    restoreConsole();
}
