/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface RMManagementState : NSObject {

	BOOL _cachedShouldRequestMoreTime;
	BOOL _cachedIsRestrictionsPasscodeSet;
	NSXPCConnection* _connection;

}

@property (assign) BOOL cachedShouldRequestMoreTime;                        //@synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime - In the implementation block
@property (assign) BOOL cachedIsRestrictionsPasscodeSet;                    //@synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isRestrictionsPasscodeSet; 
@property (nonatomic,readonly) BOOL shouldRequestMoreTime; 
-(void)screenTimeSyncStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRequestMoreTime;
-(BOOL)isRestrictionsPasscodeSet;
-(void)shouldRequestMoreTime:(/*^block*/id)arg1 ;
-(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
-(void)screenTimeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)cachedShouldRequestMoreTime;
-(void)setCachedShouldRequestMoreTime:(BOOL)arg1 ;
-(BOOL)cachedIsRestrictionsPasscodeSet;
-(void)setCachedIsRestrictionsPasscodeSet:(BOOL)arg1 ;
-(void)screenTimeStateCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

