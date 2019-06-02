/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMDCloudZone, HMDCloudGroupChange, CKRecordID, NSArray;

@interface HMDCloudZoneChange : HMFObject {

	BOOL _temporaryCache;
	NSUUID* _identifier;
	HMDCloudZone* _cloudZone;
	HMDCloudGroupChange* _rootGroupChange;

}

@property (nonatomic,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                            //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) HMDCloudGroupChange * rootGroupChange;                      //@synthesize rootGroupChange=_rootGroupChange - In the implementation block
@property (nonatomic,readonly) CKRecordID * privateZoneRootRecordID; 
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * processedTransactionStoreRowIDs; 
@property (getter=isTemporaryCache,nonatomic,readonly) BOOL temporaryCache;              //@synthesize temporaryCache=_temporaryCache - In the implementation block
@property (nonatomic,readonly) BOOL decryptionFailed; 
@property (nonatomic,readonly) BOOL encryptionFailed; 
@property (nonatomic,readonly) BOOL controllerIdentifierChanged; 
@property (nonatomic,readonly) NSArray * objectChanges; 
@property (nonatomic,readonly) BOOL hasValidChanges; 
+(id)shortDescription;
-(NSArray *)allTransactionStoreRowIDs;
-(BOOL)hasValidChanges;
-(BOOL)decryptionFailed;
-(HMDCloudZone *)cloudZone;
-(id)changeWithObjectID:(id)arg1 ;
-(id)cachedCloudRecordWithObjectID:(id)arg1 ;
-(id)changeWithRecordName:(id)arg1 ;
-(BOOL)isTemporaryCache;
-(BOOL)encryptionFailed;
-(NSArray *)processedTransactionStoreRowIDs;
-(void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)setAllChangedAsProcessed;
-(void)removeChangeWithObjectID:(id)arg1 ;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(void)flushAllChangesToCache;
-(NSArray *)objectChanges;
-(BOOL)controllerIdentifierChanged;
-(CKRecordID *)privateZoneRootRecordID;
-(id)initWithZone:(id)arg1 temporaryCache:(BOOL)arg2 ;
-(BOOL)doesRecordExistInCacheWithObjectID:(id)arg1 ;
-(BOOL)doesRecordExistWithObjectID:(id)arg1 ;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(HMDCloudGroupChange *)rootGroupChange;
-(void)setRootGroupChange:(HMDCloudGroupChange *)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(id)description;
-(id)shortDescription;
@end

