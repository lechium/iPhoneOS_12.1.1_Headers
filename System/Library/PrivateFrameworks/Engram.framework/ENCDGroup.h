/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class ENGroupID, ENStableGroupID, NSData;

@interface ENCDGroup : NSManagedObject

@property (nonatomic,retain) id<ENCypher> cypher; 
@property (nonatomic,retain) ENGroupID * groupID; 
@property (nonatomic,retain) ENStableGroupID * stableGroupID; 
@property (assign,nonatomic) long long groupIDGeneration; 
@property (nonatomic,retain) NSData * sharedApplicationData; 
+(id)groupFromGroup:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
+(id)predicateForGroupID:(id)arg1 ;
+(id)predicateForStableGroupID:(id)arg1 ;
+(id)predicateForGroupIDs:(id)arg1 ;
+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
@end

