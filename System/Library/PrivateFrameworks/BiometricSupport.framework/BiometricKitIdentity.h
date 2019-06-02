/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricSupport/BiometricSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying> {

	unsigned _userID;
	int _type;
	int _attribute;
	int _entity;
	NSUUID* _uuid;
	NSString* _name;
	NSDate* _creationTime;
	long long _matchCount;
	long long _updateCount;

}

@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned userID;                    //@synthesize userID=_userID - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int attribute;                      //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) int entity;                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;              //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) long long matchCount;               //@synthesize matchCount=_matchCount - In the implementation block
@property (assign,nonatomic) long long updateCount;              //@synthesize updateCount=_updateCount - In the implementation block
+(id)biometricKitIdentity;
+(BOOL)supportsSecureCoding;
-(void)setUpdateCount:(long long)arg1 ;
-(long long)updateCount;
-(int)entity;
-(void)setEntity:(int)arg1 ;
-(void)setAttribute:(int)arg1 ;
-(NSDate *)creationTime;
-(void)setCreationTime:(NSDate *)arg1 ;
-(long long)matchCount;
-(void)setMatchCount:(long long)arg1 ;
-(unsigned)userID;
-(void)setUserID:(unsigned)arg1 ;
-(int)attribute;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
@end

