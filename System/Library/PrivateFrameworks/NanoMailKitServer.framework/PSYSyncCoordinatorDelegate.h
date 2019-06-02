/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYSyncCoordinatorDelegate <NSObject>
@optional
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
-(void)supportsMigrationSync;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;

@end

