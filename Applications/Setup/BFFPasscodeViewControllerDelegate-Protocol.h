//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BFFPasscodeViewController, NSString;

@protocol BFFPasscodeViewControllerDelegate
- (void)passcodeViewController:(BFFPasscodeViewController *)arg1 didFinishWithPasscodeCreation:(NSString *)arg2;

@optional
- (_Bool)passcodeViewControllerAllowSkip:(BFFPasscodeViewController *)arg1;
- (NSString *)passcodeViewControllerCustomFirstEntryInstructions:(BFFPasscodeViewController *)arg1;
- (void)passcodeViewController:(BFFPasscodeViewController *)arg1 didSetPasscode:(NSString *)arg2;
- (void)passcodeViewControllerWillSetPasscode:(BFFPasscodeViewController *)arg1;
@end

