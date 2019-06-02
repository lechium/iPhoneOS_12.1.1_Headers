/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSBatchIDQueryControllerDelegate.h>

@protocol OS_dispatch_queue, TUIDSIDQueryController, TUIDSBatchIDQueryController;
@class NSObject, NSMutableDictionary, NSString;

@interface TUIDSLookupManager : NSObject <IDSBatchIDQueryControllerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUIDSIDQueryController> _queryController;
	NSMutableDictionary* _idsFaceTimeVideoStatuses;
	NSMutableDictionary* _idsFaceTimeAudioStatuses;
	NSMutableDictionary* _idsFaceTimeMultiwayStatuses;
	id<TUIDSBatchIDQueryController> _batchQuerySearchVideoController;
	id<TUIDSBatchIDQueryController> _batchQuerySearchAudioController;
	id<TUIDSBatchIDQueryController> _batchQuerySearchMultiwayController;
	/*^block*/id _batchQueryControllerCreationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<TUIDSIDQueryController> queryController;                                    //@synthesize queryController=_queryController - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeVideoStatuses;                                //@synthesize idsFaceTimeVideoStatuses=_idsFaceTimeVideoStatuses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeAudioStatuses;                                //@synthesize idsFaceTimeAudioStatuses=_idsFaceTimeAudioStatuses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * idsFaceTimeMultiwayStatuses;                             //@synthesize idsFaceTimeMultiwayStatuses=_idsFaceTimeMultiwayStatuses - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchVideoController;                 //@synthesize batchQuerySearchVideoController=_batchQuerySearchVideoController - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchAudioController;                 //@synthesize batchQuerySearchAudioController=_batchQuerySearchAudioController - In the implementation block
@property (nonatomic,retain) id<TUIDSBatchIDQueryController> batchQuerySearchMultiwayController;              //@synthesize batchQuerySearchMultiwayController=_batchQuerySearchMultiwayController - In the implementation block
@property (nonatomic,copy) id batchQueryControllerCreationBlock;                                              //@synthesize batchQueryControllerCreationBlock=_batchQueryControllerCreationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAnyDestinationAvailableInDestinations:(id)arg1 usingCache:(id)arg2 ;
+(id)sharedManager;
-(id)initWithQueryController:(id)arg1 ;
-(void)cancelQueries;
-(id)batchQueryControllerCreationBlock;
-(BOOL)isFaceTimeVideoAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(BOOL)isFaceTimeAudioAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(BOOL)isFaceTimeMultiwayAvailableForAnyDestinationInDestinations:(id)arg1 ;
-(NSMutableDictionary *)idsFaceTimeVideoStatuses;
-(NSMutableDictionary *)idsFaceTimeAudioStatuses;
-(NSMutableDictionary *)idsFaceTimeMultiwayStatuses;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchVideoController;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchAudioController;
-(id<TUIDSBatchIDQueryController>)batchQuerySearchMultiwayController;
-(id<TUIDSIDQueryController>)queryController;
-(BOOL)isFaceTimeVideoAvailableForItem:(id)arg1 ;
-(BOOL)isFaceTimeAudioAvailableForItem:(id)arg1 ;
-(BOOL)isFaceTimeMultiwayAvailableForItem:(id)arg1 ;
-(void)beginQueryWithDestinations:(id)arg1 ;
-(void)setBatchQuerySearchVideoController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQuerySearchAudioController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQuerySearchMultiwayController:(id<TUIDSBatchIDQueryController>)arg1 ;
-(void)setBatchQueryControllerCreationBlock:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
@end

