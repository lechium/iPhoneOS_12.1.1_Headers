//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKInteractiveChartAnnotationViewDataSource.h"

@class HKSleepChartPointUserInfo, NSString;

@interface WDSleepAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>
{
    HKSleepChartPointUserInfo *_sleepChartPointUserInfo;	// 8 = 0x8
}

@property(retain, nonatomic) HKSleepChartPointUserInfo *sleepChartPointUserInfo; // @synthesize sleepChartPointUserInfo=_sleepChartPointUserInfo;
- (void).cxx_destruct;	// IMP=0x00000001000552dc
- (id)_titleBodyColumnWithTitle:(id)arg1 body:(id)arg2;	// IMP=0x0000000100054ff8
- (id)_dateColumnWithDate:(id)arg1;	// IMP=0x0000000100054cfc
- (id)columnViewForColumnAtIndex:(long long)arg1;	// IMP=0x0000000100054b70
- (long long)numberOfColumnsForAnnotationView:(id)arg1;	// IMP=0x0000000100054b24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

