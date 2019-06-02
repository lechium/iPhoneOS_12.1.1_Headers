/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDictionary, NSURL, PFUbiquityLocation, NSData, NSString, NSSet;

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (nonatomic,retain) NSDictionary * storeOptions; 
@property (nonatomic,readonly) NSURL * ubiquityRootURL; 
@property (readonly) PFUbiquityLocation * ubiquityRootLocation; 
@property (nonatomic,retain) NSData * storeOptionsBinaryPlistData; 
@property (nonatomic,retain) NSString * modelVersionHashString; 
@property (nonatomic,retain) NSString * storeURLString; 
@property (nonatomic,retain) NSString * ubiquityName; 
@property (nonatomic,retain) NSString * storeType; 
@property (nonatomic,retain) NSString * ubiquityRootURLString; 
@property (nonatomic,retain) NSString * storeIdentifier; 
@property (nonatomic,retain) NSString * ubiquityRelativePath; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * peerStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
+(id)metadataForStoreWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)storeMetadatasWithName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)baselineRootDirectoryForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)allStoreMetadataInManagedObjectContext:(id)arg1 ;
+(id)baselineStoreURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineGCModelURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(id)baselineMetaFileURLForUbiquityName:(id)arg1 andUbiquityLogURL:(id)arg2 ;
+(BOOL)isBaselineRootURL:(id)arg1 ;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(NSURL *)ubiquityRootURL;
-(void)setStoreOptions:(NSDictionary *)arg1 ;
-(id)peerStateForPeerID:(id)arg1 ;
-(id)initWithUbiquityName:(id)arg1 andUbiquityRootLocation:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
-(void)updateWithStore:(id)arg1 andRootLocation:(id)arg2 ;
-(void)loadFromBaselineMetadata:(id)arg1 withLocalPeerID:(id)arg2 ;
-(void)updatePeerStatesToMatchKnowledgeVector:(id)arg1 ;
-(NSDictionary *)storeOptions;
@end
