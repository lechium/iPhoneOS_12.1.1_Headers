//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordBrandCell.h"

@interface WDMedicalRecordTimelineSourceCell : WDMedicalRecordBrandCell
{
    _Bool _connectionError;	// 8 = 0x8
}

@property(nonatomic, getter=hasConnectionError) _Bool connectionError; // @synthesize connectionError=_connectionError;
@property(readonly, nonatomic) _Bool allowsWrappingSubtitle;
- (void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2;	// IMP=0x0000000100148418
- (void)prepareForReuse;	// IMP=0x00000001001483c4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100148340

@end

