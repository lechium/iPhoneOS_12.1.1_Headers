/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationSectionList.h>

@class NSMutableArray;

@interface NCNotificationChronologicalList : NCNotificationSectionList {

	NSMutableArray* _sections;

}

@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
-(unsigned long long)sectionCount;
-(void)_removeSection:(id)arg1 ;
-(void)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleLocaleChange;
-(void)_handleTimeZoneChange;
-(id)notificationRequestAtIndexPath:(id)arg1 ;
-(unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1 ;
-(id)titleForSectionIndex:(unsigned long long)arg1 ;
-(id)identifierForSectionIndex:(unsigned long long)arg1 ;
-(void)clearAllSections;
-(void)_updateListForDateChange;
-(long long)sectionIndexForListSectionIdentifier:(id)arg1 ;
-(id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1 ;
-(id)_existingSectionContainingNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1 ;
-(id)_existingSectionForDate:(id)arg1 ;
-(id)_newSectionForDate:(id)arg1 ;
-(id)_existingSectionForNotificationRequest:(id)arg1 ;
-(void)_reloadSectionHeaders;
-(void)_rebuildSectionsList;
-(id)_titleForDate:(id)arg1 ;
-(id)_simpleDateFromDate:(id)arg1 ;
-(id)_identifierForDate:(id)arg1 ;
-(void)clearSectionWithIdentifier:(id)arg1 ;
-(id)notificationRequestsForSectionIdentifier:(id)arg1 ;
-(id)_allSections;
-(id)_allNotificationRequests;
-(id)_sectionContainingNotificationRequest:(id)arg1 ;
-(id)_newSectionForNotificationRequest:(id)arg1 ;
-(unsigned long long)_currentIndexForSection:(id)arg1 ;
-(unsigned long long)_insertionIndexForSection:(id)arg1 ;
-(id)_targetIndexPathForNotificationRequest:(id)arg1 ;
-(id)init;
-(NSMutableArray *)sections;
-(void)setSections:(NSMutableArray *)arg1 ;
@end

