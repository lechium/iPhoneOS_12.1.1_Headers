/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff;

@interface FBUISceneUpdateClientSettingsEvent : FBUISceneEvent {

	FBSSceneClientSettings* _settings;
	FBSSceneClientSettingsDiff* _diff;

}

@property (nonatomic,copy) FBSSceneClientSettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneClientSettingsDiff * settingsDiff;              //@synthesize diff=_diff - In the implementation block
-(void)setSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
-(FBSSceneClientSettings *)settings;
-(FBSSceneClientSettingsDiff *)settingsDiff;
-(void)setSettings:(FBSSceneClientSettings *)arg1 ;
@end

