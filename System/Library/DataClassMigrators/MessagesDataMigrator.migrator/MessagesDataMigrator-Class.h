/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/DataClassMigrators/MessagesDataMigrator.migrator/MessagesDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MessagesDataMigrator : DataClassMigrator
-(BOOL)performMigration;
-(float)estimatedDuration;
-(id)dataClassName;
-(void)saveDeviceState:(BOOL)arg1 isMigrating:(BOOL)arg2 ;
-(void)setiCloudBackupsAndRestoresEnabledForSMSDirectory;
-(void)clearMOCDefaultsForRestoreFromBackupIfNeeded;
@end
