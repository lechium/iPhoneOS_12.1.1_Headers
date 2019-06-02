/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFetchRequest, NSManagedObjectID, NSSet;

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {

	unsigned long long _hash;
	NSFetchRequest* _fetchRequest;
	NSManagedObjectID* _containerIdentifier;
	NSSet* _fetchPropertySets;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * fetchPropertySets;                            //@synthesize fetchPropertySets=_fetchPropertySets - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                              //@synthesize hash=_hash - In the implementation block
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 fetchPropertySets:(id)arg3 ;
-(NSSet *)fetchPropertySets;
-(NSManagedObjectID *)containerIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
