//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSSScreenshot;

@interface SSSPendingScreenshotRecord : NSObject
{
    SSSScreenshot *_screenshot;	// 8 = 0x8
    CDUnknownBlockType _deliveryCompletionBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType deliveryCompletionBlock; // @synthesize deliveryCompletionBlock=_deliveryCompletionBlock;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;	// IMP=0x0000000100038158
- (id)initWithScreenshot:(id)arg1 deliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038074

@end
