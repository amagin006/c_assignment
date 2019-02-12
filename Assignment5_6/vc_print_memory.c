#include <stdio.h>
#include <memory.h>
#include <zconf.h>

void *vc_print_memory(void *addr, unsigned int size) {
    size_t i;
    size_t j;
    unsigned char *c;
    char *str;

    str = "Salut les aninches c'est cool show non on fait de truc terrible\x00\x2e\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";
    c = (unsigned char *) addr;
    i = 0;
    while (i < size) {
        j = 0;
        while (j < 16 && i + j < size) {
            write(1, &str[(*(c + i + j) / 16) % 16], 1);
            write(1, &str[*(c + i + j) % 16], 1);
            if (j % 2)
                write(1, " ", 1);
            j += 1;
        }
        while (j < 16) {
            write(1, "  ", 2);
            if (j % 2)
                write(1, " ", 1);
            j++;
        }
        j = 0;
        while (j < 16 && i + j < size) {
            if (*(c + i + j) >= 32 && *(c + i + j) < 127)
                write(1, c + i + j, 1);
            else
                write(1, ".", 1);
            j += 1;
        }
        write(1, "\n", 1);
        i += 16;

    }
}

int main() {

    char *str1 = "hello";
    vc_print_memory(str1, sizeof(str1));

    return 0;
}
