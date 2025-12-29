#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "veeprom.h"

int main(int argc, char *argv[])
{
    uint16_t addr;
    uint8_t data;

    veeprom_init();

    if (argc < 2) {
        printf("Usage:\n");
        printf("  %s write <addr> <data>\n", argv[0]);
        printf("  %s read <addr>\n", argv[0]);
        printf("  %s erase\n", argv[0]);
        return 0;
    }

    if (!strcmp(argv[1], "write")) {
        addr = strtol(argv[2], NULL, 0);
        data = strtol(argv[3], NULL, 0);
        veeprom_write(addr, data);
        printf("WRITE OK: addr=0x%X data=0x%02X\n", addr, data);
    }
    else if (!strcmp(argv[1], "read")) {
        addr = strtol(argv[2], NULL, 0);
        veeprom_read(addr, &data);
        printf("READ OK: addr=0x%X data=0x%02X\n", addr, data);
    }
    else if (!strcmp(argv[1], "erase")) {
        veeprom_erase();
        printf("EEPROM ERASED\n");
    }
    else {
        printf("Unknown command\n");
    }

    return 0;
}

