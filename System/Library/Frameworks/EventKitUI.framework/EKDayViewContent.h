/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineLayoutScreenUtils.h>
#import <libobjc.A.dylib/EKDayOccurrenceViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKDayViewContentDelegate;
@class EKDayGridView, UIView, NSMutableArray, EKEvent, EKDayViewContentGeometryDelegate, EKCalendarDate, NSCalendar, UIColor, NSTimeZone, NSString;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate> {

	EKDayGridView* _grid;
	UIView* _saturdayDarkeningView;
	UIView* _sundayDarkeningView;
	unsigned long long _daysToDisplay;
	NSMutableArray* _lastLayoutWidthForDay;
	BOOL _loadingOccurrences;
	BOOL _putSelectionOnTop;
	BOOL _hasCustomOccurrenceMargin;
	BOOL _hasCustomOccurrencePadding;
	EKEvent* _selectedEvent;
	NSMutableArray* _dayStarts;
	NSMutableArray* _itemsForPreloadByDay;
	NSMutableArray* _itemsForPreloadByDayByEndDate;
	NSMutableArray* _itemsByDay;
	NSMutableArray* _itemsByDayByEndDate;
	CGRect _latestVisibleRect;
	double* _visiblePinnedStackHeightAbove;
	double* _visiblePinnedStackHeightBelow;
	EKDayViewContentGeometryDelegate* _geometryDelegate;
	NSMutableArray* _reusableViews;
	BOOL _dataLoaded;
	BOOL _offscreenOccurrencePinningEnabled;
	BOOL _allowsOccurrenceSelection;
	BOOL _eventsFillGrid;
	BOOL _usesSmallText;
	BOOL _darkensWeekends;
	BOOL _reduceLayoutProcessingForAnimation;
	int _occurrenceBackgroundStyle;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	NSCalendar* _calendar;
	id<EKDayViewContentDelegate> _delegate;
	double _fixedDayWidth;
	UIColor* _occurrenceTitleColor;
	UIColor* _occurrenceTimeColor;
	UIColor* _occurrenceLocationColor;
	UIColor* _occurrenceTextBackgroundColor;
	EKEvent* _dimmedOccurrence;
	UIEdgeInsets _occurrenceMargin;
	UIEdgeInsets _occurrencePadding;

}

@property (nonatomic,copy) EKCalendarDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) id<EKDayViewContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL offscreenOccurrencePinningEnabled;                    //@synthesize offscreenOccurrencePinningEnabled=_offscreenOccurrencePinningEnabled - In the implementation block
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                            //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL eventsFillGrid;                                       //@synthesize eventsFillGrid=_eventsFillGrid - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText;                                        //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) BOOL darkensWeekends;                                      //@synthesize darkensWeekends=_darkensWeekends - In the implementation block
@property (assign,nonatomic) BOOL reduceLayoutProcessingForAnimation;                   //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) double fixedDayWidth;                                      //@synthesize fixedDayWidth=_fixedDayWidth - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTitleColor;                            //@synthesize occurrenceTitleColor=_occurrenceTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTimeColor;                             //@synthesize occurrenceTimeColor=_occurrenceTimeColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceLocationColor;                         //@synthesize occurrenceLocationColor=_occurrenceLocationColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                   //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                             //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets occurrenceMargin;                             //@synthesize occurrenceMargin=_occurrenceMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets occurrencePadding;                            //@synthesize occurrencePadding=_occurrencePadding - In the implementation block
@property (nonatomic,readonly) double firstEventSecond; 
@property (setter=selectEvent:,nonatomic,retain) EKEvent * selectedEvent; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                                //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOccurrences:(id)arg1 ;
-(BOOL)usesSmallText;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned long long)arg5 ;
-(id)occurrenceViews;
-(void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2 ;
-(void)setFixedDayWidth:(double)arg1 ;
-(void)setHoursToPadTop:(double)arg1 ;
-(void)setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(void)_computeDayStartsAndEnds;
-(UIEdgeInsets)insetsForInterfaceLayout:(UIEdgeInsets)arg1 ;
-(id)allVisibleItems;
-(BOOL)offscreenOccurrencePinningEnabled;
-(void)_adjustViewsForPinning;
-(id)dayStarts;
-(double)_dayWidth;
-(CGPoint)pointForDate:(double)arg1 ;
-(void)_layoutDaysIfVisible;
-(void)rectBecameVisible:(CGRect)arg1 ;
-(id)visibleItemsByDay;
-(void)_layoutDay:(unsigned long long)arg1 isLoadingAsync:(BOOL)arg2 ;
-(id)itemsForPreloadByDay;
-(NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(void)applyContentItem:(id)arg1 toView:(id)arg2 ;
-(void)applyLoadedOccurrenceBatchStartingAtIndex:(long long)arg1 batchSize:(long long)arg2 fromArray:(id)arg3 animated:(BOOL)arg4 reverse:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTimeColor;
-(UIColor *)occurrenceLocationColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(UIEdgeInsets)occurrenceMargin;
-(UIEdgeInsets)occurrencePadding;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(NSRange)_dayRangeForEvent:(id)arg1 useProposedTime:(BOOL)arg2 ;
-(void)loadOccurrences:(id)arg1 ;
-(void)movePreloadedItemsToVisible;
-(void)applyLoadedOccurrencesWithBatching:(BOOL)arg1 animated:(BOOL)arg2 reverse:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_doOffscreenOccurrences;
-(BOOL)_getBottomPinRegion:(double*)arg1 dayIndex:(unsigned long long*)arg2 forPoint:(CGPoint)arg3 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(CGRect)RoundRectToScreenScaleForRect:(CGRect)arg1 ;
-(double)RoundToScreenScaleForFloat:(double)arg1 ;
-(double)RoundToScreenScale:(double)arg1 ;
-(void)dayOccurrenceViewSelected:(id)arg1 atPoint:(CGPoint)arg2 wasTapped:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2 ;
-(EKEvent *)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(void)setOccurrenceMargin:(UIEdgeInsets)arg1 ;
-(void)setOccurrencePadding:(UIEdgeInsets)arg1 ;
-(void)setStartDateWithDateComponents:(id)arg1 ;
-(id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)setDarkensWeekends:(BOOL)arg1 ;
-(double)firstEventSecond;
-(id)lastDisplayedSecond;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(void)loadAndLayoutOccurrences:(id)arg1 ;
-(BOOL)eventsIntersectRect:(CGRect)arg1 ;
-(void)setOffscreenOccurrencePinningEnabled:(BOOL)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(BOOL)eventsFillGrid;
-(BOOL)darkensWeekends;
-(BOOL)reduceLayoutProcessingForAnimation;
-(double)fixedDayWidth;
-(EKEvent *)dimmedOccurrence;
-(id)grid;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EKDayViewContentDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<EKDayViewContentDelegate>)delegate;
-(void)prepareForReuse;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
@end
