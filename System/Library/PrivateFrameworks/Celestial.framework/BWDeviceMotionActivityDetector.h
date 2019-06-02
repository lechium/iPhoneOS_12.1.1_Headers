/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {

	BWMotionSampleRingBuffer* _motionDataRingBuffer;
	OpaqueFigSimpleMutexRef _ringMutex;
	BOOL _stationary;
	BOOL _newMotionDataAvailable;
	BOOL _robustMethodEnabled;
	BOOL _motionMetadataStatusChecked;

}

@property (getter=isStationary,nonatomic,readonly) BOOL stationary; 
+(void)initialize;
-(void)_detectIfStationary;
-(BOOL)isStationary;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

