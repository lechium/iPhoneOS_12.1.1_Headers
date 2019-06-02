/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISnippetViewControllerDelegatePrivate <NSObject>
@required
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2;
-(BOOL)siriViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)siriViewControllerWillBeginEditing:(id)arg1;
-(void)siriViewControllerDidEndEditing:(id)arg1;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(id)arg4;
-(void)siriViewControllerRequestTearDownEditingViewController:(id)arg1;
-(id)localeForSiriViewController:(id)arg1;
-(void)siriSnippetViewController:(id)arg1 didPresentViewController:(id)arg2;
-(void)siriSnippetViewController:(id)arg1 didDismissViewController:(id)arg2;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)siriSnippetViewController:(id)arg1 didRequestKeyboardWithVisibility:(BOOL)arg2;
-(void)cancelSpeakingForSiriViewController:(id)arg1;
-(void)removeSiriViewController:(id)arg1;

@end
