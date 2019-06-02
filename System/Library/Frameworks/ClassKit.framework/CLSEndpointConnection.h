/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSClientDelegate.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {

	os_unfair_recursive_lock_s _lock;
	NSXPCConnection* _serverConnection;
	NSXPCListenerEndpoint* _endpoint;
	BOOL _connectionBorked;
	BOOL _interrupted;
	int _progressdAvailableToken;
	int _devModeChangedToken;
	NSString* _overrideBundleIdentifier;
	/*^block*/id _onInterupt;
	/*^block*/id _onConnect;

}

@property (nonatomic,copy) NSString * overrideBundleIdentifier;              //@synthesize overrideBundleIdentifier=_overrideBundleIdentifier - In the implementation block
@property (nonatomic,copy) id onInterupt;                                    //@synthesize onInterupt=_onInterupt - In the implementation block
@property (nonatomic,copy) id onConnect;                                     //@synthesize onConnect=_onConnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classKitEnvironment;
+(BOOL)isInDevelopmentEnvironment;
+(id)instanceForEndpoint:(id)arg1 ;
+(BOOL)isClassKitEnabled;
+(BOOL)isAllowedToMakeXPCCalls;
+(id)sharedInstance;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)accountChanged;
-(id)serverConnection;
-(void)_registerForDarwinNotifications;
-(void)setOnInterupt:(id)arg1 ;
-(void)setOnConnect:(id)arg1 ;
-(id)dataServer:(/*^block*/id)arg1 ;
-(id)syncDataServer:(/*^block*/id)arg1 ;
-(NSString *)overrideBundleIdentifier;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(id)syncUtilityServer:(/*^block*/id)arg1 ;
-(void)devModeChanged;
-(BOOL)isBorked;
-(void)connectionInterupted;
-(void)connectionBorked;
-(void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)syncServer:(/*^block*/id)arg1 ;
-(id)server:(/*^block*/id)arg1 ;
-(void)_envokeOnInteruptCallback;
-(void)listAppsWithCompletion:(/*^block*/id)arg1 ;
-(void)setOverrideBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverrideBundleIdentifier:(NSString *)arg1 ;
-(id)onInterupt;
-(id)onConnect;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)connect;
@end

