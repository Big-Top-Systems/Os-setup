ENTRY(_start)

SECTIONS
{
  /* Link kernel at 1MB */
  . = 1M;

  /* Code + read‑only data */
  .text :
  {
    *(.text*)
    *(.rodata*)
  }

  /* Initialized data */
  .data :
  {
    *(.data*)
  }

  /* Uninitialized data (BSS) */
  .bss :
  {
    *(.bss*)
    *(COMMON)
  }
}
