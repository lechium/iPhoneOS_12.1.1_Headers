/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ENAccountIdentity, NSArray, NSData;

@interface _ENGroupInfo : NSObject <NSSecureCoding> {

	ENAccountIdentity* _accountIdentity;
	NSArray* _participants;
	NSData* _sharedApplicationData;

}

@property (retain) ENAccountIdentity * accountIdentity;                   //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,retain) NSArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) NSData * sharedApplicationData;              //@synthesize sharedApplicationData=_sharedApplicationData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAccountIdentity:(id)arg1 paricipants:(id)arg2 sharedApplicationData:(id)arg3 ;
-(void)setSharedApplicationData:(NSData *)arg1 ;
-(ENAccountIdentity *)accountIdentity;
-(void)setAccountIdentity:(ENAccountIdentity *)arg1 ;
-(void)setParticipants:(NSArray *)arg1 ;
-(NSData *)sharedApplicationData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)participants;
@end
