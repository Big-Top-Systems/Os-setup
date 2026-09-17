#include <stdint.h>

volatile uint16_t *vga = (uint16_t *)0xB8000;

void kernel_main(void)
{
    const char *text = "MOS kernel started!";

    for (int i = 0; i < 80 * 25; i++)
        vga[i] = 0x0720;

    for (int i = 0; text[i] != '\0'; i++)
        vga[i] = 0x0700 | text[i];

    while (1)
        __asm__ volatile ("hlt");
}
