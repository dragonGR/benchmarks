/*
 * point.c
 * Copyright (C) 2019 Alex Tsanis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include<math.h>
#include"point.h"

#include <stdlib.h>
#include <stdio.h>

void divide(Point* p, long d)
{
    p->x = p->x/((double)d);
    p->y = p->y/((double)d);
    return;
}

void add(Point* p1, Point* p2)
{
    p1->x = p1->x+p2->x;
    p1->y = p1->y+p2->y;
    return;
}

void sub(Point* p1, Point* p2)
{
    p1->x = p1->x-p2->x;
    p1->y = p1->y-p2->y;
    return;
}

double sq(double x)
{
    return x*x;
}

double modulus(Point* p)
{
    return sqrt(sq(p->x)+ sq(p->y));
}
