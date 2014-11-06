/*
 * Copyright (C) 2014 Olaf Lessenich.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 021110-1307, USA.
 *
 */

#ifndef LIST_H_   /* Include guard */
#define LIST_H_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct element_struct {
	char *value;
	struct element_struct *next;
};

typedef struct element_struct elem;


elem * create_list(char *value);

elem * add_to_list(char *value);

bool list_contains(char *value);

int list_size();

void clear_list();

#endif