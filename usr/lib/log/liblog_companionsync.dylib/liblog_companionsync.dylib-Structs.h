/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/log/liblog_companionsync.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned buffersSessions : 1;
	unsigned inSession : 1;
	unsigned suspended : 1;
} SCD_Struct_SY1;

typedef struct {
	unsigned fullSessionTimeout : 1;
	unsigned perMessageTimeout : 1;
	unsigned canRestart : 1;
	unsigned canRollback : 1;
	unsigned canceled : 1;
	unsigned isReset : 1;
} SCD_Struct_SY2;

typedef struct {
	unsigned state : 1;
} SCD_Struct_SY3;

