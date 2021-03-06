/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>

@protocol HDWatchAppStateMonitorDelegate;
@class NSString;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver> {

	BOOL _appIsActive;
	id<HDWatchAppStateMonitorDelegate> _delegate;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL appIsActive;                                              //@synthesize appIsActive=_appIsActive - In the implementation block
@property (assign,nonatomic,__weak) id<HDWatchAppStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1 ;
-(BOOL)appIsActive;
-(id)initWithFirstPartyWorkoutApp;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<HDWatchAppStateMonitorDelegate>)arg1 ;
-(id<HDWatchAppStateMonitorDelegate>)delegate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

