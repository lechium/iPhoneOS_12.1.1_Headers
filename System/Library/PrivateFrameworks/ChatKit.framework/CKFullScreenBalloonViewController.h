/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKMessageAcknowledgmentPickerBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKFullScreenBalloonViewControllerDelegate;
@class CKMessagePartChatItem, UIGestureRecognizer, CKMessageAcknowledgmentPickerBarViewController, UIView, NSString;

@interface CKFullScreenBalloonViewController : UIViewController <CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate, CKAdaptivePresentedControllerProtocol> {

	BOOL _isGroupConversation;
	BOOL _showActionMenu;
	CKMessagePartChatItem* _chatItem;
	UIGestureRecognizer* _tapRecognizer;
	id<CKFullScreenBalloonViewControllerDelegate> _delegate;
	CKMessageAcknowledgmentPickerBarViewController* _pickerBar;
	UIView* _tintView;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) UIGestureRecognizer * tapRecognizer;                                          //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) id<CKFullScreenBalloonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKMessageAcknowledgmentPickerBarViewController * pickerBar;                 //@synthesize pickerBar=_pickerBar - In the implementation block
@property (nonatomic,readonly) UIView * tintView;                                                          //@synthesize tintView=_tintView - In the implementation block
@property (nonatomic,readonly) CGRect gradientFrame;                                                       //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,readonly) BOOL isGroupConversation;                                                   //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (nonatomic,readonly) BOOL showActionMenu;                                                        //@synthesize showActionMenu=_showActionMenu - In the implementation block
@property (nonatomic,readonly) CKMessagePartChatItem * chatItem;                                           //@synthesize chatItem=_chatItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isGroupConversation;
-(BOOL)wantsWindowedPresentation;
-(BOOL)preserveModalPresentationStyle;
-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(void)setTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)tapRecognizer;
-(CKMessagePartChatItem *)chatItem;
-(CGRect)gradientFrame;
-(void)removeTapRecogonizer;
-(void)dismissTapGestureRecognized:(id)arg1 ;
-(void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)performInitialAnimations;
-(void)performClosingAnimationsWithSendAnimation:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_performClosingAnimationsWithSendAnimation:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2 ;
-(id)initWithChatItem:(id)arg1 gradientReferenceView:(id)arg2 isGroupConversation:(BOOL)arg3 showActionMenu:(BOOL)arg4 delegate:(id)arg5 ;
-(void)performSendAndCloseAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)performCancelAnimationWithCompletion:(/*^block*/id)arg1 ;
-(CKMessageAcknowledgmentPickerBarViewController *)pickerBar;
-(BOOL)showActionMenu;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(id<CKFullScreenBalloonViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(UIView *)tintView;
@end

