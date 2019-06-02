/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIGestureStudyParticipating.h>

@class NSString;

@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {

	double _startTimestamp;
	double _allowableMovement;
	CGPoint _originalCentroid;

}

@property (assign,nonatomic) double startTimestamp;                 //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalCentroid;              //@synthesize originalCentroid=_originalCentroid - In the implementation block
@property (assign,nonatomic) double allowableMovement;              //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)reset;
-(double)duration;
-(NSString *)eventName;
-(double)movement;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setOriginalCentroid:(CGPoint)arg1 ;
-(double)startTimestamp;
-(CGPoint)originalCentroid;
@end

