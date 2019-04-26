/*
 * kmeans.h
 * Copyright (C) 2019 Alex Tsanis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef KMEANS_H_INCLUDED
#define KMEANS_H_INCLUDED

#include"point.h"

typedef struct {
    long size;
    Point points[100000];
} PointArray;

typedef struct {
    long size;
    PointArray groups[10];
} Clusters;

void run(PointArray* xs, Clusters* clusters);

#endif // KMEANS_H_INCLUDED
