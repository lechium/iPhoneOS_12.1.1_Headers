/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet, NSMapTable, NAFuture;

@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableSet* _logItems;
	NSMapTable* _logEntryUniqueIdentifierToLogItemMap;
	NAFuture* _logFetchFuture;

}

@property (nonatomic,readonly) NSMutableSet * logItems;                                        //@synthesize logItems=_logItems - In the implementation block
@property (nonatomic,readonly) NSMapTable * logEntryUniqueIdentifierToLogItemMap;              //@synthesize logEntryUniqueIdentifierToLogItemMap=_logEntryUniqueIdentifierToLogItemMap - In the implementation block
@property (nonatomic,retain) NAFuture * logFetchFuture;                                        //@synthesize logFetchFuture=_logFetchFuture - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(NSMapTable *)logEntryUniqueIdentifierToLogItemMap;
-(NSMutableSet *)logItems;
-(void)setLogFetchFuture:(NAFuture *)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(NAFuture *)logFetchFuture;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
@end

