//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKTableViewController.h"

@class NSArray, UIImage, WDProfile;

@interface WDUninstalledAppSourcesViewController : HKTableViewController
{
    WDProfile *_profile;	// 8 = 0x8
    NSArray *_uninstalledSources;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *uninstalledSources; // @synthesize uninstalledSources=_uninstalledSources;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x0000000100005404
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000525c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100004f1c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100004ed0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100004ec8
- (id)_uninstalledSourcesFromSources:(id)arg1;	// IMP=0x0000000100004dfc
- (void)reloadSources;	// IMP=0x0000000100004a18
@property(readonly) UIImage *uninistalledAppImage;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004900
- (id)init;	// IMP=0x00000001000048c8

@end
