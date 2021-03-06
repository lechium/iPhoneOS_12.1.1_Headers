/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RMSPairingRecordStore : NSObject {

	NSMutableDictionary* _pairingRecords;

}
+(id)sharedRecordStore;
-(void)_synchronizePreferences;
-(id)allPairingRecords;
-(id)pairedServiceNetworkNames;
-(id)pairingRecordForServiceWithNetworkName:(id)arg1 ;
-(void)savePairingRecord:(id)arg1 forServiceWithNetworkName:(id)arg2 ;
-(void)removePairingRecordForServiceWithNetworkName:(id)arg1 ;
-(id)init;
@end

