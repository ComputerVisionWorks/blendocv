/*
 * allocimbuf.h
 *
 * $Id: IMB_allocimbuf.h 33468 2010-12-04 13:00:28Z campbellbarton $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/**
 * \file IMB_allocimbuf.h
 * \ingroup imbuf
 * \brief Header file for allocimbuf.c
 */
#ifndef IMB_ALLOCIMBUF_H
#define IMB_ALLOCIMBUF_H

struct ImBuf;

short imb_addplanesImBuf(struct ImBuf *ibuf);

short imb_addencodedbufferImBuf(struct ImBuf *ibuf);
short imb_enlargeencodedbufferImBuf(struct ImBuf *ibuf);

void imb_freeplanesImBuf(struct ImBuf *ibuf);

short imb_addcmapImBuf(struct ImBuf *ibuf);

#endif

