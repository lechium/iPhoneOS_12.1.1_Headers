/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlPresentationCoordinatorDelegate <NSObject>
@optional
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(id)detailViewURLHandlerForPresentationCoordinator:(id)arg1;
-(void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didBeginPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 willEndPresentationWithContext:(id)arg2;
-(void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
-(long long)preferredModalPresentationStyleForPresentationCoordinator:(id)arg1;

@required
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
-(id)traitCollectionForPresentationCoordinator:(id)arg1;
-(id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(CGPoint)arg2;
-(void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
-(void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;

@end

