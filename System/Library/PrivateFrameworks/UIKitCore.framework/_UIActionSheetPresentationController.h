/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UIActionSheetCompactPresentationControllerDelegate.h>

@protocol UIActionSheetPresentationControllerDelegate;
@class NSString, _UIActionSheetCompactPresentationController;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate> {

	BOOL _dismissActionUsesShorterHeightWhenCompactVertically;
	BOOL _avoidsKeyboardDisabled;
	NSString* _dismissActionTitle;
	id<UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
	_UIActionSheetCompactPresentationController* _compactPresentationController;

}

@property (nonatomic,retain) _UIActionSheetCompactPresentationController * compactPresentationController;              //@synthesize compactPresentationController=_compactPresentationController - In the implementation block
@property (assign,nonatomic) BOOL avoidsKeyboardDisabled;                                                              //@synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled - In the implementation block
@property (nonatomic,copy) NSString * dismissActionTitle;                                                              //@synthesize dismissActionTitle=_dismissActionTitle - In the implementation block
@property (assign,nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically;                                 //@synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically - In the implementation block
@property (assign,nonatomic,__weak) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate;               //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_compactPresentationController;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)_exceptionStringForNilSourceViewOrBarButtonItem;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(id<UIActionSheetPresentationControllerDelegate>)actionSheetDelegate;
-(BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1 ;
-(void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1 ;
-(BOOL)avoidsKeyboardDisabled;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(void)setDismissActionTitle:(NSString *)arg1 ;
-(NSString *)dismissActionTitle;
-(void)beginPseudoAlertPresentationMode;
-(void)endPseudoAlertPresentationMode;
-(void)setDismissActionUsesShorterHeightWhenCompactVertically:(BOOL)arg1 ;
-(BOOL)dismissActionUsesShorterHeightWhenCompactVertically;
-(void)setAvoidsKeyboardDisabled:(BOOL)arg1 ;
-(void)setActionSheetDelegate:(id<UIActionSheetPresentationControllerDelegate>)arg1 ;
-(_UIActionSheetCompactPresentationController *)compactPresentationController;
-(id)_visualStyleForTraitCollection:(id)arg1 ;
-(void)setCompactPresentationController:(_UIActionSheetCompactPresentationController *)arg1 ;
-(long long)_presentationContextForViewController:(id)arg1 ;
@end

