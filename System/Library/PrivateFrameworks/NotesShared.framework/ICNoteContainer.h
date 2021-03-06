/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICNoteContainer.h>

@class ICAccount, NSString;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (nonatomic,retain) ICAccount * owner; 
@property (nonatomic,retain) NSString * accountNameForAccountListSorting; 
@property (assign,nonatomic) BOOL isAllNotesContainer; 
@property (assign,nonatomic) BOOL isHiddenNoteContainer; 
@property (nonatomic,retain) NSString * nestedTitleForSorting; 
@property (assign,nonatomic) int sortOrder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ICAccount * noteContainerAccount; 
+(id)keyPathsForValuesAffectingCloudAccount;
-(id)predicateForVisibleNotes;
-(id)predicateForPinnedNotes;
-(id)titleForNavigationBar;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(ICAccount *)noteContainerAccount;
-(id)cloudAccount;
-(id)accountName;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
@end

