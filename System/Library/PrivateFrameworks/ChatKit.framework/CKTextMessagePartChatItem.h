/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;

}

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
-(id)composition;
-(Class)balloonViewClass;
-(id)loadTranscriptText;
-(id)pasteboardItems;
-(id)dragItemProvider;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)shouldUseBigEmoji;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg1 ;
-(BOOL)containsHyperlink;
-(BOOL)showMoneyResults;
-(id)_time;
-(Class)impactBalloonViewClass;
-(NSAttributedString *)fallbackCorruptText;
-(id)sendAnimationText;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
@end

