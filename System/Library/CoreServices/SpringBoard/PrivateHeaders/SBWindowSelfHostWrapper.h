//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBWindow, UIView, UIWindow;

@interface SBWindowSelfHostWrapper : NSObject
{
    SBWindow *_window;	// 8 = 0x8
    UIView *_contextHostView;	// 16 = 0x10
    NSString *_contextHostRequester;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *contextHostRequester; // @synthesize contextHostRequester=_contextHostRequester;
@property(retain, nonatomic) UIView *contextHostView; // @synthesize contextHostView=_contextHostView;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x00000001004951a4
- (void)stopHosting;	// IMP=0x0000000100494f94

@end

