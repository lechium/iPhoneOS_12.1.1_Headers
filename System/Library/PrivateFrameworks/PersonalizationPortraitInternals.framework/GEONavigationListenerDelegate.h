/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationListenerDelegate <NSObject>
@optional
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateActiveRouteData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2;
-(void)navigationListener:(id)arg1 didUpdateStepNameInfo:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateRideSelections:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromSign:(SCD_Struct_PP6)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromManeuver:(SCD_Struct_PP6)arg2;
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(SCD_Struct_PP6)arg2;
-(void)navigationListener:(id)arg1 didUpdateTrafficIncidentAlertDetailsData:(id)arg2;
-(void)navigationListener:(id)arg1 didUpdateNavigationVoiceVolume:(int)arg2;

@end
