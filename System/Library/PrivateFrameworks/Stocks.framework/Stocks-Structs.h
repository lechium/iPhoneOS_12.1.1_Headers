/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGGradient* CGGradientRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double field1;
	double field2;
	unsigned long long field3;
} SCD_Struct_St5;

typedef struct __CFString* CFStringRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double unixTime;
	double price;
	unsigned long long volume;
} SCD_Struct_HU8;

typedef struct {
	double field1;
	unsigned long long field2;
} SCD_Struct_St9;

typedef struct CGContext* CGContextRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;
