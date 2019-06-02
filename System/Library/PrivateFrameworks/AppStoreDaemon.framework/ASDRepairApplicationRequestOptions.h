/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString, NSNumber;

@interface ASDRepairApplicationRequestOptions : ASDRequestOptions {

	NSString* _bundleID;
	NSNumber* _accountDSID;
	long long _claimStyle;
	unsigned long long _exitReason;

}

@property (nonatomic,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;                   //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                     //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) unsigned long long exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(long long)claimStyle;
-(void)setExitReason:(unsigned long long)arg1 ;
-(NSNumber *)accountDSID;
-(unsigned long long)exitReason;
-(id)initWithBundleID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleID;
@end
