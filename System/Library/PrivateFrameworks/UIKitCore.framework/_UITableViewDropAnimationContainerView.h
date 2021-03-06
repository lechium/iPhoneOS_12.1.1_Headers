/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _UITableViewDropAnimationContainerView : UIView {

	long long _activeDropAnimationCount;
	double _originalTargetCenterY;
	CGPoint __tableViewContainerOffsetFromTargetCenter;

}

@property (assign,nonatomic) long long activeDropAnimationCount;                             //@synthesize activeDropAnimationCount=_activeDropAnimationCount - In the implementation block
@property (assign,nonatomic) double originalTargetCenterY;                                   //@synthesize originalTargetCenterY=_originalTargetCenterY - In the implementation block
@property (nonatomic,readonly) NSArray * cells; 
@property (nonatomic,readonly) BOOL hasCompletedAllDropAnimations; 
@property (assign,nonatomic) CGPoint _tableViewContainerOffsetFromTargetCenter;              //@synthesize _tableViewContainerOffsetFromTargetCenter=__tableViewContainerOffsetFromTargetCenter - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)init;
-(void)setCenter:(CGPoint)arg1 ;
-(CGPoint)_tableViewContainerOffsetFromTargetCenter;
-(void)beginDropAnimation;
-(void)endDropAnimation;
-(BOOL)hasCompletedAllDropAnimations;
-(NSArray *)cells;
-(void)setOriginalTargetCenterY:(double)arg1 ;
-(double)originalTargetCenterY;
-(void)set_tableViewContainerOffsetFromTargetCenter:(CGPoint)arg1 ;
-(void)updateOffsetFromTargetCenterIfNeeded;
-(long long)activeDropAnimationCount;
-(void)setActiveDropAnimationCount:(long long)arg1 ;
@end

