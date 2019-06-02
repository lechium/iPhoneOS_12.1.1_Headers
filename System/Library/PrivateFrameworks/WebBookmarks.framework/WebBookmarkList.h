/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, WebBookmarkListQuery, WebBookmarkCollection;

@interface WebBookmarkList : NSObject {

	NSMutableArray* _bookmarks;
	unsigned _bookmarkCount;
	unsigned _skipOffset;
	WebBookmarkListQuery* _query;
	WebBookmarkCollection* _collection;

}

@property (nonatomic,readonly) int folderID; 
-(id)bookmarkAtIndex:(unsigned)arg1 ;
-(unsigned)_reverseOrderIndex:(unsigned)arg1 ;
-(id)initWithQuery:(id)arg1 skipOffset:(unsigned)arg2 collection:(id)arg3 ;
-(void)_moveBookmarkAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(id)bookmarkArrayRequestingCount:(unsigned)arg1 ;
-(unsigned)bookmarkCount;
-(id)bookmarkArray;
-(int)folderID;
@end
