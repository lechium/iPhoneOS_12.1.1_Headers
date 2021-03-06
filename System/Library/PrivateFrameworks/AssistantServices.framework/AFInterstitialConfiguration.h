/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	NSString* _languageCode;
	long long _gender;

}

@property (nonatomic,readonly) long long style;                           //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                          //@synthesize gender=_gender - In the implementation block
+(id)newWithBuilder:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 ;
-(long long)gender;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(NSString *)languageCode;
@end

