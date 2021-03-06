/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSSet, NSArray;

@interface WBSBookmarkFolderTouchIconProviderRequestInfo : NSObject {

	NSMutableArray* _thumbnailImages;
	NSMutableArray* _backgroundColors;
	BOOL _hasScheduledCoalescedUpdate;
	NSSet* _subrequestTokens;

}

@property (nonatomic,copy) NSSet * subrequestTokens;                         //@synthesize subrequestTokens=_subrequestTokens - In the implementation block
@property (nonatomic,copy,readonly) NSArray * thumbnailImages; 
@property (nonatomic,copy,readonly) NSArray * backgroundColors; 
@property (assign,nonatomic) BOOL hasScheduledCoalescedUpdate;               //@synthesize hasScheduledCoalescedUpdate=_hasScheduledCoalescedUpdate - In the implementation block
-(NSSet *)subrequestTokens;
-(void)setSubrequestTokens:(NSSet *)arg1 ;
-(void)setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasScheduledCoalescedUpdate;
-(void)setHasScheduledCoalescedUpdate:(BOOL)arg1 ;
-(NSArray *)thumbnailImages;
-(NSArray *)backgroundColors;
-(id)init;
@end

