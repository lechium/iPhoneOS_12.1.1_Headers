//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIViewController;

@protocol LinkPreviewProvider <NSObject>
- (void)didDismissLinkPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (void)commitLinkPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)linkPreviewViewControllerForURL:(NSURL *)arg1;
@end

