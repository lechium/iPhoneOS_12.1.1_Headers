/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditor.h>
#import <libobjc.A.dylib/EKEventAutocompleteResultsEditItemDelegate.h>

@protocol EKUIAutocompletePendingSearchProtocol;
@class EKEventDateEditItem, EKEventAttendeesEditItem, EKEventAutocompleteResultsEditItem, EKCalendarItemTitleInlineEditItem, EKCalendarItemLocationInlineEditItem, EKCalendarItemCalendarEditItem, EKCalendarItemAlarmEditItem, EKEventURLAndNotesInlineEditItem, NSTimer, NSString, EKUIAutocompleteSearchResult, EKUIAutocompletePETTracker, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate> {

	EKEventDateEditItem* _dateItem;
	EKEventAttendeesEditItem* _attendeesEditItem;
	EKEventAutocompleteResultsEditItem* _autocompleteEditItem;
	EKCalendarItemTitleInlineEditItem* _titleInlineEditItem;
	EKCalendarItemLocationInlineEditItem* _locationInlineEditItem;
	EKCalendarItemCalendarEditItem* _calendarEditItem;
	EKCalendarItemAlarmEditItem* _alarmEditItem;
	EKEventURLAndNotesInlineEditItem* _notesEditItem;
	BOOL _shouldAutocomplete;
	id<EKUIAutocompletePendingSearchProtocol> _pendingSearch;
	NSTimer* _autocompleteTimer;
	NSString* _autocompleteSearchString;
	BOOL _isTransitioning;
	BOOL _autocompleteResultsVisible;
	unsigned long long _focusOnAppearanceTarget;
	BOOL _selectOnFocus;
	EKUIAutocompleteSearchResult* _selectedAutocompleteResult;
	unsigned long long _selectedAutocompleteResultIndex;
	EKUIAutocompleteSearchResult* _zeroKeywordResult;
	EKUIAutocompleteSearchResult* _naturalLanguageResult;
	BOOL _hasShownZeroKeywordResult;
	BOOL _hasShownNaturalLanguageResult;
	EKUIAutocompletePETTracker* _autocompletePETTracker;
	BOOL _showAttachments;
	UIColor* _backgroundColor;
	NSString* _suggestionKey;

}

@property (nonatomic,retain) NSString * suggestionKey;               //@synthesize suggestionKey=_suggestionKey - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTitleForCalendarItem;
+(Class)_SGSuggestionsServiceClass;
+(void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(BOOL)arg4 ;
+(id)_now;
+(void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2 ;
+(id)_copyAlarmsForAutocompleteFromResult:(id)arg1 ;
+(id)_copyAttendeesForAutocompleteFromResult:(id)arg1 ;
-(void)autocompleteResultsEditItemDidShowResults:(id)arg1 ;
-(void)autocompleteResultsEditItemDidHideResults:(id)arg1 ;
-(void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)setSuggestionKey:(NSString *)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)showAttachments;
-(void)setShowAttachments:(BOOL)arg1 ;
-(void)focus:(unsigned long long)arg1 select:(BOOL)arg2 ;
-(NSString *)suggestionKey;
-(id)_editItems;
-(void)_focusAppearanceTarget;
-(id)preferredTitle;
-(void)_updateTitleEditItemSeparatorVisibility;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)prepareEditItems;
-(void)_scheduleAutocompleteSearchWithString:(id)arg1 ;
-(void)_showAutocompleteResults;
-(void)_hideAndCancelAutocompleteResults;
-(void)_cancelPendingAutocompleteAndCleanup;
-(void)_scheduleAutocompleteTimerIfNeeded;
-(void)_beginAutocompleteSearch:(id)arg1 ;
-(void)_setAutocompleteResultsVisible:(BOOL)arg1 ;
-(id)_calendarItemIndexSet;
-(id)_orderedEditItems;
-(BOOL)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(id)_viewForSheet;
-(void)_setEventTitleForTestingAutocomplete:(id)arg1 ;
-(unsigned long long)entityType;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(UIColor *)backgroundColor;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
@end

