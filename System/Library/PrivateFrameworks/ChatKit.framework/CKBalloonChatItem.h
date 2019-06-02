/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSDate, IMHandle;

@interface CKBalloonChatItem : CKChatItem

@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) unsigned long long balloonCorners; 
@property (nonatomic,readonly) char tailShape; 
@property (nonatomic,readonly) char balloonShape; 
@property (nonatomic,readonly) Class balloonViewClass; 
@property (nonatomic,readonly) Class impactBalloonViewClass; 
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) BOOL shouldCacheSize; 
-(NSDate *)time;
-(id)contact;
-(char)balloonOrientation;
-(Class)balloonViewClass;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(char)balloonShape;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(id)loadTranscriptDrawerText;
-(id)cellIdentifier;
-(BOOL)shouldCacheSize;
-(Class)impactBalloonViewClass;
-(char)tailShape;
-(BOOL)needsPreservedAspectRatio;
-(BOOL)needsAdjustedTextAlignmentInsets;
-(id)description;
-(UIEdgeInsets)contentInsets;
-(IMHandle *)sender;
-(BOOL)isEditable;
-(Class)cellClass;
@end

