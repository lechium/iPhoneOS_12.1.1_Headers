//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MobileSafariWindow;

@protocol MobileSafariWindowDelegate <NSObject>

@optional
- (void)safariWindow:(MobileSafariWindow *)arg1 didEndAllTouchesAtPoint:(struct CGPoint)arg2;
- (void)safariWindow:(MobileSafariWindow *)arg1 statusBarChangedFromHeight:(double)arg2 toHeight:(double)arg3;
@end

