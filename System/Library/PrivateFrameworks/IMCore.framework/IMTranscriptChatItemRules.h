/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSArray, NSMutableArray, IMChatItem, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;
	NSArray* _items;
	NSMutableArray* _chatItems;
	IMChatItem* _nextStaleChatItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2 ;
+(BOOL)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2 ;
-(id)_initWithChat:(id)arg1 ;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1 ;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 ;
-(id)testChatItems;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(BOOL)shouldShowExpressiveMessageTextAsText:(id)arg1 ;
-(BOOL)_shouldShowEffectPlayButtonForMessage:(id)arg1 ;
-(void)_processChatItemsForBreadcrumbs:(id)arg1 ;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2 ;
-(void)_processChatItemsForReplayButton:(id)arg1 ;
-(void)_processChatItemsForAttribution:(id)arg1 ;
-(BOOL)_shouldDisplayAttributionInfo:(id)arg1 ;
-(id)_effectControlForChatItem:(id)arg1 ;
-(id)_attributionChatItemForChatItem:(id)arg1 ;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
-(BOOL)shouldShowRaiseMessageStatus;
-(id)_items;
-(void)_setItems:(id)arg1 ;
@end

