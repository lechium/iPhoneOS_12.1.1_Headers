/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlViewProfile, MTMaterialView, NSString;

@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	HUQuickControlViewProfile* _profile;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	id _value;
	MTMaterialView* _backgroundView;

}

@property (nonatomic,retain) id value;                                                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) HUQuickControlViewProfile * profile;                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive;                       //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(MTMaterialView *)backgroundView;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
@end

