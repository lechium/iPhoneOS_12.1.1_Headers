/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface HKDeletedObject : NSObject <NSSecureCoding> {

	NSUUID* _UUID;
	NSDictionary* _metadata;
	long long _externalSyncObjectCode;

}

@property (copy) NSDictionary * metadata;                                   //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long externalSyncObjectCode;              //@synthesize externalSyncObjectCode=_externalSyncObjectCode - In the implementation block
@property (readonly) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
+(id)_deletedObjectWithUUID:(id)arg1 metadata:(id)arg2 ;
+(id)_metadataWithSyncIdentifier:(id)arg1 syncVersion:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setExternalSyncObjectCode:(long long)arg1 ;
-(long long)externalSyncObjectCode;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)metadata;
-(id)_init;
@end
