/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMNLEventInBanner : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(void)trackEventWithScalar:(unsigned long long)arg1 interface:(SGMNLEventInterface_)arg2 actionType:(SGMNLEventActionType_)arg3 eventType:(id)arg4 languageID:(id)arg5 daysFromStartDate:(unsigned long long)arg6 confidenceScore:(unsigned long long)arg7 significantSender:(SGMBoolOption_)arg8 participantCount:(unsigned long long)arg9 extractionLevel:(SGMNLEventExtractionLevel_)arg10 usedBubblesCount:(unsigned long long)arg11 titleSource:(SGMEventTitleSource_)arg12 titleAdj:(SGMEventStringAdj_)arg13 dateAdj:(SGMEventDateAdj_)arg14 duraAdj:(SGMEventDurationAdj_)arg15 locationAdj:(SGMEventLocationAdj_)arg16 addedAttendeesCount:(id)arg17 calendarAppUsageLevel:(id)arg18 mailAppUsageLevel:(SGMAppUsageLevel_)arg19 messagesAppUsageLevel:(SGMAppUsageLevel_)arg20 ;
-(PETScalarEventTracker *)tracker;
-(id)init;
@end

