/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCReferenceToMembership : NSObject {

	NSString* _identifier;
	NSString* _membershipID;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * membershipID;              //@synthesize membershipID=_membershipID - In the implementation block
-(id)initWithRecord:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSString *)membershipID;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 ;
@end

