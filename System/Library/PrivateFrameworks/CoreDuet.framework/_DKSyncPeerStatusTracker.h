/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, _DKKnowledgeStorage;

@interface _DKSyncPeerStatusTracker : NSObject {

	NSMutableDictionary* _peerInfos;
	NSMutableArray* _observers;
	NSMutableDictionary* _lastSuccessfulActivityDates;
	_DKKnowledgeStorage* _storage;

}

@property (assign,nonatomic,__weak) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedInstance;
-(id)allPeers;
-(id)initWithStorage:(id)arg1 ;
-(void)removeStatusChangeObserver:(id)arg1 ;
-(id)addStatusChangeObserverWithBlock:(/*^block*/id)arg1 ;
-(long long)activeTransportsForPeer:(id)arg1 ;
-(void)setSourceDeviceID:(id)arg1 peer:(id)arg2 ;
-(id)pseudoPeerForSyncTransportCloudUp;
-(void)debugLogPeers;
-(unsigned long long)foreignPeersCount;
-(id)existingPeerWithSourceDeviceID:(id)arg1 ;
-(void)removeActiveTransports:(long long)arg1 fromPeer:(id)arg2 ;
-(id)peerWithZoneName:(id)arg1 sourceDeviceID:(id)arg2 ;
-(void)addActiveTransports:(long long)arg1 toPeer:(id)arg2 ;
-(void)removePeer:(id)arg1 ;
-(id)lastSuccessfulActivityDateOnTransport:(long long)arg1 forPeer:(id)arg2 ;
-(id)peersWithActiveTransports:(long long)arg1 ;
-(void)setLastSuccessfulActivityDate:(id)arg1 onTransport:(long long)arg2 forPeer:(id)arg3 ;
-(id)stringForTransports:(long long)arg1 ;
-(id)peerWithIDSDeviceIdentifier:(id)arg1 ;
-(void)_loadPeers;
-(void)postCloudDeviceCountChangedNotification;
-(void)registerNewPeer:(id)arg1 ;
-(id)_peerInfoForPeer:(id)arg1 ;
-(id)_observerBlocks;
-(void)_modifyActiveTransportInPeer:(id)arg1 withNewTransportsBlock:(/*^block*/id)arg2 ;
-(id)peerWithCompanionLinkDevice:(id)arg1 ;
-(id)peersWithAnyActiveTransports;
-(id)uuidWithUUIDString:(id)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)description;
@end

