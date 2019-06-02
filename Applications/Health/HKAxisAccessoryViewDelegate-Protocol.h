//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKGraphSeries, HKValueRange, UIView;

@protocol HKAxisAccessoryViewDelegate <NSObject>
- (void)accessoryView:(UIView *)arg1 forSeries:(HKGraphSeries *)arg2 hasUpdateWithNewData:(_Bool)arg3;
- (UIView *)series:(HKGraphSeries *)arg1 accessoryViewForDateRange:(HKValueRange *)arg2 timeScope:(long long)arg3;
- (struct UIEdgeInsets)accessoryViewEdgeInsetsForSeries:(HKGraphSeries *)arg1;
- (struct CGSize)accessoryViewSizeForSeries:(HKGraphSeries *)arg1;
@end

