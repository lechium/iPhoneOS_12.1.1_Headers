/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class WLEasyToHitCustomButton, UIImage, UIVisualEffectView, PKLinkedApplication, NSString;

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {

	WLEasyToHitCustomButton* _iconButton;
	UIImage* _iconImage;
	UIVisualEffectView* _blurView;
	BOOL _translucent;
	PKLinkedApplication* _linkedApplication;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;                  //@synthesize translucent=_translucent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLinkedApplication:(id)arg1 ;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(PKLinkedApplication *)linkedApplication;
-(void)tapped:(id)arg1 ;
-(void)_updateWithIconImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBlurMask;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(BOOL)isTranslucent;
-(void)setTranslucent:(BOOL)arg1 ;
@end
