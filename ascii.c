/*
 * ascii.c
 * Copyright (C) 2019 Alex Tsanis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    /* variable declarations */
    char a = 119; /* w */
    char b = 104; /* h */
    char c = 111; /* o */
    char d = 97;  /* a */
    char e = 109; /* m */
    char f = 105; /* i */

    /* concaternate and transform decimal values to ascii chars using putchar */
    char command[] = {a,b,c,d,e,f};

    /* execute command using system() */
    system(command);
}
