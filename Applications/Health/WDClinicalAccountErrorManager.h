//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WDClinicalAccountErrorManager : NSObject
{
}

+ (id)_topViewController;	// IMP=0x00000001000f46c0
+ (void)_handleMultipleAccountsNeedRelogin;	// IMP=0x00000001000f44d4
+ (void)_handleSingleAccountNeedsRelogin:(id)arg1 profile:(id)arg2;	// IMP=0x00000001000f40c4
+ (void)_dismissReloginViewController:(id)arg1;	// IMP=0x00000001000f3fcc
+ (void)reloginAccount:(id)arg1 profile:(id)arg2;	// IMP=0x00000001000f3dc4
+ (void)presentErrorsIfNecessaryForAccounts:(id)arg1 profile:(id)arg2;	// IMP=0x00000001000f34b0

@end

