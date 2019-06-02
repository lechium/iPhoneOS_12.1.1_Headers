/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@protocol SBSAccelerometerDelegate;
@class BKSAccelerometer, NSString;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {

	id<SBSAccelerometerDelegate> _delegate;
	BKSAccelerometer* _bksMirror;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval; 
@property (assign,nonatomic) float xThreshold; 
@property (assign,nonatomic) float yThreshold; 
@property (assign,nonatomic) float zThreshold; 
@property (assign,nonatomic) BOOL orientationEventsEnabled; 
@property (assign,nonatomic,__weak) id<SBSAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
-(int)currentDeviceOrientation;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<SBSAccelerometerDelegate>)arg1 ;
-(id<SBSAccelerometerDelegate>)delegate;
-(void)setUpdateInterval:(double)arg1 ;
-(double)updateInterval;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
@end
