//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSString, UILabel;

@interface WDMedicalRecordTimelineAppendixCell : WDMedicalRecordGroupableCell
{
    NSString *_title;	// 136 = 0x88
    UILabel *_titleLabel;	// 144 = 0x90
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001000612ec
- (id)_titleLabelFont;	// IMP=0x0000000100061298
- (void)setupSubviews;	// IMP=0x0000000100060ce4

@end

