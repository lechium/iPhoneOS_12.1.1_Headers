/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLSyncableObject.h>

@class NSString, NSDate, NSSet, NSManagedObject, PLMomentShare;

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (nonatomic,retain) NSString * cloudMasterGUID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) short fullSizeJPEGSource; 
@property (nonatomic,retain) NSDate * importDate; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (nonatomic,retain) NSString * originalFilename; 
@property (assign,nonatomic) short originalOrientation; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,copy) NSString * originatingAssetIdentifier; 
@property (assign,nonatomic) short placeholderState; 
@property (assign,nonatomic) short importedBy; 
@property (nonatomic,retain) NSSet * assets; 
@property (nonatomic,retain) NSSet * resources; 
@property (nonatomic,retain) NSSet * modernResources; 
@property (nonatomic,retain) NSString * mediaMetadataType; 
@property (nonatomic,retain) NSManagedObject * mediaMetadata; 
@property (nonatomic,retain) PLMomentShare * momentShare; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
+(id)cloudMasterWithScopedIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(void)deleteAllCloudMastersInManagedObjectContext:(id)arg1 ;
+(void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3 ;
+(id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)_originalTypes;
+(id)entityName;
-(id)scopedIdentifier;
-(unsigned long long)sizeOfOriginal;
-(id)nrm_cloudResourcesForResourceType:(unsigned long long)arg1 ;
-(id)cloudResourcesForResourceType:(unsigned long long)arg1 ;
-(id)cplFullRecord;
-(id)allMasterResources;
-(id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(void)awakeFromInsert;
-(id)cplResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(BOOL)allOriginalsAreUploaded;
-(void)deleteAllResourcesForAssetUuid:(id)arg1 ;
-(BOOL)hasResourcesOtherThanForAssetUuid:(id)arg1 ;
-(id)nrm_assetUUIDToCloudResources;
-(id)nrm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2 ;
-(void)nrm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)applyPropertiesFromCPLMasterChange:(id)arg1 ;
-(void)applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)assetUUIDToCloudResources;
-(void)_promptForNilScopeIdentifierRadar;
-(id)localID;
-(BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(BOOL)arg2 ;
-(NSString *)description;
@end

