/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

typedef struct _NSZone* NSZoneRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct CGImage* CGImageRef;

typedef struct CGContext* CGContextRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_PL12;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PL13;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct changeList_s {
	NSMutableSet* inserted;
	NSMutableSet* updated;
	NSMutableSet* deleted;
} changeList_s;

typedef struct contentChanges_s {
	NSMutableArray* container;
	NSMutableArray* updatedContent;
} contentChanges_s;

typedef struct {
	int field1;
	CGSize field2;
	CGRect field3;
	CGRect field4;
	unsigned field5;
	int field6;
	int field7;
	double field8[4];
	double field9[4];
	unsigned field10;
} SCD_Struct_PL18;

typedef const struct __CFArray* CFArrayRef;

typedef struct __CFSet* CFSetRef;

typedef struct sqlite3_intarray* sqlite3_intarrayRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PS23;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PL25;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct _FigCascadeContext* FigCascadeContextRef;

typedef struct PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct {
	unsigned strategy : 8;
	unsigned directoryNumber : 10;
	unsigned fileNumber : 14;
	unsigned fileType : 7;
	unsigned isMasterThumb : 1;
} PLPrimaryDataStore_DCIMCaptureStrategy_KeyStruct;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_PL30;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_PL31;

typedef struct __CVBuffer* CVBufferRef;

typedef struct PLPrimaryDataStore_CPLKeyStrategy_KeyStruct {
	unsigned strategy : 8;
	unsigned isMutation : 1;
	unsigned isMasterThumb : 1;
	unsigned cplType : 5;
	unsigned fileType : 2;
} PLPrimaryDataStore_CPLKeyStrategy_KeyStruct;

typedef struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct {
	unsigned strategy : 8;
	unsigned relation : 3;
} PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct;

typedef struct FigPhotoDecompressionContainer* FigPhotoDecompressionContainerRef;

typedef struct UDateIntervalFormat* UDateIntervalFormatRef;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_PS37;

typedef struct PLSharedStreamsDataStoreKeyStruct {
	unsigned resourceType : 8;
	char albumCloudGUID[37];
	char cloudPersonID[11];
	char filename[13];
} PLSharedStreamsDataStoreKeyStruct;

typedef struct {
	SCD_Struct_PL30 field1;
	SCD_Struct_PL30 field2;
} SCD_Struct_PL39;

typedef struct PLThumbnailDataStoreKeyStruct {
	unsigned type : 3;
	unsigned index : 29;
} PLThumbnailDataStoreKeyStruct;

