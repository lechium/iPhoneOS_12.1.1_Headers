/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject {

	WebBookmarkCollection* _collection;
	WebBookmark* _bookmark;

}

@property (nonatomic,readonly) WebBookmarkCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
-(id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 ;
-(WebBookmarkCollection *)collection;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(id)description;
@end
