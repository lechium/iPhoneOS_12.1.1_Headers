//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFStaticItemProvider.h"

@class HFAccessoryBrowsingManager, HMHome;

@interface HSSetupTroubleshootingTipItemProvider : HFStaticItemProvider
{
    HMHome *_home;	// 8 = 0x8
    HFAccessoryBrowsingManager *_accessoryBrowsingManager;	// 16 = 0x10
    unsigned long long _page;	// 24 = 0x18
}

+ (CDUnknownBlockType)troubleshootingTipItemComparator;	// IMP=0x00000001000114f8
@property(readonly, nonatomic) unsigned long long page; // @synthesize page=_page;
@property(readonly, nonatomic) HFAccessoryBrowsingManager *accessoryBrowsingManager; // @synthesize accessoryBrowsingManager=_accessoryBrowsingManager;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;	// IMP=0x0000000100011694
- (id)initWithPage:(unsigned long long)arg1 home:(id)arg2 accessoryBrowsingManager:(id)arg3;	// IMP=0x000000010001116c
- (id)initWithItems:(id)arg1;	// IMP=0x000000010001105c

@end

