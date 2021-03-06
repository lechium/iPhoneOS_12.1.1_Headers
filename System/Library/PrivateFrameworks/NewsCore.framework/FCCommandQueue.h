/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCCommandDelegate.h>

@protocol FCCommandQueueDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class FCCloudContext, NSString, FCKeyValueStore, NSObject, NSMutableArray;

@interface FCCommandQueue : NSObject <FCNetworkReachabilityObserving, FCAppActivityObserving, FCCommandDelegate> {

	BOOL _suspended;
	BOOL _executingCommand;
	FCCloudContext* _context;
	NSString* _persistentStorePath;
	NSString* _name;
	FCKeyValueStore* _persistentStore;
	long long _urgency;
	id<FCCommandQueueDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _pendingCommands;
	NSObject*<OS_dispatch_source> _cooldownTimer;
	NSObject*<OS_dispatch_group> _pendingCommandsGroup;
	NSObject*<OS_dispatch_group> _executingCommandsGroup;

}

@property (nonatomic,retain) FCCloudContext * context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * persistentStorePath;                                     //@synthesize persistentStorePath=_persistentStorePath - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * persistentStore;                                //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) long long urgency;                                                //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic,__weak) id<FCCommandQueueDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                //@synthesize suspended=_suspended - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingCommands;                                 //@synthesize pendingCommands=_pendingCommands - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cooldownTimer;                      //@synthesize cooldownTimer=_cooldownTimer - In the implementation block
@property (assign,getter=isExecutingCommand,nonatomic) BOOL executingCommand;                  //@synthesize executingCommand=_executingCommand - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pendingCommandsGroup;                //@synthesize pendingCommandsGroup=_pendingCommandsGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> executingCommandsGroup;              //@synthesize executingCommandsGroup=_executingCommandsGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_loadFromDisk;
-(long long)urgency;
-(void)setUrgency:(long long)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)command:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 ;
-(void)activityObservingApplicationDidEnterBackground;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)initWithContext:(id)arg1 storeDirectory:(id)arg2 storeFilename:(id)arg3 urgency:(long long)arg4 suspended:(BOOL)arg5 delegate:(id)arg6 ;
-(id)initWithContext:(id)arg1 urgency:(long long)arg2 suspended:(BOOL)arg3 delegate:(id)arg4 ;
-(void)addCommand:(id)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 persistentStorePath:(id)arg2 urgency:(long long)arg3 suspended:(BOOL)arg4 delegate:(id)arg5 ;
-(void)_scheduleCommandExecution;
-(void)_addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_group>)pendingCommandsGroup;
-(NSMutableArray *)pendingCommands;
-(BOOL)isExecutingCommand;
-(void)_savePendingCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_executeNextCommand;
-(NSObject*<OS_dispatch_group>)executingCommandsGroup;
-(NSObject*<OS_dispatch_source>)cooldownTimer;
-(void)setCooldownTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setExecutingCommand:(BOOL)arg1 ;
-(long long)_qualityOfServiceForCommand:(id)arg1 ;
-(NSString *)persistentStorePath;
-(void)setPersistentStore:(FCKeyValueStore *)arg1 ;
-(FCKeyValueStore *)persistentStore;
-(id)_deserializeCommandsFromStore:(id)arg1 ;
-(void)_serializeCommands:(id)arg1 toStore:(id)arg2 ;
-(id)_encodeCommand:(id)arg1 ;
-(id)_decodeCommand:(id)arg1 ;
-(void)addCommand:(id)arg1 saveCompletion:(/*^block*/id)arg2 ;
-(void)setPersistentStorePath:(NSString *)arg1 ;
-(void)setPendingCommands:(NSMutableArray *)arg1 ;
-(void)setPendingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setExecutingCommandsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDelegate:(id<FCCommandQueueDelegate>)arg1 ;
-(id<FCCommandQueueDelegate>)delegate;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
-(void)_applicationDidEnterBackground;
-(void)clear;
-(void)resume;
-(BOOL)_isEmpty;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
@end

