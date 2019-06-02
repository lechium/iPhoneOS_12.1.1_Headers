/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSMutableDictionary, NSUserDefaults, LSApplicationProxy;

@interface ATXPhoneWatchBundleIdCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _phoneToWatchCache;
	NSMutableDictionary* _watchToPhoneCache;
	NSUserDefaults* _appPredictionDefaults;
	LSApplicationProxy* _mockLSApplicationProxy;

}

@property (nonatomic,retain) LSApplicationProxy * mockLSApplicationProxy;              //@synthesize mockLSApplicationProxy=_mockLSApplicationProxy - In the implementation block
+(id)sharedInstance;
-(id)watchBundleIdForPhoneBundleId:(id)arg1 ;
-(id)phoneBundleIdForWatchBundleId:(id)arg1 ;
-(void)_saveCacheToUserDefaults;
-(void)updateMappings;
-(void)_updatePhoneToWatchCache;
-(LSApplicationProxy *)mockLSApplicationProxy;
-(void)setMockLSApplicationProxy:(LSApplicationProxy *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithUserDefaults:(id)arg1 ;
@end

