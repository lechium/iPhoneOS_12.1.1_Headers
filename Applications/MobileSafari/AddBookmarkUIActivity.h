//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFAddBookmarkActivity.h"

#import "_SFSingleBookmarkNavigationControllerDelegate.h"

@class SingleBookmarkNavigationController, TabDocument;

@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate>
{
    SingleBookmarkNavigationController *_bookmarkNavController;	// 8 = 0x8
    TabDocument *_tabDocument;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100128034
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;	// IMP=0x0000000100127fe0
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2;	// IMP=0x0000000100127fd0
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x0000000100127f78
- (id)_beforeActivity;	// IMP=0x0000000100127f68
- (id)_embeddedActivityViewController;	// IMP=0x0000000100127f5c
- (id)activityViewController;	// IMP=0x0000000100127f4c
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000100127d90
- (id)init;	// IMP=0x0000000100127d80
- (id)initWithTabDocument:(id)arg1;	// IMP=0x0000000100127ce4

// Remaining properties
@property(nonatomic) __weak id <AddBookmarkActivityDelegate> delegate; // @dynamic delegate;

@end
