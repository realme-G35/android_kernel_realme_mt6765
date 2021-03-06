/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef _DATA_HW_ROUNDEDPATTERN_H_
#define _DATA_HW_ROUNDEDPATTERN_H_

#define ROUND_CORNER_H_TOP 174
#define ROUND_CORNER_H_BOT 174

static unsigned char top_rc_pattern[] = {
	0x73, 0x0, 0x3c, 0x1, 0xc5, 0x3, 0x38, 0x4, 0x3c, 0x0, 0xfa, 0xf5, 0xf2, 0xed, 0xde, 0xd9, 0xd1, 0xc7, 0xbf, 0xb3, 0xad, 0xa6, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x52, 0x4d, 0x4e, 0x49, 0x41, 0x3c, 0x33, 0x2e, 0x2b, 0x29, 0x24, 0x1f, 0x17, 0x14, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x14, 0x17, 0x1f, 0x24, 0x29, 0x2b, 0x2e, 0x33, 0x3c, 0x41, 0x49, 0x4e, 0x4d, 0x52, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xa6, 0xad, 0xb3, 0xbf, 0xc7, 0xd1, 0xd9, 0xde, 0xed, 0xf2, 0xf5, 0xfa, 
	0x62, 0x0, 0x24, 0x1, 0xd6, 0x3, 0x38, 0x4, 0x24, 0x0, 0xf7, 0xf2, 0xe6, 0xde, 0xd9, 0xcf, 0xc7, 0xc2, 0xb3, 0xab, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x5c, 0x52, 0x4a, 0x45, 0x3d, 0x38, 0x33, 0x2e, 0x2b, 0x29, 0x24, 0x1f, 0x17, 0x14, 0x12, 0xf, 0x8, 0x5, 0x5, 0x8, 0xf, 0x12, 0x14, 0x17, 0x1f, 0x24, 0x29, 0x2b, 0x2e, 0x33, 0x38, 0x3d, 0x45, 0x4a, 0x52, 0x5c, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xab, 0xb3, 0xc2, 0xc7, 0xcf, 0xd9, 0xde, 0xe6, 0xf2, 0xf7, 
	0x5a, 0x0, 0x18, 0x1, 0xde, 0x3, 0x38, 0x4, 0x18, 0x0, 0xe6, 0xd9, 0xd4, 0xcc, 0xc2, 0xb3, 0xad, 0xa0, 0x94, 0x87, 0x80, 0x73, 0x66, 0x59, 0x52, 0x45, 0x3b, 0x2e, 0x26, 0x1a, 0x12, 0xf, 0x8, 0x8, 0x8, 0x8, 0xf, 0x12, 0x1a, 0x26, 0x2e, 0x3b, 0x45, 0x52, 0x59, 0x66, 0x73, 0x80, 0x87, 0x94, 0xa0, 0xad, 0xb3, 0xc2, 0xcc, 0xd4, 0xd9, 0xe6, 
	0x53, 0x0, 0x11, 0x1, 0xe5, 0x3, 0x38, 0x4, 0x11, 0x0, 0xe0, 0xc7, 0xbd, 0xad, 0x9e, 0x8c, 0x85, 0x75, 0x66, 0x59, 0x4d, 0x40, 0x36, 0x30, 0x21, 0x12, 0x8, 0x8, 0x12, 0x21, 0x30, 0x36, 0x40, 0x4d, 0x59, 0x66, 0x75, 0x85, 0x8c, 0x9e, 0xad, 0xbd, 0xc7, 0xe0, 
	0x4e, 0x0, 0xe, 0x1, 0xea, 0x3, 0x38, 0x4, 0xe, 0x0, 0xe0, 0xd4, 0xba, 0x9e, 0x8c, 0x6b, 0x59, 0x42, 0x33, 0x2b, 0x21, 0x1a, 0x12, 0x8, 0x8, 0x12, 0x1a, 0x21, 0x2b, 0x33, 0x42, 0x59, 0x6b, 0x8c, 0x9e, 0xba, 0xd4, 0xe0, 
	0x49, 0x0, 0xb, 0x1, 0xef, 0x3, 0x38, 0x4, 0xb, 0x0, 0xf2, 0xd1, 0xb3, 0x9c, 0x80, 0x5e, 0x38, 0x29, 0x1c, 0xd, 0x5, 0x5, 0xd, 0x1c, 0x29, 0x38, 0x5e, 0x80, 0x9c, 0xb3, 0xd1, 0xf2, 
	0x46, 0x0, 0x8, 0x1, 0xf2, 0x3, 0x38, 0x4, 0x8, 0x0, 0xd6, 0xba, 0x9c, 0x8a, 0x61, 0x38, 0x1f, 0xa, 0xa, 0x1f, 0x38, 0x61, 0x8a, 0x9c, 0xba, 0xd6, 
	0x42, 0x0, 0x8, 0x1, 0xf6, 0x3, 0x38, 0x4, 0x8, 0x0, 0xf0, 0xd6, 0xc2, 0x8c, 0x63, 0x40, 0x21, 0x8, 0x8, 0x21, 0x40, 0x63, 0x8c, 0xc2, 0xd6, 0xf0, 
	0x3f, 0x0, 0x7, 0x1, 0xf9, 0x3, 0x38, 0x4, 0x7, 0x0, 0xe6, 0xc2, 0xa6, 0x78, 0x57, 0x38, 0x14, 0x14, 0x38, 0x57, 0x78, 0xa6, 0xc2, 0xe6, 
	0x3d, 0x0, 0x5, 0x1, 0xfb, 0x3, 0x38, 0x4, 0x5, 0x0, 0xcc, 0x9e, 0x6b, 0x3b, 0xd, 0xd, 0x3b, 0x6b, 0x9e, 0xcc, 
	0x3a, 0x0, 0x5, 0x1, 0xfe, 0x3, 0x38, 0x4, 0x5, 0x0, 0xdb, 0xad, 0x73, 0x2b, 0x12, 0x12, 0x2b, 0x73, 0xad, 0xdb, 
	0x38, 0x0, 0x4, 0x1, 0x0, 0x4, 0x38, 0x4, 0x4, 0x0, 0xb3, 0x6e, 0x2b, 0x5, 0x5, 0x2b, 0x6e, 0xb3, 
	0x36, 0x0, 0x3, 0x1, 0x2, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb8, 0x54, 0xd, 0xd, 0x54, 0xb8, 
	0x34, 0x0, 0x3, 0x1, 0x4, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x33, 0xd, 0xd, 0x33, 0xa6, 
	0x32, 0x0, 0x3, 0x1, 0x6, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x26, 0x3, 0x3, 0x26, 0xa6, 
	0x30, 0x0, 0x2, 0x1, 0x8, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x33, 0x33, 0xab, 
	0x2e, 0x0, 0x2, 0x1, 0xa, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x52, 0x52, 0xd9, 
	0x2c, 0x0, 0x3, 0x1, 0xc, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe0, 0x6b, 0x1a, 0x1a, 0x6b, 0xe0, 
	0x2b, 0x0, 0x2, 0x1, 0xd, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x33, 0x33, 0xa6, 
	0x29, 0x0, 0x3, 0x1, 0xf, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x4d, 0xa, 0xa, 0x4d, 0xd9, 
	0x28, 0x0, 0x2, 0x1, 0x10, 0x4, 0x38, 0x4, 0x2, 0x0, 0x87, 0x21, 0x21, 0x87, 
	0x26, 0x0, 0x2, 0x1, 0x12, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x40, 0x40, 0xd9, 
	0x25, 0x0, 0x2, 0x1, 0x13, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x1f, 0x1f, 0xb3, 
	0x24, 0x0, 0x2, 0x1, 0x14, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x14, 0x14, 0x73, 
	0x23, 0x0, 0x2, 0x1, 0x15, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x8, 0x8, 0x66, 
	0x22, 0x0, 0x1, 0x1, 0x16, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
	0x21, 0x0, 0x1, 0x1, 0x17, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
	0x20, 0x0, 0x1, 0x1, 0x18, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
	0x1f, 0x0, 0x1, 0x1, 0x19, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x1e, 0x0, 0x1, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
	0x1d, 0x0, 0x1, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x1c, 0x0, 0x1, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
	0x1b, 0x0, 0x1, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x1a, 0x0, 0x1, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
	0x19, 0x0, 0x1, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
	0x18, 0x0, 0x1, 0x1, 0x20, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
	0x17, 0x0, 0x1, 0x2, 0x5f, 0x0, 0xe5, 0x0, 0x4, 0x4, 0x21, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x17, 0x45, 0x96, 0xcd, 0xcd, 0x96, 0x45, 0x17, 0x66, 
	0x16, 0x0, 0x2, 0x2, 0x5c, 0x0, 0xe8, 0x0, 0x4, 0x4, 0x22, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x8, 0x40, 0x8f, 0xb0, 0xd9, 0xd9, 0xb0, 0x8f, 0x40, 0x8, 0x73, 
	0x15, 0x0, 0x2, 0x2, 0x59, 0x0, 0xeb, 0x0, 0x4, 0x4, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x14, 0x1f, 0x80, 0xbf, 0xe6, 0xe6, 0xbf, 0x80, 0x1f, 0x14, 0xb3, 
	0x15, 0x0, 0x1, 0x2, 0x56, 0x0, 0xee, 0x0, 0x3, 0x3, 0x23, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1f, 0x33, 0xa6, 0xfc, 0xfc, 0xa6, 0x33, 0x1f, 
	0x14, 0x0, 0x1, 0x2, 0x53, 0x0, 0xf1, 0x0, 0x2, 0x2, 0x24, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x1f, 0xa1, 0xa1, 0x1f, 0x40, 
	0x13, 0x0, 0x1, 0x2, 0x51, 0x0, 0xf3, 0x0, 0x2, 0x2, 0x25, 0x4, 0x38, 0x4, 0x1, 0x0, 0x87, 0x8, 0x80, 0x80, 0x8, 0x87, 
	0x12, 0x0, 0x2, 0x2, 0x50, 0x0, 0xf4, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x21, 0x26, 0xc7, 0xc7, 0x26, 0x21, 0xd9, 
	0x12, 0x0, 0x1, 0x2, 0x4f, 0x0, 0xf5, 0x0, 0x2, 0x2, 0x26, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x57, 0xf2, 0xf2, 0x57, 0x4d, 
	0x11, 0x0, 0x2, 0x2, 0x4d, 0x0, 0xf7, 0x0, 0x1, 0x1, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xa, 0x80, 0x80, 0xa, 0xa6, 
	0x11, 0x0, 0x1, 0x2, 0x4c, 0x0, 0xf8, 0x0, 0x1, 0x1, 0x27, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x8f, 0x8f, 0x33, 
	0x10, 0x0, 0x1, 0x2, 0x4b, 0x0, 0xf9, 0x0, 0x1, 0x1, 0x28, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x8f, 0x8f, 0x6b, 
	0xf, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xfa, 0x0, 0x1, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1a, 0x7d, 0x7d, 0x1a, 0xd9, 
	0xf, 0x0, 0x1, 0x2, 0x49, 0x0, 0xfb, 0x0, 0x1, 0x1, 0x29, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x54, 0x54, 0x52, 
	0xe, 0x0, 0x1, 0x2, 0x48, 0x0, 0xfc, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0xab, 0x26, 0x26, 0xab, 
	0xe, 0x0, 0x1, 0x2, 0x48, 0x0, 0xfc, 0x0, 0x2, 0x2, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x5, 0xc2, 0xc2, 0x5, 0x33, 
	0xd, 0x0, 0x1, 0x2, 0x47, 0x0, 0xfd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0x73, 0x73, 0xa6, 
	0xd, 0x0, 0x1, 0x2, 0x46, 0x0, 0xfe, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x26, 0x1f, 0x1f, 0x26, 
	0xc, 0x0, 0x2, 0x2, 0x46, 0x0, 0xfe, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x3, 0x96, 0x96, 0x3, 0xa6, 
	0xc, 0x0, 0x1, 0x2, 0x45, 0x0, 0xff, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x3b, 0x3b, 0x33, 
	0xb, 0x0, 0x2, 0x2, 0x45, 0x0, 0xff, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0xd, 0x99, 0x99, 0xd, 0xc7, 
	0xb, 0x0, 0x1, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x1f, 0x1f, 0x6b, 
	0xb, 0x0, 0x1, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x14, 0x8f, 0x8f, 0x14, 
	0xa, 0x0, 0x2, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x8, 0xd9, 0xd9, 0x8, 0xb3, 
	0xa, 0x0, 0x1, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6e, 0x3b, 0x3b, 0x6e, 
	0x9, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x2b, 0x8c, 0x8c, 0x2b, 0xdb, 
	0x9, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x5, 0xd4, 0xd4, 0x5, 0xad, 
	0x9, 0x0, 0x1, 0x2, 0x43, 0x0, 0x1, 0x1, 0x2, 0x2, 0x2f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0xf, 0xf5, 0xf5, 0xf, 0x73, 
	0x8, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x2b, 0x42, 0x42, 0x2b, 0xcc, 
	0x8, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x12, 0x73, 0x73, 0x12, 0x9e, 
	0x8, 0x0, 0x1, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x94, 0x94, 0x6b, 
	0x7, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x3b, 0xb8, 0xb8, 0x3b, 0xc2, 
	0x7, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x2, 0x2, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xd, 0x5, 0xcf, 0xcf, 0x5, 0xd, 0xa6, 
	0x7, 0x0, 0x1, 0x2, 0x42, 0x0, 0x2, 0x1, 0x2, 0x2, 0x31, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0x17, 0xe0, 0xe0, 0x17, 0x73, 
	0x6, 0x0, 0x2, 0x2, 0x41, 0x0, 0x3, 0x1, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x47, 0x27, 0x27, 0x47, 0xd6, 
	0x6, 0x0, 0x2, 0x2, 0x41, 0x0, 0x3, 0x1, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x2b, 0x30, 0x30, 0x2b, 0xc2, 
	0x6, 0x0, 0x2, 0x2, 0x41, 0x0, 0x3, 0x1, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0xa, 0x39, 0x39, 0xa, 0x8c, 
	0x6, 0x0, 0x1, 0x2, 0x41, 0x0, 0x3, 0x1, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x1, 0x0, 0x63, 0x30, 0x30, 0x63, 
	0x5, 0x0, 0x2, 0x2, 0x41, 0x0, 0x3, 0x1, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x40, 0x27, 0x27, 0x40, 0xd6, 
	0x5, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x2, 0x2, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x21, 0x17, 0xe0, 0xe0, 0x17, 0x21, 0xba, 
	0x5, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x2, 0x2, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x8, 0x5, 0xcf, 0xcf, 0x5, 0x8, 0x9c, 
	0x5, 0x0, 0x1, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7a, 0xb8, 0xb8, 0x7a, 
	0x4, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd1, 0x59, 0x94, 0x94, 0x59, 0xd1, 
	0x4, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x38, 0x73, 0x73, 0x38, 0xb3, 
	0x4, 0x0, 0x2, 0x2, 0x42, 0x0, 0x2, 0x1, 0x1, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x1a, 0x42, 0x42, 0x1a, 0x9c, 
	0x4, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x2, 0x2, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x8, 0xf, 0xf5, 0xf5, 0xf, 0x8, 0x80, 
	0x3, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x5e, 0xd4, 0xd4, 0x5e, 0xe0, 
	0x3, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x38, 0x8c, 0x8c, 0x38, 0xd4, 
	0x3, 0x0, 0x2, 0x2, 0x43, 0x0, 0x1, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x29, 0x3b, 0x3b, 0x29, 0xba, 
	0x3, 0x0, 0x2, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x1c, 0xd9, 0xd9, 0x1c, 0x9e, 
	0x3, 0x0, 0x2, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0xd, 0x8f, 0x8f, 0xd, 0x8c, 
	0x3, 0x0, 0x2, 0x2, 0x44, 0x0, 0x0, 0x1, 0x1, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x6b, 0x5, 0x1f, 0x1f, 0x5, 0x6b, 
	0x2, 0x0, 0x2, 0x2, 0x45, 0x0, 0xff, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x59, 0x99, 0x99, 0x59, 0xe0, 
	0x2, 0x0, 0x2, 0x2, 0x45, 0x0, 0xff, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x42, 0x3b, 0x3b, 0x42, 0xc7, 
	0x2, 0x0, 0x2, 0x2, 0x46, 0x0, 0xfe, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbd, 0x33, 0x96, 0x96, 0x33, 0xbd, 
	0x2, 0x0, 0x2, 0x2, 0x46, 0x0, 0xfe, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x2b, 0x1f, 0x1f, 0x2b, 0xad, 
	0x2, 0x0, 0x2, 0x2, 0x47, 0x0, 0xfd, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x21, 0x73, 0x73, 0x21, 0x9e, 
	0x2, 0x0, 0x2, 0x2, 0x48, 0x0, 0xfc, 0x0, 0x2, 0x2, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x1a, 0x5, 0xc2, 0xc2, 0x5, 0x1a, 0x8c, 
	0x2, 0x0, 0x2, 0x2, 0x48, 0x0, 0xfc, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x85, 0x12, 0x26, 0x26, 0x12, 0x85, 
	0x2, 0x0, 0x2, 0x2, 0x49, 0x0, 0xfb, 0x0, 0x1, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x75, 0x8, 0x54, 0x54, 0x8, 0x75, 
	0x1, 0x0, 0x2, 0x2, 0x4a, 0x0, 0xfa, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x66, 0x7d, 0x7d, 0x66, 0xe6, 
	0x1, 0x0, 0x2, 0x2, 0x4b, 0x0, 0xf9, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x59, 0x8f, 0x8f, 0x59, 0xd9, 
	0x1, 0x0, 0x2, 0x2, 0x4c, 0x0, 0xf8, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x4d, 0x8f, 0x8f, 0x4d, 0xd4, 
	0x1, 0x0, 0x2, 0x2, 0x4d, 0x0, 0xf7, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x40, 0x80, 0x80, 0x40, 0xcc, 
	0x1, 0x0, 0x2, 0x2, 0x4f, 0x0, 0xf5, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x36, 0x57, 0xf2, 0xf2, 0x57, 0x36, 0xc2, 
	0x1, 0x0, 0x2, 0x2, 0x50, 0x0, 0xf4, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x30, 0x26, 0xc7, 0xc7, 0x26, 0x30, 0xb3, 
	0x1, 0x0, 0x2, 0x2, 0x51, 0x0, 0xf3, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x26, 0x8, 0x80, 0x80, 0x8, 0x26, 0xad, 
	0x1, 0x0, 0x2, 0x2, 0x53, 0x0, 0xf1, 0x0, 0x2, 0x2, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x1c, 0x1f, 0xa1, 0xa1, 0x1f, 0x1c, 0xa0, 
	0x1, 0x0, 0x2, 0x2, 0x56, 0x0, 0xee, 0x0, 0x3, 0x3, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x94, 0xa, 0x33, 0xa6, 0xfc, 0xfc, 0xa6, 0x33, 0xa, 0x94, 
	0x1, 0x0, 0x1, 0x2, 0x59, 0x0, 0xeb, 0x0, 0x4, 0x4, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x88, 0x1f, 0x80, 0xbf, 0xe6, 0xe6, 0xbf, 0x80, 0x1f, 0x88, 
	0x1, 0x0, 0x1, 0x2, 0x5c, 0x0, 0xe8, 0x0, 0x4, 0x4, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x40, 0x8f, 0xb0, 0xd9, 0xd9, 0xb0, 0x8f, 0x40, 0x82, 
	0x1, 0x0, 0x1, 0x2, 0x5f, 0x0, 0xe5, 0x0, 0x4, 0x4, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x75, 0x17, 0x45, 0x96, 0xcd, 0xcd, 0x96, 0x45, 0x17, 0x75, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x68, 0x68, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5b, 0x5b, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x54, 0x54, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4c, 0x4c, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3d, 0x3d, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x35, 0x35, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xfa, 0x26, 0x26, 0xfa,
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf5, 0x1f, 0x1f, 0xf5, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x1c, 0x1c, 0xf2, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xed, 0x17, 0x17, 0xed, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xde, 0x12, 0x12, 0xde, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0xd, 0xd, 0xd9, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd1, 0xa, 0xa, 0xd1, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x5, 0x5, 0xc7, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xbf, 0xbf, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb3, 0xb3, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xad, 0xad, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0xa6, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9e, 0x9e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x96, 0x96, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8c, 0x8c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7d, 0x7d, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x75, 0x75, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x66, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x61, 0x61, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5c, 0x5c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x57, 0x57, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x52, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x4d, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4e, 0x4e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x49, 0x49, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x41, 0x41, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3c, 0x3c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2b, 0x2b, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x29, 0x29, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x24, 0x24, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1f, 0x1f, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x17, 0x17, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x14, 0x14, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x12, 0x12, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xf, 0xf, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 

	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8, 0x8, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa, 0xa, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xd, 0xd, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xf, 0xf, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x12, 0x12, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x14, 0x14, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x17, 0x17, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1f, 0x1f, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x24, 0x24, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x29, 0x29, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2b, 0x2b, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3c, 0x3c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x41, 0x41, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x49, 0x49, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4e, 0x4e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x4d, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x52, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x57, 0x57, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5c, 0x5c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x61, 0x61, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x66, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x70, 0x70, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x75, 0x75, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7d, 0x7d, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x8c, 0x8c, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x96, 0x96, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0x9e, 0x9e, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0xa6, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xad, 0xad, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xb3, 0xb3, 
	0x0, 0x0, 0x1, 0x1, 0x38, 0x4, 0x38, 0x4, 0x1, 0x0, 0xbf, 0xbf, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x5, 0x5, 0xc7, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd1, 0xa, 0xa, 0xd1, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0xd, 0xd, 0xd9, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xde, 0x12, 0x12, 0xde, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xed, 0x17, 0x17, 0xed, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf2, 0x1c, 0x1c, 0xf2, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xf5, 0x1f, 0x1f, 0xf5, 
	0x0, 0x0, 0x2, 0x1, 0x38, 0x4, 0x38, 0x4, 0x2, 0x0, 0xfa, 0x26, 0x26, 0xfa, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x35, 0x35, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x3d, 0x3d, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4c, 0x4c, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x54, 0x54, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x5b, 0x5b, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x68, 0x68, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x75, 0x75, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x82, 0x82, 
	0x1, 0x0, 0x1, 0x1, 0x37, 0x4, 0x38, 0x4, 0x1, 0x0, 0x88, 0x88, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0x94, 0xa, 0xa, 0x94, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa0, 0x1c, 0x1c, 0xa0, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x26, 0x26, 0xad, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x30, 0x30, 0xb3, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x36, 0x36, 0xc2, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x40, 0x40, 0xcc, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x4d, 0x4d, 0xd4, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x59, 0x59, 0xd9, 
	0x1, 0x0, 0x2, 0x1, 0x37, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe6, 0x66, 0x66, 0xe6, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x75, 0x8, 0x8, 0x75, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x85, 0x12, 0x12, 0x85, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0x1a, 0x1a, 0x8c, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x21, 0x21, 0x9e, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x2b, 0x2b, 0xad, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xbd, 0x33, 0x33, 0xbd, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0x42, 0x42, 0xc7, 
	0x2, 0x0, 0x2, 0x1, 0x36, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x59, 0x59, 0xe0, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x6b, 0x5, 0x5, 0x6b, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0xd, 0xd, 0x8c, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x1c, 0x1c, 0x9e, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x29, 0x29, 0xba, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd4, 0x38, 0x38, 0xd4, 
	0x3, 0x0, 0x2, 0x1, 0x35, 0x4, 0x38, 0x4, 0x2, 0x0, 0xe0, 0x5e, 0x5e, 0xe0, 
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x80, 0x8, 0x8, 0x80, 
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x1a, 0x1a, 0x9c, 
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x38, 0x38, 0xb3, 
	0x4, 0x0, 0x2, 0x1, 0x34, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd1, 0x59, 0x59, 0xd1, 
	0x5, 0x0, 0x1, 0x1, 0x33, 0x4, 0x38, 0x4, 0x1, 0x0, 0x7a, 0x7a, 
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9c, 0x8, 0x8, 0x9c, 
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xba, 0x21, 0x21, 0xba, 
	0x5, 0x0, 0x2, 0x1, 0x33, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x40, 0x40, 0xd6, 
	0x6, 0x0, 0x1, 0x1, 0x32, 0x4, 0x38, 0x4, 0x1, 0x0, 0x63, 0x63, 
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0x8c, 0xa, 0xa, 0x8c, 
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x2b, 0x2b, 0xc2, 
	0x6, 0x0, 0x2, 0x1, 0x32, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd6, 0x47, 0x47, 0xd6, 
	0x7, 0x0, 0x1, 0x1, 0x31, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0x73, 
	0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xd, 0xd, 0xa6, 
	0x7, 0x0, 0x2, 0x1, 0x31, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc2, 0x3b, 0x3b, 0xc2, 
	0x8, 0x0, 0x1, 0x1, 0x30, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x6b, 
	0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0x9e, 0x12, 0x12, 0x9e, 
	0x8, 0x0, 0x2, 0x1, 0x30, 0x4, 0x38, 0x4, 0x2, 0x0, 0xcc, 0x2b, 0x2b, 0xcc, 
	0x9, 0x0, 0x1, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x73, 0x73, 
	0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xad, 0x5, 0x5, 0xad, 
	0x9, 0x0, 0x2, 0x1, 0x2f, 0x4, 0x38, 0x4, 0x2, 0x0, 0xdb, 0x2b, 0x2b, 0xdb, 
	0xa, 0x0, 0x1, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6e, 0x6e, 
	0xa, 0x0, 0x2, 0x1, 0x2e, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x8, 0x8, 0xb3, 
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x14, 0x14, 
	0xb, 0x0, 0x1, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x6b, 
	0xb, 0x0, 0x2, 0x1, 0x2d, 0x4, 0x38, 0x4, 0x2, 0x0, 0xc7, 0xd, 0xd, 0xc7, 
	0xc, 0x0, 0x1, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0xc, 0x0, 0x2, 0x1, 0x2c, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x3, 0x3, 0xa6, 
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x26, 0x26, 
	0xd, 0x0, 0x1, 0x1, 0x2b, 0x4, 0x38, 0x4, 0x1, 0x0, 0xa6, 0xa6, 
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0xe, 0x0, 0x1, 0x1, 0x2a, 0x4, 0x38, 0x4, 0x1, 0x0, 0xab, 0xab, 
	0xf, 0x0, 0x1, 0x1, 0x29, 0x4, 0x38, 0x4, 0x1, 0x0, 0x52, 0x52, 
	0xf, 0x0, 0x2, 0x1, 0x29, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x1a, 0x1a, 0xd9, 
	0x10, 0x0, 0x1, 0x1, 0x28, 0x4, 0x38, 0x4, 0x1, 0x0, 0x6b, 0x6b, 
	0x11, 0x0, 0x1, 0x1, 0x27, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x11, 0x0, 0x2, 0x1, 0x27, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0xa, 0xa, 0xa6, 
	0x12, 0x0, 0x1, 0x1, 0x26, 0x4, 0x38, 0x4, 0x1, 0x0, 0x4d, 0x4d, 
	0x12, 0x0, 0x2, 0x1, 0x26, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x21, 0x21, 0xd9, 
	0x13, 0x0, 0x1, 0x1, 0x25, 0x4, 0x38, 0x4, 0x1, 0x0, 0x87, 0x87, 
	0x14, 0x0, 0x1, 0x1, 0x24, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
	0x15, 0x0, 0x1, 0x1, 0x23, 0x4, 0x38, 0x4, 0x1, 0x0, 0x1f, 0x1f, 
	0x15, 0x0, 0x2, 0x1, 0x23, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x14, 0x14, 0xb3, 
	0x16, 0x0, 0x2, 0x1, 0x22, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x8, 0x8, 0x73, 
	0x17, 0x0, 0x1, 0x1, 0x21, 0x4, 0x38, 0x4, 0x1, 0x0, 0x66, 0x66, 
	0x18, 0x0, 0x1, 0x1, 0x20, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
	0x19, 0x0, 0x1, 0x1, 0x1f, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
	0x1a, 0x0, 0x1, 0x1, 0x1e, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
	0x1b, 0x0, 0x1, 0x1, 0x1d, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x1c, 0x0, 0x1, 0x1, 0x1c, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
	0x1d, 0x0, 0x1, 0x1, 0x1b, 0x4, 0x38, 0x4, 0x1, 0x0, 0x2e, 0x2e, 
	0x1e, 0x0, 0x1, 0x1, 0x1a, 0x4, 0x38, 0x4, 0x1, 0x0, 0x30, 0x30, 
	0x1f, 0x0, 0x1, 0x1, 0x19, 0x4, 0x38, 0x4, 0x1, 0x0, 0x33, 0x33, 
	0x20, 0x0, 0x1, 0x1, 0x18, 0x4, 0x38, 0x4, 0x1, 0x0, 0x38, 0x38, 
	0x21, 0x0, 0x1, 0x1, 0x17, 0x4, 0x38, 0x4, 0x1, 0x0, 0x40, 0x40, 
	0x22, 0x0, 0x1, 0x1, 0x16, 0x4, 0x38, 0x4, 0x1, 0x0, 0x59, 0x59, 
	0x23, 0x0, 0x2, 0x1, 0x15, 0x4, 0x38, 0x4, 0x2, 0x0, 0x66, 0x8, 0x8, 0x66, 
	0x24, 0x0, 0x2, 0x1, 0x14, 0x4, 0x38, 0x4, 0x2, 0x0, 0x73, 0x14, 0x14, 0x73, 
	0x25, 0x0, 0x2, 0x1, 0x13, 0x4, 0x38, 0x4, 0x2, 0x0, 0xb3, 0x1f, 0x1f, 0xb3, 
	0x26, 0x0, 0x2, 0x1, 0x12, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x40, 0x40, 0xd9, 
	0x28, 0x0, 0x2, 0x1, 0x10, 0x4, 0x38, 0x4, 0x2, 0x0, 0x87, 0x21, 0x21, 0x87, 
	0x29, 0x0, 0x3, 0x1, 0xf, 0x4, 0x38, 0x4, 0x3, 0x0, 0xd9, 0x4d, 0xa, 0xa, 0x4d, 0xd9, 
	0x2b, 0x0, 0x2, 0x1, 0xd, 0x4, 0x38, 0x4, 0x2, 0x0, 0xa6, 0x33, 0x33, 0xa6, 
	0x2c, 0x0, 0x3, 0x1, 0xc, 0x4, 0x38, 0x4, 0x3, 0x0, 0xe0, 0x6b, 0x1a, 0x1a, 0x6b, 0xe0, 
	0x2e, 0x0, 0x2, 0x1, 0xa, 0x4, 0x38, 0x4, 0x2, 0x0, 0xd9, 0x52, 0x52, 0xd9, 
	0x30, 0x0, 0x2, 0x1, 0x8, 0x4, 0x38, 0x4, 0x2, 0x0, 0xab, 0x33, 0x33, 0xab, 
	0x32, 0x0, 0x3, 0x1, 0x6, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x26, 0x3, 0x3, 0x26, 0xa6, 
	0x34, 0x0, 0x3, 0x1, 0x4, 0x4, 0x38, 0x4, 0x3, 0x0, 0xa6, 0x33, 0xd, 0xd, 0x33, 0xa6, 
	0x36, 0x0, 0x3, 0x1, 0x2, 0x4, 0x38, 0x4, 0x3, 0x0, 0xb8, 0x54, 0xd, 0xd, 0x54, 0xb8, 
	0x38, 0x0, 0x4, 0x1, 0x0, 0x4, 0x38, 0x4, 0x4, 0x0, 0xb3, 0x6e, 0x2b, 0x5, 0x5, 0x2b, 0x6e, 0xb3, 
	0x3a, 0x0, 0x5, 0x1, 0xfe, 0x3, 0x38, 0x4, 0x5, 0x0, 0xdb, 0xad, 0x73, 0x2b, 0x12, 0x12, 0x2b, 0x73, 0xad, 0xdb, 
	0x3d, 0x0, 0x5, 0x1, 0xfb, 0x3, 0x38, 0x4, 0x5, 0x0, 0xcc, 0x9e, 0x6b, 0x3b, 0xd, 0xd, 0x3b, 0x6b, 0x9e, 0xcc, 
	0x3f, 0x0, 0x7, 0x1, 0xf9, 0x3, 0x38, 0x4, 0x7, 0x0, 0xe6, 0xc2, 0xa6, 0x78, 0x57, 0x38, 0x14, 0x14, 0x38, 0x57, 0x78, 0xa6, 0xc2, 0xe6, 
	0x42, 0x0, 0x8, 0x1, 0xf6, 0x3, 0x38, 0x4, 0x8, 0x0, 0xf0, 0xd6, 0xc2, 0x8c, 0x63, 0x40, 0x21, 0x8, 0x8, 0x21, 0x40, 0x63, 0x8c, 0xc2, 0xd6, 0xf0, 
	0x46, 0x0, 0x8, 0x1, 0xf2, 0x3, 0x38, 0x4, 0x8, 0x0, 0xd6, 0xba, 0x9c, 0x8a, 0x61, 0x38, 0x1f, 0xa, 0xa, 0x1f, 0x38, 0x61, 0x8a, 0x9c, 0xba, 0xd6, 
	0x49, 0x0, 0xb, 0x1, 0xef, 0x3, 0x38, 0x4, 0xb, 0x0, 0xf2, 0xd1, 0xb3, 0x9c, 0x80, 0x5e, 0x38, 0x29, 0x1c, 0xd, 0x5, 0x5, 0xd, 0x1c, 0x29, 0x38, 0x5e, 0x80, 0x9c, 0xb3, 0xd1, 0xf2, 
	0x4e, 0x0, 0xe, 0x1, 0xea, 0x3, 0x38, 0x4, 0xe, 0x0, 0xe0, 0xd4, 0xba, 0x9e, 0x8c, 0x6b, 0x59, 0x42, 0x33, 0x2b, 0x21, 0x1a, 0x12, 0x8, 0x8, 0x12, 0x1a, 0x21, 0x2b, 0x33, 0x42, 0x59, 0x6b, 0x8c, 0x9e, 0xba, 0xd4, 0xe0, 
	0x53, 0x0, 0x11, 0x1, 0xe5, 0x3, 0x38, 0x4, 0x11, 0x0, 0xe0, 0xc7, 0xbd, 0xad, 0x9e, 0x8c, 0x85, 0x75, 0x66, 0x59, 0x4d, 0x40, 0x36, 0x30, 0x21, 0x12, 0x8, 0x8, 0x12, 0x21, 0x30, 0x36, 0x40, 0x4d, 0x59, 0x66, 0x75, 0x85, 0x8c, 0x9e, 0xad, 0xbd, 0xc7, 0xe0, 
	0x5a, 0x0, 0x18, 0x1, 0xde, 0x3, 0x38, 0x4, 0x18, 0x0, 0xe6, 0xd9, 0xd4, 0xcc, 0xc2, 0xb3, 0xad, 0xa0, 0x94, 0x87, 0x80, 0x73, 0x66, 0x59, 0x52, 0x45, 0x3b, 0x2e, 0x26, 0x1a, 0x12, 0xf, 0x8, 0x8, 0x8, 0x8, 0xf, 0x12, 0x1a, 0x26, 0x2e, 0x3b, 0x45, 0x52, 0x59, 0x66, 0x73, 0x80, 0x87, 0x94, 0xa0, 0xad, 0xb3, 0xc2, 0xcc, 0xd4, 0xd9, 0xe6, 
	0x62, 0x0, 0x24, 0x1, 0xd6, 0x3, 0x38, 0x4, 0x24, 0x0, 0xf7, 0xf2, 0xe6, 0xde, 0xd9, 0xcf, 0xc7, 0xc2, 0xb3, 0xab, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x5c, 0x52, 0x4a, 0x45, 0x3d, 0x38, 0x33, 0x2e, 0x2b, 0x29, 0x24, 0x1f, 0x17, 0x14, 0x12, 0xf, 0x8, 0x5, 0x5, 0x8, 0xf, 0x12, 0x14, 0x17, 0x1f, 0x24, 0x29, 0x2b, 0x2e, 0x33, 0x38, 0x3d, 0x45, 0x4a, 0x52, 0x5c, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xab, 0xb3, 0xc2, 0xc7, 0xcf, 0xd9, 0xde, 0xe6, 0xf2, 0xf7, 
	0x73, 0x0, 0x3c, 0x1, 0xc5, 0x3, 0x38, 0x4, 0x3c, 0x0, 0xfa, 0xf5, 0xf2, 0xed, 0xde, 0xd9, 0xd1, 0xc7, 0xbf, 0xb3, 0xad, 0xa6, 0x9e, 0x96, 0x8c, 0x82, 0x7d, 0x75, 0x70, 0x66, 0x61, 0x5c, 0x57, 0x52, 0x4d, 0x4e, 0x49, 0x41, 0x3c, 0x33, 0x2e, 0x2b, 0x29, 0x24, 0x1f, 0x17, 0x14, 0x12, 0xf, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xa, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xd, 0xf, 0x12, 0x14, 0x17, 0x1f, 0x24, 0x29, 0x2b, 0x2e, 0x33, 0x3c, 0x41, 0x49, 0x4e, 0x4d, 0x52, 0x57, 0x5c, 0x61, 0x66, 0x70, 0x75, 0x7d, 0x82, 0x8c, 0x96, 0x9e, 0xa6, 0xad, 0xb3, 0xbf, 0xc7, 0xd1, 0xd9, 0xde, 0xed, 0xf2, 0xf5, 0xfa, 

};

#endif
