/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UINavigationController.h>

@interface FARestrictionsPINNavigationController : UINavigationController {

	unsigned long long _internalSupportedOrientations;
	CGSize _lastKnownScreenSize;

}

@property (assign) unsigned long long internalSupportedOrientations;              //@synthesize internalSupportedOrientations=_internalSupportedOrientations - In the implementation block
@property (assign) CGSize lastKnownScreenSize;                                    //@synthesize lastKnownScreenSize=_lastKnownScreenSize - In the implementation block
+(BOOL)fa_shouldAnimate;
+(BOOL)fa_isPad;
-(CGSize)lastKnownScreenSize;
-(void)_adjustToScreenBounds;
-(unsigned long long)internalSupportedOrientations;
-(void)setLastKnownScreenSize:(CGSize)arg1 ;
-(void)_freezeSupportedOrientations;
-(void)setInternalSupportedOrientations:(unsigned long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
@end

