/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileProvider.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSString, BRCAccountSession, NSMutableDictionary, NSObject, brc_task_tracker;

@interface BRCFileProvider : NSObject <NSFileProvider> {

	BRCAccountSession* _session;
	NSURL* _url;
	NSOperationQueue* _queue;
	NSMutableDictionary* _presentersIDsByKey;
	NSObject*<OS_dispatch_queue> _privQueue;
	brc_task_tracker* _tracker;

}

@property (nonatomic,retain) BRCAccountSession * session;                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
+(id)prettyNameForFilePresenterID:(id)arg1 ;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(void)dumpToContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
-(id)_keyForURL:(id)arg1 ;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4 ;
-(void)_unregisterPresenterForKey:(id)arg1 ;
-(id)_keyForURL:(id)arg1 andID:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(BRCAccountSession *)session;
-(void)resume;
-(void)suspend;
-(void)setSession:(BRCAccountSession *)arg1 ;
@end

