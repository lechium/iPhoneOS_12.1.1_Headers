//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, UIView;

@interface CBTemperatureWarningViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    UIView *_setupAssistantHeaderView;	// 16 = 0x10
    UIView *_containerFooterView;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *containerFooterView; // @synthesize containerFooterView=_containerFooterView;
@property(retain, nonatomic) UIView *setupAssistantHeaderView; // @synthesize setupAssistantHeaderView=_setupAssistantHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100011578
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000114a4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010001149c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100011494
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100011464
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100011434
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000113cc
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010001130c
- (void)setupFooterView;	// IMP=0x0000000100010dc4
- (void)setupHeaderView;	// IMP=0x0000000100010b10
- (void)setupTableView;	// IMP=0x00000001000108a4
- (void)setupView;	// IMP=0x0000000100010860
- (void)viewDidLoad;	// IMP=0x00000001000107a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
