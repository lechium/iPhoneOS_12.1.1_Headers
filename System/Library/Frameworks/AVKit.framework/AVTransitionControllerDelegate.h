/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTransitionControllerDelegate <NSObject>
@required
-(void)transitionController:(id)arg1 willBeginPresentingViewController:(id)arg2;
-(void)transitionController:(id)arg1 willBeginDismissingViewController:(id)arg2;
-(id)transitionController:(id)arg1 targetViewForDismissingViewController:(id)arg2;
-(BOOL)transitionController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(id)transitionControllerContentSourceViewController:(id)arg1;
-(BOOL)transitionControllerCanCreateVideoOnlyWindow:(id)arg1;
-(id)transitionControllerBackgroundColorForInteractivelyTransitioningPresentedViewController:(id)arg1;
-(BOOL)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg1;
-(BOOL)transitionControllerCanBeginInteractivePresentationTransition:(id)arg1;
-(void)transitionControllerBeginInteractivePresentationTransition:(id)arg1;
-(void)transitionControllerBeginInteractiveDismissalTransition:(id)arg1;
-(void)transitionController:(id)arg1 prepareForFinishingInteractiveTransition:(/*^block*/id)arg2;
-(void)transitionController:(id)arg1 transitionWillComplete:(BOOL)arg2;

@end
