/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDelegate <NSObject>
@optional
-(void)groupStackView:(id)arg1 wantsTopContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 wantsBottomContentSeparatorWithVisibility:(double)arg2 animated:(BOOL)arg3;
-(BOOL)groupStackViewShouldAllowReordering:(id)arg1;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(BOOL)arg3;
-(void)groupStackViewDidChangeCoachingState:(id)arg1;

@required
-(unsigned long long)suppressedContent;
-(void)reloadGroupsForGroupStackView:(id)arg1;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
-(void)groupStackViewDidBeginReordering:(id)arg1;
-(void)groupStackViewDidEndReordering:(id)arg1;

@end

