//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "PhoneTabViewController.h"

@class NSString, UIViewController<PhoneTabViewController>;

@interface PhoneNavigationController : UINavigationController <PhoneTabViewController>
{
    UIViewController<PhoneTabViewController> *_rootController;	// 8 = 0x8
}

+ (id)defaultPNGName;	// IMP=0x000000010001dbac
+ (id)tabBarIconImage;	// IMP=0x000000010001dba4
+ (id)tabBarIconName;	// IMP=0x000000010001db9c
+ (CDStruct_5ec447a9)badge;	// IMP=0x000000010001db8c
+ (int)tabViewType;	// IMP=0x000000010001db84
- (void).cxx_destruct;	// IMP=0x000000010001de6c
- (void)handleURL:(id)arg1;	// IMP=0x000000010001dde8
- (void)prepareForSnapshot;	// IMP=0x000000010001dda8
- (_Bool)shouldSnapshot;	// IMP=0x000000010001dd18
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001dc60
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100006e8c
- (void)setViewControllers:(id)arg1;	// IMP=0x000000010000eebc
- (id)rootViewController;	// IMP=0x000000010001dc50
- (void)_updateRootViewController;	// IMP=0x0000000100006f74
- (void)dealloc;	// IMP=0x000000010001dbd8
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000100006c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
