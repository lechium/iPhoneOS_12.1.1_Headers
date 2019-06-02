/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PKServiceDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCListener, NSMutableDictionary, PKServicePersonality, NSObject, NSArray, NSString;

@interface PKService : NSObject <NSXPCListenerDelegate> {

	BOOL _shared;
	id<PKServiceDelegate> _delegate;
	NSXPCListener* _serviceListener;
	NSMutableDictionary* _personalities;
	PKServicePersonality* _solePersonality;
	NSObject*<OS_dispatch_queue> __sync;
	NSArray* _subsystems;
	NSObject*<OS_dispatch_source> _terminationTimer;

}

@property (retain) NSXPCListener * serviceListener;                             //@synthesize serviceListener=_serviceListener - In the implementation block
@property (retain) NSMutableDictionary * personalities;                         //@synthesize personalities=_personalities - In the implementation block
@property (retain) PKServicePersonality * solePersonality;                      //@synthesize solePersonality=_solePersonality - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _sync;                          //@synthesize _sync=__sync - In the implementation block
@property (retain) NSArray * subsystems;                                        //@synthesize subsystems=_subsystems - In the implementation block
@property (assign) BOOL shared;                                                 //@synthesize shared=_shared - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> terminationTimer;              //@synthesize terminationTimer=_terminationTimer - In the implementation block
@property (retain) id<PKServiceDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultService;
+(int)_defaultRun:(int)arg1 arguments:(const char**)arg2 ;
+(void)main;
-(NSObject*<OS_dispatch_queue>)_sync;
-(void)registerPersonality:(id)arg1 ;
-(BOOL)unregisterPersonality:(id)arg1 ;
-(void)setPersonalities:(NSMutableDictionary *)arg1 ;
-(void)set_sync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_prepareToRun;
-(void)checkEnvironment:(id)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(void)discoverSubsystems;
-(id)configuredSubsystemList;
-(id)discoverSubsystemNamed:(id)arg1 logMissing:(BOOL)arg2 ;
-(BOOL)_processDefaultSubsystemName:(id)arg1 ;
-(void)setSubsystems:(NSArray *)arg1 ;
-(void)mergeSubsystems:(id)arg1 from:(id)arg2 ;
-(void)mergeSubsystemList:(id)arg1 from:(id)arg2 ;
-(id)personalityNamed:(id)arg1 ;
-(NSMutableDictionary *)personalities;
-(void)setSolePersonality:(PKServicePersonality *)arg1 ;
-(NSObject*<OS_dispatch_source>)terminationTimer;
-(void)setTerminationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)launchContainingApplicationForPlugInNamed:(id)arg1 ;
-(void)copyAppStoreReceipt:(/*^block*/id)arg1 ;
-(id)defaultsForPlugInNamed:(id)arg1 ;
-(id)plugInPrincipalForPlugInNamed:(id)arg1 ;
-(id)embeddedPrincipalForPlugInNamed:(id)arg1 ;
-(id)connectionForPlugInNamed:(id)arg1 ;
-(id)personalityNamed:(id)arg1 forHostPid:(int)arg2 ;
-(void)scheduleTermination:(double)arg1 ;
-(void)cancelTermination;
-(void)setShared:(BOOL)arg1 ;
-(BOOL)shared;
-(NSArray *)subsystems;
-(id)hostPrincipalForPlugInNamed:(id)arg1 ;
-(NSXPCListener *)serviceListener;
-(PKServicePersonality *)solePersonality;
-(id)init;
-(void)setDelegate:(id<PKServiceDelegate>)arg1 ;
-(id<PKServiceDelegate>)delegate;
-(void)run;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

