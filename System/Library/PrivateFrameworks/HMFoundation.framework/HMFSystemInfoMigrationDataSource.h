/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMFSystemInfoMigrationDataSource <NSObject>
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate; 
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@required
-(BOOL)isMigrating;
-(void)setDelegate:(id)arg1;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;

@end

