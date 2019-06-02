/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFCloudKitSerializerDelegate;
@class CKRecordZone, NSMutableDictionary, NSString, NSCloudKitMirroringDelegateOptions, NSObject, NSMutableArray, PFCloudKitMirroredRelationshipCache, NSDictionary, NSArray;

@interface PFCloudKitSerializer : NSObject {

	CKRecordZone* _zone;
	NSMutableDictionary* _objectIDToCKRecordName;
	NSMutableDictionary* _manyToManyRecordNameToRecord;
	NSString* _recordNamePrefix;
	NSCloudKitMirroringDelegateOptions* _mirroringOptions;
	NSObject*<PFCloudKitSerializerDelegate> _delegate;
	NSMutableArray* _writtenAssetURLs;
	PFCloudKitMirroredRelationshipCache* _relCache;

}

@property (nonatomic,readonly) NSCloudKitMirroringDelegateOptions * mirroringOptions;              //@synthesize mirroringOptions=_mirroringOptions - In the implementation block
@property (nonatomic,readonly) NSDictionary * objectIDToCKRecordName; 
@property (nonatomic,readonly) NSDictionary * manyToManyRecordNameToRecord; 
@property (assign,nonatomic,__weak) NSObject*<PFCloudKitSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKRecordZone * zone;                                                //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) NSArray * writtenAssetURLs; 
@property (nonatomic,readonly) PFCloudKitMirroredRelationshipCache * relCache;                     //@synthesize relCache=_relCache - In the implementation block
@property (nonatomic,readonly) NSString * recordNamePrefix;                                        //@synthesize recordNamePrefix=_recordNamePrefix - In the implementation block
+(BOOL)isPrivateAttribute:(id)arg1 ;
+(id)recordTypeForEntity:(id)arg1 ;
+(id)newSetOfRecordKeysForAttribute:(id)arg1 includeCKAssetsForFileBackedFutures:(BOOL)arg2 ;
+(id)newSetOfRecordKeysForEntitiesInConfiguration:(id)arg1 inManagedObjectModel:(id)arg2 includeCKAssetsForFileBackedFutures:(BOOL)arg3 ;
+(id)newSerializerForOptions:(id)arg1 withZone:(id)arg2 recordNamePrefix:(id)arg3 ;
+(id)assetsOnRecord:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)isMirroredRelationshipRecordType:(id)arg1 ;
+(id)entityNameForRecordType:(id)arg1 ;
+(id)newArchivedDataForSystemFieldsOfRecord:(id)arg1 ;
+(id)applyCDPrefixToName:(id)arg1 ;
+(BOOL)isVariableLengthAttributeType:(unsigned long long)arg1 ;
+(unsigned long long)sizeOfVariableLengthAttribute:(id)arg1 withValue:(id)arg2 ;
+(BOOL)shouldTrackAttribute:(id)arg1 ;
+(id)ckAssetAttributeNameForAttributeName:(id)arg1 ;
+(id)generateCKAssetFileURLForObjectInStore:(id)arg1 ;
+(BOOL)shouldTrackRelationship:(id)arg1 ;
+(id)assetStorageDirectoryURLForStore:(id)arg1 ;
+(unsigned long long)estimatedByteSizeOfValue:(id)arg1 andKey:(id)arg2 ;
+(unsigned long long)estimateByteSizeOfRecordID:(id)arg1 ;
+(id)newSetOfRecordKeysForEntity:(id)arg1 includeCKAssetsForFileBackedFutures:(BOOL)arg2 ;
+(id)newSetOfRecordKeysForRelationship:(id)arg1 ;
+(BOOL)shouldTrackProperty:(id)arg1 ;
+(unsigned long long)estimateByteSizeOfRecord:(id)arg1 ;
-(NSCloudKitMirroringDelegateOptions *)mirroringOptions;
-(PFCloudKitMirroredRelationshipCache *)relCache;
-(id)getRecordNameForObject:(id)arg1 ;
-(BOOL)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 onlyUpdatingAttributes:(id)arg5 andRelationships:(id)arg6 error:(id*)arg7 ;
-(NSArray *)writtenAssetURLs;
-(id)initWithZone:(id)arg1 mirroringOptions:(id)arg2 recordNamePrefix:(id)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 onRecord:(id)arg3 ;
-(id)getValuesFromRecord:(id)arg1 ;
-(id)getValueFromRecord:(id)arg1 forKey:(id)arg2 ;
-(void)updateAttributes:(id)arg1 andRelationships:(id)arg2 onManagedObject:(id)arg3 fromRecord:(id)arg4 importContext:(id)arg5 ;
-(NSDictionary *)objectIDToCKRecordName;
-(void)setObjectID:(id)arg1 toCKRecordName:(id)arg2 ;
-(NSDictionary *)manyToManyRecordNameToRecord;
-(void)setMtmRecord:(id)arg1 toMtmRecordName:(id)arg2 ;
-(void)addURLToWrittenAssetURLs:(id)arg1 ;
-(id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(BOOL)arg2 ;
-(BOOL)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5 ;
-(NSString *)recordNamePrefix;
-(id)init;
-(void)dealloc;
-(CKRecordZone *)zone;
-(void)setDelegate:(NSObject*<PFCloudKitSerializerDelegate>)arg1 ;
-(NSObject*<PFCloudKitSerializerDelegate>)delegate;
@end
