//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem
{
    _Bool _newAccount;	// 16 = 0x10
    _Bool _promptToDisable;	// 17 = 0x11
}

@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
- (void)notNow;	// IMP=0x0000000100213018
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x0000000100212e80
- (id)initWithAccountURL:(id)arg1 newAccount:(_Bool)arg2 promptToDisable:(_Bool)arg3;	// IMP=0x0000000100212e08

@end

