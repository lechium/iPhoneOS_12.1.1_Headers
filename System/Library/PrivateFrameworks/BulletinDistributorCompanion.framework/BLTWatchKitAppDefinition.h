/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BLTWatchKitAppDefinition : NSObject {

	BOOL _isInstalled;
	BOOL _runsOnWatch;
	NSString* _containerBundleID;
	NSString* _watchKitAppBundleID;

}

@property (nonatomic,readonly) NSString * containerBundleID;                //@synthesize containerBundleID=_containerBundleID - In the implementation block
@property (nonatomic,readonly) NSString * watchKitAppBundleID;              //@synthesize watchKitAppBundleID=_watchKitAppBundleID - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                            //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL runsOnWatch;                            //@synthesize runsOnWatch=_runsOnWatch - In the implementation block
-(id)initWithContainerBundleID:(id)arg1 watchKitAppBundleID:(id)arg2 isInstalled:(BOOL)arg3 runsOnWatch:(BOOL)arg4 ;
-(NSString *)containerBundleID;
-(NSString *)watchKitAppBundleID;
-(BOOL)runsOnWatch;
-(BOOL)isInstalled;
@end
