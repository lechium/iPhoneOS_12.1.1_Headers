/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_CL4;

typedef struct {
	long long numberOfLocations;
	long long numberOfResolvedLocations;
	long long numberOfUnneededLocations;
} SCD_Struct_CL5;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct CLSRoutineServiceStatisticsStruct {
	BOOL routineAvailable;
	unsigned long long numberOfLocationsOfInterest;
	unsigned long long numberOfVisits;
	unsigned long long numberOfTransitions;
	unsigned long long numberOfTimeMatches;
	unsigned long long numberOfCloseByLocationMatches;
	unsigned long long numberOfRemoteLocationMatches;
	unsigned long long numberOfMatchRequests;
	double pinningVisitsRatio;
} CLSRoutineServiceStatisticsStruct;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;
