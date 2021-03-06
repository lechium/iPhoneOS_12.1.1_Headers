/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sourceBundleIdentifier;
	NSString* _systemBuildVersion;
	NSString* _productType;
	unsigned long long _state;
	int _protocolVersion;

}

@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (copy,readonly) NSString * systemBuildVersion; 
@property (copy,readonly) NSString * productType; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isRestoreComplete,readonly) BOOL restoreComplete; 
@property (readonly) int protocolVersion; 
+(BOOL)supportsSecureCoding;
-(int)protocolVersion;
-(NSString *)systemBuildVersion;
-(NSString *)productType;
-(NSString *)sourceBundleIdentifier;
-(BOOL)isRestoreComplete;
-(id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(BOOL)arg4 restoreComplete:(BOOL)arg5 protocolVersion:(int)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
@end

