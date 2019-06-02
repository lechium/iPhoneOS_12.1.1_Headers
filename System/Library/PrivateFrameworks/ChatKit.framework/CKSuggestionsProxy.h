/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SGSuggestionsServiceMessagesProtocol;
@class NSMutableSet, NSMutableDictionary, NSObject;

@interface CKSuggestionsProxy : NSObject {

	NSMutableSet* _chatBlacklist;
	NSMutableDictionary* _callbackBlocks;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<SGSuggestionsServiceMessagesProtocol> _suggestionsService;

}

@property (nonatomic,retain) NSObject*<SGSuggestionsServiceMessagesProtocol> suggestionsService;              //@synthesize suggestionsService=_suggestionsService - In the implementation block
+(id)sharedInstance;
-(void)setSuggestionsService:(NSObject*<SGSuggestionsServiceMessagesProtocol>)arg1 ;
-(NSObject*<SGSuggestionsServiceMessagesProtocol>)suggestionsService;
-(id)_filteredRealtimeEvents:(id)arg1 ;
-(void)purgeCache:(id)arg1 ;
-(void)bannerViewForSearchables:(id)arg1 guid:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(id)init;
@end

