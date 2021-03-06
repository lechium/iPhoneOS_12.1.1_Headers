/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, CKMediaObject, NSString;

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(id)composition;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(Class)balloonViewClass;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(CKMediaObject *)mediaObject;
-(unsigned long long)balloonCorners;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(BOOL)canForward;
-(id)pasteboardItems;
-(BOOL)canExport;
-(id)dragItemProvider;
-(NSString *)transferGUID;
-(BOOL)stickersSnapToPoint;
-(BOOL)shouldCacheSize;
-(id)description;
-(BOOL)canCopy;
@end

