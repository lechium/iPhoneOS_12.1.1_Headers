/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock, NSManagedObjectModel;

@interface PFUbiquityMetadataFactory : NSObject {

	NSMutableDictionary* _rootLocationToPeerIDToEntry;
	NSRecursiveLock* _rootLocationToPeerIDToEntryLock;
	NSManagedObjectModel* _cachedModel;

}
+(void)initialize;
+(id)sharedFactory;
-(id)newMetadataManagedObjectModel;
-(id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)createMetadataModel;
-(id)newEntityForName:(id)arg1 ;
-(id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(BOOL)arg3 isTransient:(BOOL)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7 ;
-(id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(BOOL)arg4 isToMany:(BOOL)arg5 andDeleteRule:(unsigned long long)arg6 ;
-(void)addModelingToolUserInfoToEntity:(id)arg1 ;
-(void)addModelingToolUserInfoToProperty:(id)arg1 ;
-(void)removeAllCoordinatorsForRootLocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

