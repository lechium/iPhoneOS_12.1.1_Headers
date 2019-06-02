/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassActionPicker.h>

@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker {

	BOOL _isPerformingBatchMerge;
	BOOL _isTetheredSyncingEnabled;
	BOOL _isAnotherAccountSyncingDataclass;
	BOOL _isDataclassSyncingUsingExchangeOnly;
	BOOL _localStoreHasReadOnlyCalendars;
	NSString* _tetheredSyncingSource;

}

@property (assign,setter=setPerformingBatchMerge:,nonatomic) BOOL isPerformingBatchMerge;                                          //@synthesize isPerformingBatchMerge=_isPerformingBatchMerge - In the implementation block
@property (assign,setter=setTetheredSyncingEnabled:,nonatomic) BOOL isTetheredSyncingEnabled;                                      //@synthesize isTetheredSyncingEnabled=_isTetheredSyncingEnabled - In the implementation block
@property (assign,setter=setAnotherAccountIsSyncingDataclass:,nonatomic) BOOL isAnotherAccountSyncingDataclass;                    //@synthesize isAnotherAccountSyncingDataclass=_isAnotherAccountSyncingDataclass - In the implementation block
@property (assign,setter=setDataclassIsSyncingUsingExchangeOnly:,nonatomic) BOOL isDataclassSyncingUsingExchangeOnly;              //@synthesize isDataclassSyncingUsingExchangeOnly=_isDataclassSyncingUsingExchangeOnly - In the implementation block
@property (assign,nonatomic) BOOL localStoreHasReadOnlyCalendars;                                                                  //@synthesize localStoreHasReadOnlyCalendars=_localStoreHasReadOnlyCalendars - In the implementation block
@property (assign,nonatomic) NSString * tetheredSyncingSource;                                                                     //@synthesize tetheredSyncingSource=_tetheredSyncingSource - In the implementation block
-(id)descriptionForDataclassAction:(id)arg1 ;
-(BOOL)isPerformingBatchMerge;
-(void)setPerformingBatchMerge:(BOOL)arg1 ;
-(BOOL)isTetheredSyncingEnabled;
-(void)setTetheredSyncingEnabled:(BOOL)arg1 ;
-(BOOL)isAnotherAccountSyncingDataclass;
-(void)setAnotherAccountIsSyncingDataclass:(BOOL)arg1 ;
-(BOOL)isDataclassSyncingUsingExchangeOnly;
-(void)setDataclassIsSyncingUsingExchangeOnly:(BOOL)arg1 ;
-(BOOL)localStoreHasReadOnlyCalendars;
-(void)setLocalStoreHasReadOnlyCalendars:(BOOL)arg1 ;
-(NSString *)tetheredSyncingSource;
-(void)setTetheredSyncingSource:(NSString *)arg1 ;
-(id)title;
-(id)message;
@end

