//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSDate, NSString, UITableView, UITextField;

@interface FieldTestSaveViewController : UIViewController <UITableViewDataSource, UITextFieldDelegate>
{
    NSDate *_timeStamp;	// 8 = 0x8
    NSArray *_saveHistory;	// 16 = 0x10
    UITableView *saveContentTable;	// 24 = 0x18
    UITextField *saveDescription;	// 32 = 0x20
}

@property(retain, nonatomic) UITextField *saveDescription; // @synthesize saveDescription;
@property(retain, nonatomic) UITableView *saveContentTable; // @synthesize saveContentTable;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100008000
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100007ff8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100007eac
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100007e94
- (void)backgroundTouched:(id)arg1;	// IMP=0x0000000100007e7c
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100007e58
- (void)cancelPressed:(id)arg1;	// IMP=0x0000000100007e18
- (void)savePressed:(id)arg1;	// IMP=0x0000000100007c58
- (void)dealloc;	// IMP=0x0000000100007be8
- (void)viewDidUnload;	// IMP=0x0000000100007bb4
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100007b80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007afc
- (void)viewDidLoad;	// IMP=0x0000000100007a88
- (id)initWithSaveHistory:(id)arg1;	// IMP=0x00000001000079e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
