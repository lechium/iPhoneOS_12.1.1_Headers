/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICNoteListSortUtilities : NSObject
+(id)sortDescriptorsForType:(long long)arg1 ;
+(id)sortDescriptorsForPinnedNotes;
+(long long)sortTypeForTag:(long long)arg1 ;
+(void)setCurrentNoteListSortType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentType;
+(id)descriptionForNoteListSortType:(long long)arg1 ;
+(void)setCurrentNoteListSortTypeByTag:(long long)arg1 ;
+(BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1 ;
+(long long)tagForSortType:(long long)arg1 ;
+(id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1 ;
+(long long)currentNoteListSortType;
@end

