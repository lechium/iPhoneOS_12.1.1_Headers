//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PGPictureInPictureViewController.h"

@class NSString;

@interface PHPIPWrapperViewController : UIViewController <PGPictureInPictureViewController>
{
    _Bool _pipIsBeingResized;	// 8 = 0x8
    UIViewController *_wrappedViewController;	// 16 = 0x10
    id <PHPIPWrapperViewControllerDelegateProtocol> _delegate;	// 24 = 0x18
    CDUnknownBlockType _didAnimatePictureInPictureStopCompletionBlock;	// 32 = 0x20
}

@property _Bool pipIsBeingResized; // @synthesize pipIsBeingResized=_pipIsBeingResized;
@property(copy, nonatomic) CDUnknownBlockType didAnimatePictureInPictureStopCompletionBlock; // @synthesize didAnimatePictureInPictureStopCompletionBlock=_didAnimatePictureInPictureStopCompletionBlock;
@property __weak id <PHPIPWrapperViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) UIViewController *wrappedViewController; // @synthesize wrappedViewController=_wrappedViewController;
- (void).cxx_destruct;	// IMP=0x000000010002fd90
- (void)viewDidResize;	// IMP=0x000000010002fc58
- (void)viewWillResize;	// IMP=0x000000010002fbf4
- (void)dealloc;	// IMP=0x000000010002fba0
- (void)actionButtonTapped;	// IMP=0x000000010002faa0
- (struct CGSize)preferredContentSize;	// IMP=0x000000010002f904
- (void)didAnimatePictureInPictureStop;	// IMP=0x000000010002f7b8
- (void)willAnimatePictureInPictureStop;	// IMP=0x000000010002f7b4
- (void)didAnimatePictureInPictureStart;	// IMP=0x000000010002f7b0
- (void)willAnimatePictureInPictureStart;	// IMP=0x000000010002f520
- (void)viewDidLoad;	// IMP=0x000000010002f448
- (id)init;	// IMP=0x0000000100006d54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowAlternateActionButtonImage;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end

