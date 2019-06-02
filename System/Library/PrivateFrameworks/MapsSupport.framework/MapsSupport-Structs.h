/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned cartoID : 1;
	unsigned defaultTransitType : 1;
	unsigned iconAttributeKey : 1;
	unsigned iconAttributeValue : 1;
	unsigned iconType : 1;
} SCD_Struct_MS1;

typedef struct {
	unsigned timestamp : 1;
	unsigned floorOrdinal : 1;
} SCD_Struct_MS2;

typedef struct {
	unsigned shieldType : 1;
} SCD_Struct_MS3;

typedef struct {
	unsigned artworkSourceType : 1;
	unsigned artworkUseType : 1;
	unsigned hasRoutingIncidentBadge : 1;
} SCD_Struct_MS4;

typedef struct {
	unsigned muid : 1;
	unsigned creationDatetime : 1;
	unsigned endDatetime : 1;
	unsigned iconType : 1;
	unsigned lastUpdatedDatetime : 1;
	unsigned startDatetime : 1;
	unsigned blockingIncident : 1;
} SCD_Struct_MS5;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct {
	unsigned position : 1;
	unsigned timestamp : 1;
	unsigned searchType : 1;
	unsigned tracksRAPRecordingOnly : 1;
} SCD_Struct_MS7;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MS8;
