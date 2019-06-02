/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, NSString;

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController> {

	BOOL _utteranceUserInteractionEnabled;
	BOOL _virgin;
	AceObject* _aceObject;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AceObject * aceObject;                                                                      //@synthesize aceObject=_aceObject - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                              //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
-(AceObject *)aceObject;
-(BOOL)isVirgin;
-(void)setAceObject:(AceObject *)arg1 ;
-(double)desiredHeight;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
-(void)_aceObjectViewControllerWillBeRemoved;
-(BOOL)_shouldSkipAnimationsInAlternateSpeeds;
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_privateDelegate;
@end

