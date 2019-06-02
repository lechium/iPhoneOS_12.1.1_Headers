/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface HMDLaunchHandler : HMFObject {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableSet* _registeredRelaunchClients;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registeredRelaunchClients;               //@synthesize registeredRelaunchClients=_registeredRelaunchClients - In the implementation block
+(id)sharedHandler;
+(id)relaunchPlistPath;
+(BOOL)_fileExistsAtPath:(id)arg1 ;
+(BOOL)_removeFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)_writeDictionary:(id)arg1 toFileURL:(id)arg2 error:(id*)arg3 ;
+(int)_setJetsamPriorityUsingCommand:(int)arg1 ;
-(void)registerForRelaunch:(id)arg1 ;
-(void)deregisterForRelaunch:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(NSMutableSet *)registeredRelaunchClients;
-(void)_updateOrRemoveRelaunchPlist;
-(void)_setJetsamPriorityElevated:(BOOL)arg1 ;
-(void)removePersistentRelaunchRegistrationsIfNecessary;
-(id)init;
@end

