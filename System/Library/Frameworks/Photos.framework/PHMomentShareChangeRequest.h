/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHMomentShare, NSString, PHChangeRequestHelper, PHRelationshipChangeRequestHelper, NSDate, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHMomentShareChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHMomentShare* _originalMomentShare;
	BOOL _clientEntitled;
	NSString* _clientName;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	PHRelationshipChangeRequestHelper* _participantsHelper;

}

@property (nonatomic,retain) NSString * originatingScopeIdentifier; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSData * previewData; 
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * participantsHelper;              //@synthesize participantsHelper=_participantsHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedMomentShare; 
@property (assign,nonatomic) BOOL shouldIgnoreBudgets; 
@property (assign,nonatomic) BOOL shouldNotifyOnUploadCompletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                         //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                               //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                 //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                      //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2 ;
+(id)creationRequestForMomentShareWithTitle:(id)arg1 mode:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 assetCreationOptions:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7 ;
+(id)changeRequestForMomentShare:(id)arg1 ;
+(void)trashMomentShares:(id)arg1 ;
+(void)expungeMomentShares:(id)arg1 ;
-(BOOL)shouldNotifyOnUploadCompletion;
-(NSString *)originatingScopeIdentifier;
-(void)setOriginatingScopeIdentifier:(NSString *)arg1 ;
-(void)setPreviewData:(NSData *)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(void)_setOriginalMomentShare:(id)arg1 ;
-(PHRelationshipChangeRequestHelper *)participantsHelper;
-(void)createMomentShareAssetsFromAssets:(id)arg1 withAssetCreationOptions:(id)arg2 withPreview:(id)arg3 ;
-(void)_prepareParticipantsWithFetchResult:(id)arg1 ;
-(void)_prepareParticipantsHelperIfNeeded;
-(id)_mutableParticipantsObjectIDsAndUUIDs;
-(PHObjectPlaceholder *)placeholderForCreatedMomentShare;
-(BOOL)shouldIgnoreBudgets;
-(void)setShouldIgnoreBudgets:(BOOL)arg1 ;
-(void)setShouldNotifyOnUploadCompletion:(BOOL)arg1 ;
-(id)thumbnailImageData;
-(BOOL)isNew;
-(NSManagedObjectID *)objectID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)addParticipants:(id)arg1 ;
-(void)setThumbnailImageData:(id)arg1 ;
-(NSString *)clientName;
-(NSString *)uuid;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(short)mode;
-(void)setMode:(short)arg1 ;
-(NSData *)previewData;
@end

