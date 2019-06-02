/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NURenderer, NUSurfaceStorage, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;
#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSObject, NSMutableArray, NSDictionary, NSError;

@interface PILongExposureAccumulator : NSObject {

	SCD_Struct_PI1 _pixelSize;
	id<NURenderer> _renderer;
	id<NUSurfaceStorage> _temporaryDestinationStorage;
	id<NUSurfaceStorage> _averageAccumulationStorage;
	id<NUSurfaceStorage> _minimumAccumulationStorage;
	id<NUSurfaceStorage> _maximumAccumulationStorage;
	long long _frameCount;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _accumQueue;
	NSObject*<OS_dispatch_semaphore> _accumSemaphore;
	NSObject*<OS_dispatch_semaphore> _readySemaphore;
	NSObject*<OS_dispatch_group> _doneGroup;
	NSMutableArray* _inputFrames;
	BOOL _finished;
	NSDictionary* _imageOptions;
	NSError* __accumError;

}

@property (retain) NSError * _accumError;                  //@synthesize _accumError=__accumError - In the implementation block
@property (readonly) BOOL isReadyForMoreData; 
-(id)workingColorSpace;
-(void)_markAsFinished;
-(void)waitUntilDone;
-(BOOL)start:(out id*)arg1 ;
-(void)set_accumError:(NSError *)arg1 ;
-(BOOL)_isReadyForMoreData;
-(NSError *)_accumError;
-(void)_appendInputFrame:(id)arg1 ;
-(id)_nextInputFrame;
-(void)_initializeAccumulation;
-(id)nextInputFrame;
-(void)_accumulate:(id)arg1 ;
-(BOOL)_initializeAccumulation:(out id*)arg1 ;
-(BOOL)_initializeStorage:(id)arg1 image:(id)arg2 error:(out id*)arg3 ;
-(BOOL)_accumulate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_exportOutputImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 toURL:(id)arg4 uti:(id)arg5 error:(out id*)arg6 ;
-(id)_dynamismMapWithMinImage:(id)arg1 maxImage:(id)arg2 extent:(SCD_Struct_PI2)arg3 ;
-(id)initWithSize:(SCD_Struct_PI1)arg1 renderer:(id)arg2 ;
-(BOOL)isReadyForMoreData;
-(BOOL)accumulate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)writeLongExposureImage:(id)arg1 UTI:(id)arg2 colorSpace:(id)arg3 error:(out id*)arg4 ;
-(BOOL)writeMaskImage:(id)arg1 UTI:(id)arg2 error:(out id*)arg3 ;
-(void)markAsFinished;
-(void)dealloc;
-(void)cancel;
-(void)_start;
@end

