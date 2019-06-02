//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDHealthTableViewController.h"

#import "WDUserActivityResponder.h"

@class NSString;

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder>
{
    int _sourceListUpdateToken;	// 8 = 0x8
}

+ (id)tableViewSectionClasses;	// IMP=0x0000000100003fa0
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x00000001000047cc
- (void)applyChangeActivity:(id)arg1;	// IMP=0x00000001000047c8
- (void)_updateActivityForViewDidAppear;	// IMP=0x0000000100004724
- (id)uniqueUserActivityType;	// IMP=0x00000001000046f8
- (void)pushViewController:(id)arg1;	// IMP=0x000000010000465c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100004608
- (void)dealloc;	// IMP=0x00000001000045ac
- (void)reloadSectionData;	// IMP=0x0000000100004450
- (void)_registerForSourceChangeNotifications;	// IMP=0x000000010000426c
- (void)viewDidLoad;	// IMP=0x000000010000419c
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000100004038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
