//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKReportContentView.h"

@class NSArray, NSMapTable, UIView;

@interface HKReportColumnsContentView : HKReportContentView
{
    long long _numColumns;	// 8 = 0x8
    double _spacing;	// 16 = 0x10
    UIView *_columnContainerView;	// 24 = 0x18
    NSArray *_columnViews;	// 32 = 0x20
    NSMapTable *_columnSubviews;	// 40 = 0x28
    NSMapTable *_bottomConstraints;	// 48 = 0x30
    NSArray *_spacerContraints;	// 56 = 0x38
    struct UIEdgeInsets _insets;	// 64 = 0x40
}

@property(retain, nonatomic) NSArray *spacerContraints; // @synthesize spacerContraints=_spacerContraints;
@property(retain, nonatomic) NSMapTable *bottomConstraints; // @synthesize bottomConstraints=_bottomConstraints;
@property(retain, nonatomic) NSMapTable *columnSubviews; // @synthesize columnSubviews=_columnSubviews;
@property(retain, nonatomic) NSArray *columnViews; // @synthesize columnViews=_columnViews;
@property(retain, nonatomic) UIView *columnContainerView; // @synthesize columnContainerView=_columnContainerView;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) long long numColumns; // @synthesize numColumns=_numColumns;
- (void).cxx_destruct;	// IMP=0x0000000100031c60
- (void)_addView:(id)arg1 onColumnView:(id)arg2;	// IMP=0x0000000100031804
- (void)addSpacerWithHeight:(double)arg1 onColumn:(unsigned long long)arg2;	// IMP=0x0000000100031720
- (void)addSpacerOnColumn:(unsigned long long)arg1;	// IMP=0x0000000100031710
- (void)addView:(id)arg1 onColumn:(unsigned long long)arg2 toColumn:(unsigned long long)arg3;	// IMP=0x0000000100031284
- (void)addView:(id)arg1 onColumn:(unsigned long long)arg2;	// IMP=0x0000000100031030
- (double)widthFromColumn:(unsigned long long)arg1 toColumn:(unsigned long long)arg2;	// IMP=0x0000000100030bc8
- (double)heightOfColumn:(unsigned long long)arg1;	// IMP=0x0000000100030a24
- (double)widthOfColumn:(unsigned long long)arg1;	// IMP=0x00000001000308d4
- (void)_createColumns;	// IMP=0x00000001000302c4
- (void)_createContainerView;	// IMP=0x000000010002ff44
- (id)initWithColumns:(long long)arg1;	// IMP=0x000000010002fe98

@end

