/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDictionary;

@interface MSPReplica : NSObject {

	NSUUID* _clientIdentifier;
	NSDictionary* _records;

}

@property (nonatomic,readonly) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * records;                 //@synthesize records=_records - In the implementation block
+(id)allowedEditClasses;
+(void)_switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 ;
-(NSUUID *)clientIdentifier;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
-(id)_additionalEditsToUpdateContentsOfRecord:(id)arg1 identifier:(id)arg2 ;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
-(id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
-(id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)editsToInsertOrUpdateRecords:(id)arg1 ;
-(id)editsToRemoveRecordsWithIdentifiers:(id)arg1 ;
-(id)tombstoneRecordForRecord:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDictionary *)records;
@end

