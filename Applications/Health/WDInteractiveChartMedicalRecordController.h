//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDInteractiveChartViewController.h"

@class WDMedicalRecordAnnotationViewDataSource;

@interface WDInteractiveChartMedicalRecordController : WDInteractiveChartViewController
{
    WDMedicalRecordAnnotationViewDataSource *_annotationViewDataSource;	// 8 = 0x8
}

@property(retain, nonatomic) WDMedicalRecordAnnotationViewDataSource *annotationViewDataSource; // @synthesize annotationViewDataSource=_annotationViewDataSource;
- (void).cxx_destruct;	// IMP=0x000000010001ca44
- (id)_colorForDisplayType:(id)arg1;	// IMP=0x000000010001ca20
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;	// IMP=0x000000010001c918
- (id)makeAnnotationDataSource;	// IMP=0x000000010001c90c
- (double)dateSelectorHeight;	// IMP=0x000000010001c900

@end
