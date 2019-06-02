/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding> {

	NSUUID* _sessionIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _samplesRequiringAuthorization;

}

@property (nonatomic,copy,readonly) NSUUID * sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * samplesRequiringAuthorization;              //@synthesize samplesRequiringAuthorization=_samplesRequiringAuthorization - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)samplesRequiringAuthorization;
-(id)initForBundleIdentifier:(id)arg1 samples:(id)arg2 sessionIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)sessionIdentifier;
@end

