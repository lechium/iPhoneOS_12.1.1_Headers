/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface CAMProtectionController : NSObject {

	int __nebulaDaemonWriteProtectionFileDescriptor;
	NSObject*<OS_dispatch_queue> __protectionQueue;
	NSCountedSet* __persistenceProtectionInflightRequestsByType;
	NSMutableDictionary* __persistenceProtectionFileDescriptorsByType;
	NSMutableDictionary* __burstProcessingProtectionFileDescriptorsByIdentifier;
	NSMutableSet* __nebulaDaemonWriteProtectionInflightIdentifiers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _protectionQueue;                                            //@synthesize _protectionQueue=__protectionQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _persistenceProtectionInflightRequestsByType;                              //@synthesize _persistenceProtectionInflightRequestsByType=__persistenceProtectionInflightRequestsByType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _persistenceProtectionFileDescriptorsByType;                        //@synthesize _persistenceProtectionFileDescriptorsByType=__persistenceProtectionFileDescriptorsByType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _burstProcessingProtectionFileDescriptorsByIdentifier;              //@synthesize _burstProcessingProtectionFileDescriptorsByIdentifier=__burstProcessingProtectionFileDescriptorsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _nebulaDaemonWriteProtectionInflightIdentifiers;                           //@synthesize _nebulaDaemonWriteProtectionInflightIdentifiers=__nebulaDaemonWriteProtectionInflightIdentifiers - In the implementation block
@property (nonatomic,readonly) int _nebulaDaemonWriteProtectionFileDescriptor;                                           //@synthesize _nebulaDaemonWriteProtectionFileDescriptor=__nebulaDaemonWriteProtectionFileDescriptor - In the implementation block
+(id)pathForProtectNebulaDaemonWritesIndicator;
+(BOOL)isCameraPerformingHighPriorityDiskActivity;
-(void)startProtectingPersistenceForRequest:(id)arg1 ;
-(void)stopProtectingPersistenceForRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_protectionQueue;
-(void)_protectionQueueAbortProtectionForProtectionTypes;
-(void)_protectionQueueAbortProtectionForBurstProcessing;
-(void)_protectionQueueAbortProtectionForNebulaDaemonWrites;
-(NSMutableDictionary *)_persistenceProtectionFileDescriptorsByType;
-(id)_persistenceProtectionPathForType:(long long)arg1 ;
-(int)_persistenceProtectionFileDescriptorForType:(long long)arg1 ;
-(NSCountedSet *)_persistenceProtectionInflightRequestsByType;
-(void)_addPersistenceProtectionIndicatorForType:(long long)arg1 logIdentifier:(id)arg2 ;
-(void)_protectionQueueRemovePersistenceProtectionIndicatorForType:(long long)arg1 unlinkFile:(BOOL)arg2 logIdentifier:(id)arg3 ;
-(long long)_persistenceProtectionTypeForRequest:(id)arg1 ;
-(void)_protectionQueueStartProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2 ;
-(void)_protectionQueueStopProtectingPersistenceForType:(long long)arg1 logIdentifier:(id)arg2 ;
-(NSMutableDictionary *)_burstProcessingProtectionFileDescriptorsByIdentifier;
-(id)_burstProcessingProtectionPathForIdentifier:(id)arg1 ;
-(int)_burstProcessingProtectionFileDescriptorForIdentifier:(id)arg1 ;
-(void)_protectionQueueRemoveBurstProcessingProtectionIndicatorForIdentifier:(id)arg1 ;
-(void)_addBurstProcessingProtectionIndicatorForIdentifier:(id)arg1 ;
-(void)_protectionQueueStartProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(void)_protectionQueueStopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 closeFile:(BOOL)arg2 ;
-(void)startProtectingBurstProcessingForIdentifier:(id)arg1 ;
-(void)stopProtectingBurstProcessingForIdentifier:(id)arg1 ;
-(void)startProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(void)stopProtectingNebulaDaemonWritesForIdentifier:(id)arg1 ;
-(NSMutableSet *)_nebulaDaemonWriteProtectionInflightIdentifiers;
-(int)_nebulaDaemonWriteProtectionFileDescriptor;
-(id)init;
-(void)dealloc;
@end

