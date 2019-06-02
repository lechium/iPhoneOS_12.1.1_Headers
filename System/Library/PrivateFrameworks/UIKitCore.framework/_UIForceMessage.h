/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIForceObservationMessageConstructing.h>

@class NSString;

@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing> {

	BOOL _reset;
	double touchForce;
	unsigned long long stage;
	double timestamp;

}

@property (assign,nonatomic) double touchForce; 
@property (assign,nonatomic) unsigned long long stage; 
@property (assign,nonatomic) double timestamp; 
@property (getter=isReset,nonatomic,readonly) BOOL reset;              //@synthesize reset=_reset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reset;
+(id)observe:(/*^block*/id)arg1 ;
-(double)timestamp;
-(double)touchForce;
-(void)setTimestamp:(double)arg1 ;
-(void)setTouchForce:(double)arg1 ;
-(unsigned long long)stage;
-(void)setStage:(unsigned long long)arg1 ;
-(BOOL)isReset;
@end
