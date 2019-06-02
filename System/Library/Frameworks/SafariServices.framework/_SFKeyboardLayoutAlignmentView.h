/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class NSNotification, NSLayoutConstraint;

@interface _SFKeyboardLayoutAlignmentView : UIView {

	NSNotification* _keyboardChangeNotificationForUpdateConstraints;
	CGRect lastKnownKeyboardRect;
	NSLayoutConstraint* bottomConstraint;
	NSLayoutConstraint* widthConstraint;
	NSLayoutConstraint* heightConstraint;
	NSLayoutConstraint* disambiguatingLeftConstraint;
	BOOL _automaticKeyboardFrameTrackingDisabled;

}

@property (assign,nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;              //@synthesize automaticKeyboardFrameTrackingDisabled=_automaticKeyboardFrameTrackingDisabled - In the implementation block
-(void)_addConstraints;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutomaticKeyboardFrameTrackingDisabled:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_keyboardChanged:(id)arg1 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg1 ;
-(CGRect)_frameInBoundsForKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(CGRect)arg1 ;
-(void)_updateConstraintsForKeyboardNotification:(id)arg1 ;
-(void)_removeConstraints;
-(void)_matchInitialKeyboardFrame;
-(BOOL)automaticKeyboardFrameTrackingDisabled;
@end

