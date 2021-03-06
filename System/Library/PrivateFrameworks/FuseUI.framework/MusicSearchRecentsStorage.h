/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableArray;

@interface MusicSearchRecentsStorage : NSObject {

	long long _limit;
	NSURL* _persistenceURL;
	NSMutableArray* _recents;
	BOOL _hasChanges;
	long long _maximumNumberOfRecents;

}

@property (readonly) long long maximumNumberOfRecents;              //@synthesize maximumNumberOfRecents=_maximumNumberOfRecents - In the implementation block
+(id)sharedRecentsStorage;
-(id)recentSearches;
-(void)save;
-(id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2 ;
-(void)_addRecent:(id)arg1 replacingRecent:(id)arg2 ;
-(void)addRecent:(id)arg1 ;
-(void)replaceRecent:(id)arg1 withRecent:(id)arg2 ;
-(long long)maximumNumberOfRecents;
-(void)load;
-(void)clear;
@end

