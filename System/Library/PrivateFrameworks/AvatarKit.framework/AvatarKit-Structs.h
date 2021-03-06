/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	double field1;
	BOOL field2;
	float field3[64];
	float field4[64];
	float field5[1];
	float field6[1];
} SCD_Struct_AV0;

typedef struct {
	double timestamp;
	 translation;
	 orientation;
	BOOL cameraSpace;
	float blendShapeWeights_smooth[64];
	float blendShapeWeights_raw[64];
	float parameters_smooth[1];
	float parameters_raw[1];
} SCD_Struct_AV1;

typedef struct {
	[4 columns];
} SCD_Struct_AV2;

typedef struct {
	double refTimestamp;
	double arDelegateTimestamp;
} SCD_Struct_AV3;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	id field1;
	id field2;
	long long field3;
} SCD_Struct_AV7;

typedef struct SCNVector3 {
	float x;
	float y;
	float z;
} SCNVector3;

typedef struct {
	double totalLatency;
	double arKitLatency;
	double updateSyncLatency;
	double metalLatency;
	double timeBetweenARFrame;
	unsigned fps;
	double audioTime;
	unsigned droppedFrame;
	BOOL doubleBuffer;
	unsigned onlineShaderCompilationCount;
} SCD_Struct_AV9;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	os_unfair_lock_s lock;
	/*function pointer*/void* head;
	int current;
	int capacity;
	BOOL reached_max_capacity;
} SCD_Struct_AV12;

typedef struct CGImage* CGImageRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV14;

typedef struct SCNVector4 {
	float x;
	float y;
	float z;
	float w;
} SCNVector4;

