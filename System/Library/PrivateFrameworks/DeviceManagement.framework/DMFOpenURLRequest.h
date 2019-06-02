/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest {

	BOOL _lockInApp;
	NSURL* _url;
	NSString* _URLDisplayName;
	NSArray* _handlingBundleIdentifiers;

}

@property (nonatomic,copy) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLDisplayName;                        //@synthesize URLDisplayName=_URLDisplayName - In the implementation block
@property (assign,nonatomic) BOOL lockInApp;                                 //@synthesize lockInApp=_lockInApp - In the implementation block
@property (nonatomic,copy) NSArray * handlingBundleIdentifiers;              //@synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers - In the implementation block
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
-(BOOL)lockInApp;
-(void)setLockInApp:(BOOL)arg1 ;
-(NSString *)URLDisplayName;
-(NSArray *)handlingBundleIdentifiers;
-(void)setURLDisplayName:(NSString *)arg1 ;
-(void)setHandlingBundleIdentifiers:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

