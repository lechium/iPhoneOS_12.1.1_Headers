//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKReportContent.h"

@class NSArray;

@interface HKReportSectionContent : HKReportContent
{
    HKReportContent *_titleContent;	// 8 = 0x8
    NSArray *_contents;	// 16 = 0x10
    HKReportContent *_separatorContent;	// 24 = 0x18
}

@property(retain, nonatomic) HKReportContent *separatorContent; // @synthesize separatorContent=_separatorContent;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) HKReportContent *titleContent; // @synthesize titleContent=_titleContent;
- (void).cxx_destruct;	// IMP=0x00000001000d3984
- (id)description;	// IMP=0x00000001000d386c
- (double)minimumHeightNeeded;	// IMP=0x00000001000d37d4
- (void)setReport:(id)arg1;	// IMP=0x00000001000d364c
- (void)renderAndDraw:(_Bool)arg1;	// IMP=0x00000001000d3384
- (id)init;	// IMP=0x00000001000d3304

@end

