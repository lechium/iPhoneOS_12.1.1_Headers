/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassKit/ClassKit-Structs.h>
@class NSString, NSDictionary;

@interface CLSEntitlements : NSObject {

	NSString* _applicationBundleIdentifier;
	NSDictionary* _entitlements;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlements;                    //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * classKitEnvironment; 
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)entitlementsWithSecTask:(SecTaskRef)arg1 overrides:(id)arg2 error:(id*)arg3 ;
+(id)allowedEntitlements;
+(BOOL)isDashboardAppProcess;
+(BOOL)isInternalProcess;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSDictionary *)entitlements;
-(id)initWithEntitlements:(id)arg1 ;
-(BOOL)isInternal;
-(BOOL)boolValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(id)stringValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)classKitEnvironment;
-(BOOL)isPublicClassKitAPIEnabled;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isRegisterDashboardEnabled;
-(BOOL)isInDevelopmentEnvironment;
-(id)init;
@end

