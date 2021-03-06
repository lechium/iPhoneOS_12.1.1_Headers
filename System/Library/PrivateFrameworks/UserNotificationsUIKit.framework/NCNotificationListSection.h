/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol NCNotificationListSectionDelegate;
@class NSString, NSMutableOrderedSet, NSHashTable, NSDate, NSArray;

@interface NCNotificationListSection : NSObject <BSDescriptionProviding> {

	id<NCNotificationListSectionDelegate> _delegate;
	NSString* _title;
	NSString* _identifier;
	NSMutableOrderedSet* _notificationListItems;
	NSHashTable* _notificationListItemsHashTable;

}

@property (nonatomic,retain) NSDate * sectionDate; 
@property (nonatomic,retain) NSMutableOrderedSet * notificationListItems;                        //@synthesize notificationListItems=_notificationListItems - In the implementation block
@property (nonatomic,retain) NSHashTable * notificationListItemsHashTable;                       //@synthesize notificationListItemsHashTable=_notificationListItemsHashTable - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allNotificationRequests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSArray *)allNotificationRequests;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(BOOL)containsNotificationRequestMatchingRequest:(id)arg1 ;
-(unsigned long long)removeNotificationRequest:(id)arg1 ;
-(unsigned long long)insertNotificationRequest:(id)arg1 ;
-(unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1 ;
-(id)notificationRequestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)modifyNotificationRequest:(id)arg1 ;
-(id)_coalescingIdentifierForNotificationRequest:(id)arg1 ;
-(unsigned long long)insertionIndexForNotificationRequest:(id)arg1 ;
-(id)notificationListItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)insertNotificationListItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)removeNotificationListItem:(id)arg1 ;
-(unsigned long long)indexForNotificationListItem:(id)arg1 ;
-(NSDate *)sectionDate;
-(void)setSectionDate:(NSDate *)arg1 ;
-(BOOL)containsNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1 ;
-(long long)indexForNotificationRequest:(id)arg1 ;
-(NSMutableOrderedSet *)notificationListItems;
-(id)_notificationRequestItemForNotificationRequest:(id)arg1 ;
-(BOOL)_containsNotificationListItem:(id)arg1 ;
-(unsigned long long)_indexOfListItemMatchingListItem:(id)arg1 ;
-(unsigned long long)_insertionIndexForNotificationRequestItem:(id)arg1 ;
-(NSHashTable *)notificationListItemsHashTable;
-(id)_notificationRequestForListItem:(id)arg1 ;
-(id)_notificationRequestItemForListItem:(id)arg1 ;
-(BOOL)_shouldInsertForExpandedStackNotificationRequest:(id)arg1 ;
-(unsigned long long)_insertionIndexIfExistingCoalescedNotificationForNotificationRequest:(id)arg1 ;
-(unsigned long long)_insertionIndexIfNonExpandedNotificationRequest:(id)arg1 ;
-(long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2 ;
-(unsigned long long)_nextIndexOfExpandedNotificationStackStartingAtIndex:(unsigned long long)arg1 coalescingIdentifier:(id)arg2 ;
-(unsigned long long)_indexOfListItemWithCoalescingIdentifier:(id)arg1 ;
-(void)setNotificationListItems:(NSMutableOrderedSet *)arg1 ;
-(void)setNotificationListItemsHashTable:(NSHashTable *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(unsigned long long)count;
-(NSString *)debugDescription;
-(void)setDelegate:(id<NCNotificationListSectionDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<NCNotificationListSectionDelegate>)delegate;
@end

