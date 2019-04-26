/*
 * point.h
 * Copyright (C) 2019 Alex Tsanis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct {
    double x;
    double y;
} Point;

void divide(Point* p, long d);

void add(Point* p1, Point* p2);

void sub(Point* p1, Point* p2);

double sq(double x);

double modulus(Point* p);

#endif // POINT_H_INCLUDED
