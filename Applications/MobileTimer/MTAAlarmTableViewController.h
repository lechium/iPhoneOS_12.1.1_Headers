//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTATableViewController.h"

#import "MTAAlarmEditViewControllerDelegate.h"
#import "MTAAlarmTableViewCellDelegate.h"
#import "MTAStateManagement.h"
#import "MTAlarmDataSourceObserver.h"

@class MTAAlarmEditViewController, MTAlarm, MTAlarmDataSource, MTAlarmManager, NSString, NSUserActivity;

@interface MTAAlarmTableViewController : MTATableViewController <MTAAlarmTableViewCellDelegate, MTAlarmDataSourceObserver, MTAAlarmEditViewControllerDelegate, MTAStateManagement>
{
    _Bool _viewVisible;	// 8 = 0x8
    _Bool _didScrollToCurrentTime;	// 9 = 0x9
    NSUserActivity *_userActivity;	// 16 = 0x10
    _Bool _isRunningPPTTest;	// 24 = 0x18
    MTAlarmManager *_alarmManager;	// 32 = 0x20
    MTAlarmDataSource *_dataSource;	// 40 = 0x28
    MTAlarm *_alarmToEdit;	// 48 = 0x30
    MTAAlarmEditViewController *_alarmEditViewController;	// 56 = 0x38
}

@property(retain, nonatomic) MTAAlarmEditViewController *alarmEditViewController; // @synthesize alarmEditViewController=_alarmEditViewController;
@property(nonatomic) _Bool isRunningPPTTest; // @synthesize isRunningPPTTest=_isRunningPPTTest;
@property(retain, nonatomic) MTAlarm *alarmToEdit; // @synthesize alarmToEdit=_alarmToEdit;
@property(retain, nonatomic) MTAlarmDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MTAlarmManager *alarmManager; // @synthesize alarmManager=_alarmManager;
- (void).cxx_destruct;	// IMP=0x0000000100024988
- (void)setAlarmEnabled:(_Bool)arg1 forCell:(id)arg2;	// IMP=0x00000001000244f0
- (id)currentAlarmEditController;	// IMP=0x00000001000244e4
- (void)handleContentSizeTransitionFrom:(id)arg1;	// IMP=0x0000000100024460
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;	// IMP=0x00000001000243fc
- (void)_scrollToAlarm:(id)arg1;	// IMP=0x0000000100024300
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;	// IMP=0x0000000100024154
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;	// IMP=0x0000000100023fa8
- (void)alarmEditControllerDidCancel:(id)arg1;	// IMP=0x0000000100023f9c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100023f00
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;	// IMP=0x0000000100023e8c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100023ccc
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100023b58
- (void)showEditViewForRow:(long long)arg1;	// IMP=0x0000000100023abc
- (void)_removeAlarm:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023878
- (void)_updateAlarm:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023634
- (void)_addAlarm:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000233f0
- (void)dismissAddViewController:(id)arg1;	// IMP=0x00000001000232dc
- (void)showAddViewForAlarmWithID:(id)arg1;	// IMP=0x00000001000231ec
- (void)showAddViewForAlarm:(id)arg1;	// IMP=0x0000000100023144
- (void)showAddView;	// IMP=0x0000000100023134
- (id)addViewController;	// IMP=0x0000000100022f88
- (void)saveScrollPoint;	// IMP=0x0000000100022eb4
- (long long)numberOfItems;	// IMP=0x0000000100022e28
- (id)noItemsText;	// IMP=0x0000000100022db8
- (void)setupForTest:(id)arg1 options:(id)arg2;	// IMP=0x0000000100022d80
- (void)saveState;	// IMP=0x0000000100022d74
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100022d08
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100022cb0
- (void)scrollToSavedPoint;	// IMP=0x0000000100022b40
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100022af0
- (void)dataSourceDidReload:(id)arg1;	// IMP=0x0000000100022a9c
- (void)_reloadData:(CDUnknownBlockType)arg1;	// IMP=0x00000001000229a0
- (void)viewDidLoad;	// IMP=0x00000001000227ac
- (id)contentScrollView;	// IMP=0x00000001000227a0
- (id)initWithAlarmManager:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100022564

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
