//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UILabel, UITableView;

@interface PHSOSNumbersViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <PHSOSNumbersViewControllerDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    NSArray *_sosHandles;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray *sosHandles; // @synthesize sosHandles=_sosHandles;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PHSOSNumbersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010007527c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010007516c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100075008
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100074fbc
- (void)updateSOSHandles:(id)arg1;	// IMP=0x0000000100074f48
- (void)setUpConstraints;	// IMP=0x0000000100074934
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100074900
- (void)viewDidLoad;	// IMP=0x0000000100074380
- (id)initWithSOSHandles:(id)arg1;	// IMP=0x0000000100074300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

