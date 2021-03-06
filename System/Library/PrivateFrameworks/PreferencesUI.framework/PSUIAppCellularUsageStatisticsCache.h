/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PSCellularUsage, NSDictionary;

@interface PSUIAppCellularUsageStatisticsCache : NSObject {

	BOOL _showInternalDetails;
	NSMutableDictionary* _dataUsageStatisticsByBundleID;
	NSMutableDictionary* _dataUsageStatisticsByProcessName;
	PSCellularUsage* _totalUsage;
	NSDictionary* _workspaceInfoDict;

}

@property (retain) NSMutableDictionary * dataUsageStatisticsByBundleID;                 //@synthesize dataUsageStatisticsByBundleID=_dataUsageStatisticsByBundleID - In the implementation block
@property (retain) NSMutableDictionary * dataUsageStatisticsByProcessName;              //@synthesize dataUsageStatisticsByProcessName=_dataUsageStatisticsByProcessName - In the implementation block
@property (nonatomic,retain) PSCellularUsage * totalUsage;                              //@synthesize totalUsage=_totalUsage - In the implementation block
@property (assign,nonatomic) BOOL showInternalDetails;                                  //@synthesize showInternalDetails=_showInternalDetails - In the implementation block
@property (retain) NSDictionary * workspaceInfoDict;                                    //@synthesize workspaceInfoDict=_workspaceInfoDict - In the implementation block
+(id)sharedInstance;
-(BOOL)billingCycleSupported;
-(void)_clearCache;
-(id)billingCycleEndDate;
-(BOOL)useCalendarMonthBillingCycle;
-(id)previousBillingCycleEndDate;
-(void)setTotalUsage:(PSCellularUsage *)arg1 ;
-(PSCellularUsage *)totalUsage;
-(void)_handleUsageOrInfoChanged;
-(void)fetchWorkspaceInfo;
-(id)workspaceInfo;
-(void)fetchDataUsageStatistics;
-(id)usageByBundleID;
-(id)usageByProcessName;
-(NSMutableDictionary *)dataUsageStatisticsByBundleID;
-(void)setDataUsageStatisticsByBundleID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dataUsageStatisticsByProcessName;
-(void)setDataUsageStatisticsByProcessName:(NSMutableDictionary *)arg1 ;
-(BOOL)showInternalDetails;
-(void)setShowInternalDetails:(BOOL)arg1 ;
-(NSDictionary *)workspaceInfoDict;
-(void)setWorkspaceInfoDict:(NSDictionary *)arg1 ;
-(id)initPrivate;
-(id)init;
-(void)dealloc;
-(void)willEnterForeground;
@end

