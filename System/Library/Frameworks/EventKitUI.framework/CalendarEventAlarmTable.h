/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol CalendarEventAlarmTableDelegate, EKStyleProvider;
@class NSString, NSIndexPath;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {

	long long _alarmIdentifier;
	NSString* _customString;
	BOOL _immediateAlarmCreation;
	NSIndexPath* _selectedItem;
	BOOL _useAllDayAlarms;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	BOOL _customSelected;
	BOOL _shouldShowLeaveNowOption;
	BOOL _leaveNowAlarmSelected;
	BOOL _eventHasTravelTime;
	id<CalendarEventAlarmTableDelegate> _alarmTableDelegate;
	id<EKStyleProvider> _styleProvider;

}

@property (assign,nonatomic,__weak) id<CalendarEventAlarmTableDelegate> alarmTableDelegate;              //@synthesize alarmTableDelegate=_alarmTableDelegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL useAllDayAlarms;                                                       //@synthesize useAllDayAlarms=_useAllDayAlarms - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;                             //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL customSelected;                                                        //@synthesize customSelected=_customSelected - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeaveNowOption;                                              //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) BOOL leaveNowAlarmSelected;                                                 //@synthesize leaveNowAlarmSelected=_leaveNowAlarmSelected - In the implementation block
@property (assign,nonatomic) BOOL eventHasTravelTime;                                                    //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)customSelected;
-(void)setEventHasTravelTime:(BOOL)arg1 ;
-(void)setShouldShowLeaveNowOption:(BOOL)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(id)_indexPathForPresetIdentifier:(long long)arg1 ;
-(void)_selectIndexPath:(id)arg1 ;
-(void)setLeaveNowAlarmSelected:(BOOL)arg1 ;
-(unsigned long long)countOfPresets;
-(long long)_presetIdentifierForRow:(long long)arg1 ;
-(int)intervalForPresetIdentifier:(long long)arg1 ;
-(BOOL)useAllDayAlarms;
-(BOOL)eventHasTravelTime;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(long long)arg1 ;
-(long long)presetIdentifier;
-(void)setCustomString:(id)arg1 ;
-(void)setCustomSelected:(BOOL)arg1 ;
-(long long)presetIdentifierAtIndex:(unsigned long long)arg1 ;
-(id<CalendarEventAlarmTableDelegate>)alarmTableDelegate;
-(void)setAlarmTableDelegate:(id<CalendarEventAlarmTableDelegate>)arg1 ;
-(void)setUseAllDayAlarms:(BOOL)arg1 ;
-(BOOL)shouldShowLeaveNowOption;
-(BOOL)leaveNowAlarmSelected;
-(id<EKStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

