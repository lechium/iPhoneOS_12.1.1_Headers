//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBFolderViewDelegate.h"

@class NSString, SBFolderView, SBIconViewMap;

@interface SBHomeScreenPreviewView : UIView <SBFolderViewDelegate>
{
    SBIconViewMap *_viewMap;	// 8 = 0x8
    SBFolderView *_folderContent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001004131c0
- (void)folderViewShouldBeginEditing:(id)arg1;	// IMP=0x00000001004131bc
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;	// IMP=0x00000001004131b8
- (void)folderViewDidEndScrolling:(id)arg1;	// IMP=0x00000001004131b4
- (void)folderViewWillBeginScrolling:(id)arg1;	// IMP=0x00000001004131b0
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;	// IMP=0x00000001004131ac
- (Class)iconListViewClassForFolderView:(id)arg1;	// IMP=0x0000000100413198
- (void)dealloc;	// IMP=0x0000000100413120
- (id)initWithFrame:(struct CGRect)arg1 iconController:(id)arg2 wallpaperController:(id)arg3;	// IMP=0x0000000100412b30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
