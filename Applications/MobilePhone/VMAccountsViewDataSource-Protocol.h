//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, VMAccountButton, VMAccountsView;

@protocol VMAccountsViewDataSource <NSObject>
- (unsigned long long)numberOfRowsForAccountsView:(VMAccountsView *)arg1;
- (VMAccountButton *)accountsView:(VMAccountsView *)arg1 buttonForRowAtIndex:(unsigned long long)arg2;

@optional
- (NSString *)titleForAccountsView:(VMAccountsView *)arg1;
@end

