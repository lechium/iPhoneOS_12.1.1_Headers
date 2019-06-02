/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATXHeuristicDataSources
@required
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3;
-(void)passesWithStyle:(id)arg1 callback:(/*^block*/id)arg2;
-(void)birthdaysWithCallback:(/*^block*/id)arg1;
-(void)getEventsWithProminentFeature:(id)arg1 callback:(/*^block*/id)arg2;
-(void)isDNDActive:(/*^block*/id)arg1;
-(void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(BOOL)arg5 callback:(/*^block*/id)arg6;
-(void)alarms:(/*^block*/id)arg1;
-(void)contentsWithCallback:(/*^block*/id)arg1;
-(void)callNewerThan:(double)arg1 showIncoming:(BOOL)arg2 showOutgoing:(BOOL)arg3 missedOnly:(BOOL)arg4 callback:(/*^block*/id)arg5;
-(void)upcomingEventsWithCallback:(/*^block*/id)arg1;
-(void)vipsWithCallback:(/*^block*/id)arg1;
-(void)nlEventsWithCallback:(/*^block*/id)arg1;
-(void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(/*^block*/id)arg3;
-(void)favoritesWithContacts:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2;
-(void)alarmTimeOfDay:(/*^block*/id)arg1;

@end

