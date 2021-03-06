/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
-(float)migrationProgress;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_notifyDaHolidaySubCalAccount;
-(id)dataClassName;
@end

