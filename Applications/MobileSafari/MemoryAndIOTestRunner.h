//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserController, NSString, NSURL;

@interface MemoryAndIOTestRunner : NSObject
{
    BrowserController *_browserController;	// 8 = 0x8
    NSString *_testName;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    unsigned long long _tabsLoadedCount;	// 32 = 0x20
    unsigned long long _liveTabs;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    int writesAtStart;	// 56 = 0x38
    unsigned long long _totalTabsToLoad;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010008575c
- (void)_collectTestResults;	// IMP=0x0000000100085574
- (unsigned long long)_collectCurrentLiveTabs;	// IMP=0x00000001000853c0
- (void)_collectIOUsageInfo:(id)arg1;	// IMP=0x00000001000852fc
- (void)_collectMemoryUsageInfo:(id)arg1;	// IMP=0x0000000100085114
@property(readonly, nonatomic) NSURL *testPageURL;
- (void)_openNewTabAndLoadTestURL;	// IMP=0x0000000100084dac
- (void)runTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100084d64
- (id)initWithTestName:(id)arg1 browserController:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000100084a18

@end

