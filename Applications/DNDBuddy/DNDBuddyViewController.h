//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DNDBuddyButtonViewDelegate.h"

@class CARAutomaticDNDStatus, DNDBuddyContainer, DNDBuddyWelcomeView, NSString, UIStatusBar;

@interface DNDBuddyViewController : UIViewController <DNDBuddyButtonViewDelegate>
{
    _Bool _initialPresentation;	// 8 = 0x8
    DNDBuddyContainer *_container;	// 16 = 0x10
    DNDBuddyWelcomeView *_buddyView;	// 24 = 0x18
    CARAutomaticDNDStatus *_DNDPreferences;	// 32 = 0x20
    UIStatusBar *_statusBar;	// 40 = 0x28
}

@property(nonatomic) _Bool initialPresentation; // @synthesize initialPresentation=_initialPresentation;
@property(retain, nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) CARAutomaticDNDStatus *DNDPreferences; // @synthesize DNDPreferences=_DNDPreferences;
@property(retain, nonatomic) DNDBuddyWelcomeView *buddyView; // @synthesize buddyView=_buddyView;
@property(readonly, nonatomic) __weak DNDBuddyContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;	// IMP=0x00000001000086fc
- (void)DNDBuddyButtonView:(id)arg1 didTapButtonAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100008178
- (void)learnMoreVCComplete:(id)arg1;	// IMP=0x0000000100008164
- (void)learnMoreButtonTapped:(id)arg1;	// IMP=0x0000000100007ff8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100007f28
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100007e10
- (void)viewDidLoad;	// IMP=0x00000001000072e4
- (id)initWithContainer:(id)arg1 initialPresentation:(_Bool)arg2;	// IMP=0x0000000100007258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

