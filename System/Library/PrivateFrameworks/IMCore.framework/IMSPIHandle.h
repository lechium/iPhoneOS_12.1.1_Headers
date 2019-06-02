/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMPerson;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _countryCode;
	BOOL _isMe;
	IMPerson* _imPerson;
	BOOL _haveFetchedIMPerson;

}

@property (readonly) NSString * address;                   //@synthesize address=_address - In the implementation block
@property (readonly) BOOL isMe;                            //@synthesize isMe=_isMe - In the implementation block
@property (readonly) BOOL isBusiness; 
@property (readonly) NSString * businessName; 
@property (readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * cnContactID; 
-(NSString *)countryCode;
-(BOOL)isMe;
-(NSString *)address;
-(NSString *)cnContactID;
-(NSString *)businessName;
-(id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3 ;
-(BOOL)isBusiness;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)displayName;
-(id)person;
@end

