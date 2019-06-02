/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BFFPasscodeViewControllerDelegate.h>
#import <libobjc.A.dylib/BYFollowUpFlowControlling.h>

@class BFFPasscodeViewController;

@interface BYFollowUpPasscodeController : NSObject <BFFPasscodeViewControllerDelegate, BYFollowUpFlowControlling> {

	BYFollowUpPasscodeController* _selfReference;
	BFFPasscodeViewController* _passcodeViewController;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(id)followUpPasscodeController;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_userDidTapCancelButton:(id)arg1 ;
-(void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2 ;
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

