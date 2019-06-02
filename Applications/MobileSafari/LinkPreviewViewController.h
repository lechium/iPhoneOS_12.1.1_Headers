//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LSAppLink, NSArray, TabDocument, _SFBrowserView, _WKActivatedElementInfo;

@interface LinkPreviewViewController : UIViewController
{
    _SFBrowserView *_browserView;	// 8 = 0x8
    _Bool _hasPreviewHeader;	// 16 = 0x10
    TabDocument *_previewTabDocument;	// 24 = 0x18
    NSArray *_linkActions;	// 32 = 0x20
    _WKActivatedElementInfo *_activatedElementInfo;	// 40 = 0x28
    LSAppLink *_appLink;	// 48 = 0x30
}

@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(nonatomic) _Bool hasPreviewHeader; // @synthesize hasPreviewHeader=_hasPreviewHeader;
@property(retain, nonatomic) _WKActivatedElementInfo *activatedElementInfo; // @synthesize activatedElementInfo=_activatedElementInfo;
@property(retain, nonatomic) NSArray *linkActions; // @synthesize linkActions=_linkActions;
@property(readonly, nonatomic) __weak TabDocument *previewTabDocument; // @synthesize previewTabDocument=_previewTabDocument;
- (void).cxx_destruct;	// IMP=0x0000000100068ef0
- (id)previewActionItems;	// IMP=0x0000000100068b7c
- (void)willCommitPreviewedWebView;	// IMP=0x0000000100068a84
- (void)updatePreviewLoadingUI;	// IMP=0x0000000100068968
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010006876c
- (void)viewDidLayoutSubviews;	// IMP=0x000000010006856c
- (void)loadView;	// IMP=0x00000001000683b8
- (id)initWithTabDocument:(id)arg1;	// IMP=0x00000001000682c4

@end

