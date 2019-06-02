/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMChatItemRules <NSObject>
@required
-(id)_initWithChat:(id)arg1;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
-(id)_items;
-(void)_setItems:(id)arg1;

@end

