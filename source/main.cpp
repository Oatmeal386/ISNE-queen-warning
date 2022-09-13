#include <nds.h>

#include <stdio.h>

int main()
{
    consoleDemoInit();

    irqInit();

    irqEnable(IRQ_VBLANK);

    while (true)
    {
        printf("\nQueen Elizabeth II\n1926 - 2022\n\nThis IS Nitro Emulator Unit has\ncurrently been disabled due to\nthe Royal Period of Mourning andwill not be able to be used\nuntil Monday 19 September\n\nFor more information please\nvisit:\n\nhttp://www.warioworld.com/nitro/royal-mourning/");

    swiWaitForVBlank();
    consoleClear();
    }
return 0;
}
