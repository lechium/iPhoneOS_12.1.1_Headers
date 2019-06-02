/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class PSYSyncCoordinator, HDProfile, NSObject, NSHashTable, NSString;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject> {

	PSYSyncCoordinator* _pairedSyncCoordinator;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _unfinishedSyncSessions;

}

@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * unfinishedSyncSessions;                    //@synthesize unfinishedSyncSessions=_unfinishedSyncSessions - In the implementation block
@property (readonly) PSYSyncCoordinator * syncCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(HDProfile *)profile;
-(id)diagnosticDescription;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 queue:(id)arg2 ;
-(BOOL)permitSynchronization;
-(id)_typeStringForSyncSession:(id)arg1 ;
-(void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2 ;
-(void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2 ;
-(void)_queue_pairedSyncDidStartWithSession:(id)arg1 ;
-(id)_syncRestrictionString;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(NSHashTable *)unfinishedSyncSessions;
-(void)setUnfinishedSyncSessions:(NSHashTable *)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

