/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageCell.h>

@class CKTypingView;

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {

	CKTypingView* _typingView;

}

@property (nonatomic,retain) CKTypingView * typingView;                                            //@synthesize typingView=_typingView - In the implementation block
@property (nonatomic,retain) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setIndicatorLayer:(CALayer*<IMTypingIndicatorLayerProtocol>)arg1 ;
-(void)startPulseAnimation;
-(void)setTypingView:(CKTypingView *)arg1 ;
-(CKTypingView *)typingView;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimation;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)didMoveToWindow;
-(void)setOrientation:(char)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

