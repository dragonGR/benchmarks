/*
 * hashmap.h
 * Copyright (C) 2019 Alex Tsanis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef HASHMAP_H_INCLUDED
#define HASHMAP_H_INCLUDED

#include"point.h"
#include"kmeans.h"

void insert(Point* key, Point* elem);

void printHashMap();

void setCluster(Clusters* ret);

#endif // HASHMAP_H_INCLUDED
