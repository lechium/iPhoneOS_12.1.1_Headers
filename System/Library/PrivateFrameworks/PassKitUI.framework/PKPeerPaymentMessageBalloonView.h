/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class PKPeerPaymentBubbleView, CKTranscriptPluginBalloonView;

@interface PKPeerPaymentMessageBalloonView : UIView {

	PKPeerPaymentBubbleView* _bubbleView;
	long long _peerPaymentType;
	CKTranscriptPluginBalloonView* _balloonView;

}

@property (nonatomic,retain) CKTranscriptPluginBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentBubbleView * bubbleView;                   //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,readonly) long long peerPaymentType;                              //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
-(CKTranscriptPluginBalloonView *)balloonView;
-(void)setBalloonView:(CKTranscriptPluginBalloonView *)arg1 ;
-(long long)peerPaymentType;
-(void)_updateTailOrientation;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
-(PKPeerPaymentBubbleView *)bubbleView;
-(void)layoutSubviews;
@end

