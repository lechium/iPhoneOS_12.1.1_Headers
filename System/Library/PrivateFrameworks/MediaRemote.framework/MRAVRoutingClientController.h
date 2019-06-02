/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MRMediaRemoteService, NSObject, NSMutableDictionary;

@interface MRAVRoutingClientController : NSObject {

	MRMediaRemoteService* _mediaRemoteService;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _pendingCompletionHandlersForCategories;
	NSMutableDictionary* _cachedRoutesForCategories;

}

@property (nonatomic,readonly) MRMediaRemoteService * mediaRemoteService;              //@synthesize mediaRemoteService=_mediaRemoteService - In the implementation block
-(id)initWithMediaRemoteService:(id)arg1 ;
-(void)fetchPickableRoutesForCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2 ;
-(MRMediaRemoteService *)mediaRemoteService;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
