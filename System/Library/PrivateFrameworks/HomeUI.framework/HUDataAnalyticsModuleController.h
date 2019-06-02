/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUDataAnalyticsModuleControllerDelegate;
@interface HUDataAnalyticsModuleController : HUItemTableModuleController {

	id<HUDataAnalyticsModuleControllerDelegate> _dataAnalyticsModuleControllerDelegate;

}

@property (assign,nonatomic,__weak) id<HUDataAnalyticsModuleControllerDelegate> dataAnalyticsModuleControllerDelegate;              //@synthesize dataAnalyticsModuleControllerDelegate=_dataAnalyticsModuleControllerDelegate - In the implementation block
-(id)module;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(id<HUDataAnalyticsModuleControllerDelegate>)dataAnalyticsModuleControllerDelegate;
-(void)setDataAnalyticsModuleControllerDelegate:(id<HUDataAnalyticsModuleControllerDelegate>)arg1 ;
@end
