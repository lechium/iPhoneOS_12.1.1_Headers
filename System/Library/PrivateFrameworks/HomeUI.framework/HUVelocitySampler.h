/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class HOVelocitySample;

@interface HUVelocitySampler : NSObject {

	HOVelocitySample* _currentSample;
	HOVelocitySample* _previousSample;

}

@property (nonatomic,retain) HOVelocitySample * currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) HOVelocitySample * previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(HOVelocitySample *)currentSample;
-(void)setPreviousSample:(HOVelocitySample *)arg1 ;
-(void)setCurrentSample:(HOVelocitySample *)arg1 ;
-(HOVelocitySample *)previousSample;
-(void)addTouchSample:(CGPoint)arg1 ;
-(void)reset;
-(CGVector)velocity;
@end

