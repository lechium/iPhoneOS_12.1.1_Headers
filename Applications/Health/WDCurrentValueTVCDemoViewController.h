//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "WDViewDemoVCProtocol.h"

@class NSArray, WDProfile;

@interface WDCurrentValueTVCDemoViewController : UITableViewController <WDViewDemoVCProtocol>
{
    WDProfile *_profile;	// 8 = 0x8
    NSArray *_dataSources;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;	// IMP=0x000000010008acb0
- (id)createDataSources;	// IMP=0x000000010008a554
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008a540
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008a328
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010008a2dc
- (void)viewDidLoad;	// IMP=0x000000010008a268
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010008a1b0

@end
