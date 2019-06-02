/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PSAppCellularUsage;

@interface PSUIAppCellularUsageStatisticsByGroup : NSObject {

	NSMutableArray* _apps;
	NSMutableArray* _internalApps;
	NSMutableArray* _systemServices;
	NSMutableArray* _internalSystemServices;
	NSMutableArray* _uninstalledApps;
	PSAppCellularUsage* _wifiAssist;

}

@property (nonatomic,retain) NSMutableArray * apps;                                //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalApps;                        //@synthesize internalApps=_internalApps - In the implementation block
@property (nonatomic,retain) NSMutableArray * systemServices;                      //@synthesize systemServices=_systemServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * internalSystemServices;              //@synthesize internalSystemServices=_internalSystemServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * uninstalledApps;                     //@synthesize uninstalledApps=_uninstalledApps - In the implementation block
@property (nonatomic,retain) PSAppCellularUsage * wifiAssist;                      //@synthesize wifiAssist=_wifiAssist - In the implementation block
-(PSAppCellularUsage *)wifiAssist;
-(NSMutableArray *)internalApps;
-(void)setInternalApps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)systemServices;
-(void)setSystemServices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)internalSystemServices;
-(void)setInternalSystemServices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)uninstalledApps;
-(void)setUninstalledApps:(NSMutableArray *)arg1 ;
-(void)setWifiAssist:(PSAppCellularUsage *)arg1 ;
-(void)setApps:(NSMutableArray *)arg1 ;
-(NSMutableArray *)apps;
-(id)init;
@end
