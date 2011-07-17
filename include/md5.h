/* 
 * Copyright (C) 2006  Martin Wolters
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to 
 * the Free Software Foundation, Inc.
 * 51 Franklin Street, Fifth Floor
 * Boston, MA  02110-1301, USA
 */

#ifndef MD5_H_
#define MD5_H_

typedef unsigned char uchar;
typedef struct {
	int a, b, c, d;
	int len;

	uchar *buf;
} context_t;

void initcontext(context_t *ctx);
void processmd5(context_t *ctx);
void addtocontext(context_t *ctx, uchar *add, int len);
void finishcontext(context_t *ctx, uchar *out);

#endif

