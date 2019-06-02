/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned downloadClickTimestamp : 1;
	unsigned iAdConversionTimestamp : 1;
	unsigned iAdImpressionTimestamp : 1;
	unsigned purchaseTimestamp : 1;
	unsigned searchAdClickTimestamp : 1;
	unsigned downloadType : 1;
	unsigned runState : 1;
	unsigned attributedByiTunes : 1;
} SCD_Struct_AD1;

typedef struct {
	unsigned expirationDate : 1;
	unsigned requestType : 1;
	unsigned isTest : 1;
} SCD_Struct_AD2;

typedef struct {
	unsigned bannerProxyType : 1;
} SCD_Struct_AD3;

typedef struct {
	unsigned statusChangeTimestamp : 1;
	unsigned transmitTimestamp : 1;
	unsigned timezone : 1;
	unsigned optedOutStatus : 1;
} SCD_Struct_AD4;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AD7;

typedef struct {
	unsigned iTunesRefreshTime : 1;
	unsigned updateSentTime : 1;
	unsigned advertisingIdentifierMonthResetCount : 1;
	unsigned timezone : 1;
	unsigned isFirstPartyIdentifier : 1;
} SCD_Struct_AD8;

typedef struct {
	unsigned clientClockTime : 1;
	unsigned advertisingIdentifierMonthResetCount : 1;
	unsigned appsRank : 1;
	unsigned connectionType : 1;
	unsigned horizontalAccuracy : 1;
	unsigned latitude : 1;
	unsigned longitude : 1;
	unsigned runState : 1;
	unsigned timezone : 1;
	unsigned isOnInternationalDataRoaming : 1;
	unsigned limitAdTracking : 1;
} SCD_Struct_AD9;

typedef struct {
	unsigned isBaseline : 1;
	unsigned isTest : 1;
} SCD_Struct_AD10;

typedef struct __CFString* CFStringRef;
