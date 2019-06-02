/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIVisualEffectView, _UIInteractiveHighlightEnvironment, _UIPortalView;

@interface _UIInteractiveHighlightEffect : NSObject {

	UIView* _view;
	UIVisualEffectView* _effectView;
	_UIInteractiveHighlightEnvironment* _environment;
	UIView* _superview;
	_UIPortalView* _portalView;
	UIEdgeInsets _preferredContentInsets;

}

@property (assign,nonatomic,__weak) UIView * view;                                          //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * effectView;                        //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) _UIInteractiveHighlightEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic,__weak) UIView * superview;                                     //@synthesize superview=_superview - In the implementation block
@property (assign,nonatomic,__weak) _UIPortalView * portalView;                             //@synthesize portalView=_portalView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                           //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
-(void)dealloc;
-(UIView *)superview;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(_UIPortalView *)portalView;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(_UIInteractiveHighlightEnvironment *)environment;
-(void)setSuperview:(UIView *)arg1 ;
-(void)setEnvironment:(_UIInteractiveHighlightEnvironment *)arg1 ;
-(void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeEffect;
@end

