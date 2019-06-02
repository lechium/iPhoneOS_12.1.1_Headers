/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VCUIManageVoiceShortcutViewControllerDelegate.h>

@protocol VCUICreateVoiceShortcutViewControllerDelegate, VCActionDonation;
@class VCVoiceShortcutClient, VCUIManageVoiceShortcutViewController, NSString;

@interface VCUICreateVoiceShortcutViewController : UIViewController <VCUIManageVoiceShortcutViewControllerDelegate> {

	BOOL _hasAppeared;
	id<VCUICreateVoiceShortcutViewControllerDelegate> _delegate;
	id<VCActionDonation> _actionDonation;
	VCVoiceShortcutClient* _voiceShortcutClient;
	VCUIManageVoiceShortcutViewController* _manageVoiceShortcutViewController;

}

@property (nonatomic,retain) VCUIManageVoiceShortcutViewController * manageVoiceShortcutViewController;              //@synthesize manageVoiceShortcutViewController=_manageVoiceShortcutViewController - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                                       //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic,__weak) id<VCUICreateVoiceShortcutViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<VCActionDonation> actionDonation;                                                  //@synthesize actionDonation=_actionDonation - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutClient * voiceShortcutClient;                                          //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(VCVoiceShortcutClient *)voiceShortcutClient;
-(void)setHasAppeared:(BOOL)arg1 ;
-(BOOL)hasAppeared;
-(void)setDelegate:(id<VCUICreateVoiceShortcutViewControllerDelegate>)arg1 ;
-(id<VCUICreateVoiceShortcutViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<VCActionDonation>)actionDonation;
-(void)manageVoiceShortcutViewControllerDidCancel:(id)arg1 ;
-(void)manageVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2 ;
-(void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1 ;
-(VCUIManageVoiceShortcutViewController *)manageVoiceShortcutViewController;
-(void)setManageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 ;
-(id)initWithActionDonation:(id)arg1 voiceShortcutClient:(id)arg2 ;
@end

