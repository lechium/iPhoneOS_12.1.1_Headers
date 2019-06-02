/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ARKit/ARKit-Structs.h>
@class NSObject, NSDictionary;

@interface ARODTHandleManager : NSObject {

	CV3DODTContextRef _odtHandle;
	NSObject*<OS_dispatch_semaphore> _odtHandleSemaphore;
	unsigned long long _odtCounter;
	NSDictionary* _options;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedImages; 
@property (nonatomic,readonly) BOOL continuousDetection; 
@property (nonatomic,readonly) BOOL deterministicMode; 
+(long long)actualNumberOfImagesTracked:(long long)arg1 ;
-(id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(BOOL)arg2 deterministicMode:(BOOL)arg3 ;
-(int)addReferenceImage:(id)arg1 tracking:(BOOL)arg2 pObjectID:(unsigned long long*)arg3 ;
-(long long)maximumNumberOfTrackedImages;
-(int)trackPlanarObjectForImageData:(id)arg1 imageContext:(const void*)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4 ;
-(BOOL)deterministicMode;
-(BOOL)continuousDetection;
-(id)initWithMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)releaseODTHandle;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
@end

