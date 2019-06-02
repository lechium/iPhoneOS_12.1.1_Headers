/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _displayName;
	EAEmailAddressSet* _emailAddresses;

}

@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) EAEmailAddressSet * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(EAEmailAddressSet *)emailAddresses;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 emailAddresses:(id)arg3 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
@end

