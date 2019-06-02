//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKViewController.h"

#import "HKCalendarWeekViewDelegate.h"
#import "HKDateCacheObserver.h"
#import "UIScrollViewDelegate.h"

@class HKDateCache, NSCalendar, NSDate, NSMutableArray, NSString, UIScrollView, WDMonthDayCell;

@interface WDCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver>
{
    unsigned long long _numberOfRows;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    HKDateCache *_dateCache;	// 24 = 0x18
    WDMonthDayCell *_selectedCell;	// 32 = 0x20
    NSDate *_initiallyCenteredDate;	// 40 = 0x28
    NSMutableArray *_weekViews;	// 48 = 0x30
    _Bool _needsInitialOffset;	// 56 = 0x38
    double _topInset;	// 64 = 0x40
    id <WDCalendarScrollViewControllerDelegate> _delegate;	// 72 = 0x48
}

@property(nonatomic) __weak id <WDCalendarScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void).cxx_destruct;	// IMP=0x000000010002fe0c
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;	// IMP=0x000000010002fdac
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;	// IMP=0x000000010002fad0
- (void)updateVisibleAccessoryViews;	// IMP=0x000000010002f1cc
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010002f1c0
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010002f1ac
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010002ede4
- (void)week:(id)arg1 cellSelected:(id)arg2;	// IMP=0x000000010002ed34
- (void)scrollToDate:(id)arg1 animateIfPossible:(_Bool)arg2;	// IMP=0x000000010002eaf8
- (unsigned long long)_firstVisibleWeekIndex;	// IMP=0x000000010002e9a4
- (id)_currentlyCenteredVisibleWeek;	// IMP=0x000000010002e6b4
- (_Bool)_dateIsVisible:(id)arg1;	// IMP=0x000000010002e54c
- (struct CGRect)_visibleContentRect;	// IMP=0x000000010002e3d8
- (id)_weekForDate:(id)arg1;	// IMP=0x000000010002e270
- (void)scrollToToday;	// IMP=0x000000010002e1b8
- (struct CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000010002de00
- (struct CGPoint)_centerPointToCenterDate:(id)arg1;	// IMP=0x000000010002dcb4
- (id)_startDateToTileWeekViews:(id)arg1;	// IMP=0x000000010002db9c
- (double)_heightOfAllWeekCells;	// IMP=0x000000010002da64
- (void)setSelectedCell:(id)arg1;	// IMP=0x000000010002d9fc
- (void)_selectCellForDate:(id)arg1;	// IMP=0x000000010002d670
- (void)_selectTodayCell;	// IMP=0x000000010002d318
- (void)_pulseCircle;	// IMP=0x000000010002d17c
- (id)_weekViewContainingTitleForThisMonth;	// IMP=0x000000010002d098
- (id)_weekViewForToday;	// IMP=0x000000010002d030
- (id)_todayAttributes;	// IMP=0x000000010002ce98
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002ce48
- (void)viewWillLayoutSubviews;	// IMP=0x000000010002cc98
- (void)loadView;	// IMP=0x000000010002ca30
- (void)_refreshViewsAndUpdateToday;	// IMP=0x000000010002c814
- (void)_createWeekViews;	// IMP=0x000000010002c6e8
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)dealloc;	// IMP=0x000000010002c560
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002c52c
- (id)initWithSelectedDate:(id)arg1;	// IMP=0x000000010002c378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

