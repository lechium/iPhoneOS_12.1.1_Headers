/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding> {

	BOOL _dismissWhenBackgrounded;
	long long _type;
	NSString* _readUsageDescription;
	NSString* _shareUsageDescription;
	NSSet* _typesRequiringReadAuthorization;
	NSSet* _typesRequiringShareAuthorization;

}

@property (assign,nonatomic) long long type;                                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) NSString * shareUsageDescription;                                                 //@synthesize shareUsageDescription=_shareUsageDescription - In the implementation block
@property (nonatomic,copy) NSSet * typesRequiringReadAuthorization;                                          //@synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization - In the implementation block
@property (nonatomic,copy) NSSet * typesRequiringShareAuthorization;                                         //@synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization - In the implementation block
@property (assign,getter=shouldDismissWhenBackgrounded,nonatomic) BOOL dismissWhenBackgrounded;              //@synthesize dismissWhenBackgrounded=_dismissWhenBackgrounded - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)typesRequiringShareAuthorization;
-(NSSet *)typesRequiringReadAuthorization;
-(NSString *)readUsageDescription;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(void)setTypesRequiringReadAuthorization:(NSSet *)arg1 ;
-(void)setDismissWhenBackgrounded:(BOOL)arg1 ;
-(void)setShareUsageDescription:(NSString *)arg1 ;
-(void)setTypesRequiringShareAuthorization:(NSSet *)arg1 ;
-(NSString *)shareUsageDescription;
-(BOOL)shouldDismissWhenBackgrounded;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

