/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainGroupName;
	NSString* _domainName;
	NSString* _settingsClassName;
	NSString* _settingsBundlePath;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainGroupName;                 //@synthesize domainGroupName=_domainGroupName - In the implementation block
@property (nonatomic,readonly) NSString * domainName;                      //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * settingsClassName;               //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (nonatomic,readonly) NSString * settingsBundlePath;              //@synthesize settingsBundlePath=_settingsBundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)settingsBundlePath;
-(NSString *)domainGroupName;
-(NSString *)settingsClassName;
-(NSString *)domainName;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
-(id)initWithDomain:(id)arg1 ;
@end

