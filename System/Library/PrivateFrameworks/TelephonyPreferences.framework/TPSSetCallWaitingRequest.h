/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSCallWaitingRequest.h>

@interface TPSSetCallWaitingRequest : TPSCallWaitingRequest {

	BOOL _enabled;

}

@property (nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)unarchivedObjectClasses;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
@end

