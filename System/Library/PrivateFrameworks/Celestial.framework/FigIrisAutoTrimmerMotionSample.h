/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary, NSArray, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	double _timestamp;
	double _deltaPeriod;
	NSDictionary* _inferences;
	NSArray* _faces;
	NSMutableDictionary* _intermediateCalculations;
	SCD_Struct_Fi81 _gravity;
	SCD_Struct_BW2 _originatingFrameTime;
	SCD_Struct_Fi82 _attitude;
	SCD_Struct_Fi82 _delta;
	SCD_Struct_Fi82 _accel;

}

@property (nonatomic,readonly) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 cmTimestamp; 
@property (nonatomic,readonly) SCD_Struct_BW2 originatingFrameTime;                         //@synthesize originatingFrameTime=_originatingFrameTime - In the implementation block
@property (nonatomic,readonly) double deltaPeriod;                                          //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi82 attitude;                                    //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi82 delta;                                       //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi82 accel;                                       //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi81 gravity;                                     //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,retain) NSDictionary * inferences;                                     //@synthesize inferences=_inferences - In the implementation block
@property (nonatomic,retain) NSArray * faces;                                               //@synthesize faces=_faces - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * intermediateCalculations;              //@synthesize intermediateCalculations=_intermediateCalculations - In the implementation block
-(NSDictionary *)inferences;
-(id)initWithAttitude:(const SCD_Struct_Fi82*)arg1 gravity:(const SCD_Struct_Fi81*)arg2 motionTimestamp:(double)arg3 frameTimestamp:(SCD_Struct_BW2)arg4 previousSample:(id)arg5 ;
-(SCD_Struct_Fi82)attitudeRelativeTo:(id)arg1 ;
-(void)prepareIntermediates:(long long)arg1 ;
-(SCD_Struct_BW2)cmTimestamp;
-(SCD_Struct_BW2)originatingFrameTime;
-(double)deltaPeriod;
-(SCD_Struct_Fi82)accel;
-(void)setInferences:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)intermediateCalculations;
-(NSArray *)faces;
-(void)setFaces:(NSArray *)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(SCD_Struct_Fi81)gravity;
-(SCD_Struct_Fi82)attitude;
-(SCD_Struct_Fi82)delta;
@end

