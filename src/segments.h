/*
 * Copyright (C) 2006--2008  Kipp C. Cannon
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */


/*
 * ============================================================================
 *
 *                    Segments Module Component --- Header
 *
 * ============================================================================
 */


#ifndef __SEGMENTS_H__
#define __SEGMENTS_H__


#include <Python.h>


#define MODULE_NAME "ligo.__segments"


#ifdef _MSC_VER
    #define inline __inline
    #ifndef NAN
        static const unsigned long __nan[2] = {0xffffffff, 0x7fffffff};
        #define NAN (*(const double *) __nan)
    #endif
    #ifndef INFINITY
        static const unsigned long __infinity[2] = {0x00000000, 0x7ff00000};
        #define INFINITY (*(const double *) __infinity)
    #endif
#else
    #ifndef INFINITY
        #define INFINITY (1.0/0.0)
    #endif
    #ifndef NAN
        #define NAN (INFINITY-INFINITY)
    #endif
#endif




/*
 * ============================================================================
 *
 *                               infinity Class
 *
 * ============================================================================
 */


/*
 * Structure
 */


typedef struct {
	PyObject_HEAD
} segments_Infinity;


/*
 * Type
 */


extern PyTypeObject segments_Infinity_Type;


/*
 * Pre-allocated instances
 */


extern segments_Infinity *segments_PosInfinity;
extern segments_Infinity *segments_NegInfinity;


/*
 * ============================================================================
 *
 *                               segment Class
 *
 * ============================================================================
 */


/*
 * Structure
 */

typedef PyTupleObject segments_Segment;


/*
 * Type
 */


extern PyTypeObject segments_Segment_Type;
PyObject *segments_Segment_New(PyTypeObject *, PyObject *, PyObject *);


/*
 * ============================================================================
 *
 *                             segmentlist Class
 *
 * ============================================================================
 */


/*
 * Structure
 */


typedef PyListObject segments_SegmentList;


/*
 * Type
 */


extern PyTypeObject segments_SegmentList_Type;


#endif /* __SEGMENTS_H__ */
