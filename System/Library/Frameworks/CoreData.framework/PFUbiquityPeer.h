/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,retain) NSString * peerKey; 
@property (nonatomic,retain) NSString * peerCode; 
@property (nonatomic,retain) NSSet * remoteStates; 
@property (nonatomic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,retain) NSSet * transactionEntries; 
@property (nonatomic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(BOOL)arg3 ;
@end

