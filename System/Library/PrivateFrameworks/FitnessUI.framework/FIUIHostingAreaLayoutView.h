/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface FIUIHostingAreaLayoutView : UIView {

	UIView* _hostedView;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(id)blackBackgroundViewHostingView:(id)arg1 ;
+(id)viewHostingView:(id)arg1 ;
-(void)setHostedView:(UIView *)arg1 ;
-(UIView *)hostedView;
-(CGSize)intrinsicContentSize;
-(BOOL)translatesAutoresizingMaskIntoConstraints;
@end

