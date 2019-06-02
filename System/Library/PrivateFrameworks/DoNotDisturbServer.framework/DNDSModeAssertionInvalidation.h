/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

@class NSString;

@interface DNDSModeAssertionInvalidation : DNDModeAssertionInvalidation {

	NSString* _clientIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)replacementObjectForCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 assertion:(id)arg2 reason:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

