//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDTableViewSection.h"

@interface WDClinicalSettingsOptInSection : WDTableViewSection
{
    _Bool _optIn;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool optIn; // @synthesize optIn=_optIn;
- (void)_setOptInStatus:(long long)arg1;	// IMP=0x000000010006f84c
- (void)_fetchOptInStatus;	// IMP=0x000000010006f4fc
- (void)_handleOptInSwitchChanged:(id)arg1;	// IMP=0x000000010006f4b4
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006f330
- (id)_optInCellForTableView:(id)arg1;	// IMP=0x000000010006f1b8
- (id)_viewDataCellForTableView:(id)arg1;	// IMP=0x000000010006f080
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;	// IMP=0x000000010006f038
- (id)titleForHeader;	// IMP=0x000000010006efd4
- (unsigned long long)numberOfRows;	// IMP=0x000000010006efcc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006ef7c

@end

