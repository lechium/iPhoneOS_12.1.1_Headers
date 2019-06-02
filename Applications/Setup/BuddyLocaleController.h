//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BYLanguageLocaleController.h"

#import "BFFFlowItem.h"

@class BFFLocaleDataSource, NSMutableArray, NSString;

@interface BuddyLocaleController : BYLanguageLocaleController <BFFFlowItem>
{
    _Bool _fakeMode;	// 8 = 0x8
    NSMutableArray *_fakeViews;	// 16 = 0x10
    double _savedScrollPoint;	// 24 = 0x18
    id <BFFFlowItemDelegate> _delegate;	// 32 = 0x20
    NSString *_language;	// 40 = 0x28
    NSString *_selectedLanguage;	// 48 = 0x30
    BFFLocaleDataSource *_localeDataSource;	// 56 = 0x38
}

+ (id)localeScreenshotCachePath:(_Bool)arg1 tag:(id)arg2;	// IMP=0x000000010003c360
+ (_Bool)controllerNeedsToRun;	// IMP=0x000000010003b22c
+ (id)cloudConfigSkipKey;	// IMP=0x000000010003b224
@property(retain, nonatomic) BFFLocaleDataSource *localeDataSource; // @synthesize localeDataSource=_localeDataSource;
@property(copy, nonatomic) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010003d12c
- (_Bool)restoreScreenshot:(id)arg1;	// IMP=0x000000010003cb6c
- (void)takeScreenshots;	// IMP=0x000000010003cb18
- (_Bool)takeScreenshot:(id)arg1 tag:(id)arg2;	// IMP=0x000000010003c624
- (void)switchToRealMode;	// IMP=0x000000010003c474
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010003c218
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003c168
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000010003c0cc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010003bf2c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003bd48
- (id)countryAtIndexPath:(id)arg1;	// IMP=0x000000010003bc50
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010003bb9c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010003bb94
- (void)selectCountry:(id)arg1;	// IMP=0x000000010003b818
- (void)controllerWasPopped;	// IMP=0x000000010003b590
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003b53c
- (void)loadView;	// IMP=0x000000010003b4d4
- (id)init;	// IMP=0x000000010003b4c4
- (id)initInFakeMode:(_Bool)arg1;	// IMP=0x000000010003b364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
