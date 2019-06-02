/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString;

@interface IMParticipantChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	long long _changeType;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;

}

@property (assign,nonatomic) long long changeType;                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
-(NSString *)otherUnformattedID;
-(NSString *)otherCountryCode;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(id)copyDictionaryRepresentation;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
