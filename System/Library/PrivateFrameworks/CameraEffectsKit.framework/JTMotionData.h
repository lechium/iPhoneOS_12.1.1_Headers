/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class CMMotionManager, NSOperationQueue, CMAttitude;

@interface JTMotionData : NSObject {

	BOOL _started;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;
	CMAttitude* _refAttitude;
	double _yawRadians;
	double _rollRadians;
	double _pitchRadians;
	SCD_Struct_JT18 _currentAttitude;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
@property (nonatomic,retain) CMAttitude * refAttitude;                     //@synthesize refAttitude=_refAttitude - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT18 currentAttitude;              //@synthesize currentAttitude=_currentAttitude - In the implementation block
@property (assign,nonatomic) double yawRadians;                            //@synthesize yawRadians=_yawRadians - In the implementation block
@property (assign,nonatomic) double rollRadians;                           //@synthesize rollRadians=_rollRadians - In the implementation block
@property (assign,nonatomic) double pitchRadians;                          //@synthesize pitchRadians=_pitchRadians - In the implementation block
@property (assign) BOOL started;                                           //@synthesize started=_started - In the implementation block
+(id)sharedInstance;
-(void)startMotion;
-(void)stopMotion;
-(double)rollRadians;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(CMMotionManager *)motionManager;
-(NSOperationQueue *)motionQueue;
-(SCD_Struct_JT18)getOrientation:(SCD_Struct_JT18)arg1 ;
-(void)setYawRadians:(double)arg1 ;
-(void)setRollRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(void)setCurrentAttitude:(SCD_Struct_JT18)arg1 ;
-(SCD_Struct_JT18)syntheticOrientation;
-(double)yawRadians;
-(double)pitchRadians;
-(CMAttitude *)refAttitude;
-(void)setRefAttitude:(CMAttitude *)arg1 ;
-(SCD_Struct_JT18)currentAttitude;
-(id)init;
-(SCD_Struct_JT18)currentOrientation;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
@end

