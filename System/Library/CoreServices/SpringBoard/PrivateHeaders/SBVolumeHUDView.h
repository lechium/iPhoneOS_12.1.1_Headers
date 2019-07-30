//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;	// 8 = 0x8
    _Bool _headphonesPresent;	// 12 = 0xc
    float _euVolumeLimit;	// 16 = 0x10
}

+ (_Bool)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2;	// IMP=0x00000001000a4ef4
+ (float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;	// IMP=0x00000001000a4e8c
+ (float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2;	// IMP=0x00000001000a4e28
@property(nonatomic) float EUVolumeLimit; // @synthesize EUVolumeLimit=_euVolumeLimit;
@property(nonatomic) _Bool headphonesPresent; // @synthesize headphonesPresent=_headphonesPresent;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(struct CGSize)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000001000a578c
- (id)_blockColorForValue:(float)arg1;	// IMP=0x00000001000a5634
- (void)setProgress:(float)arg1;	// IMP=0x00000001000a5574
- (id)init;	// IMP=0x00000001000a5478
- (void)_updateLabels;	// IMP=0x00000001000a509c
- (void)_updateImage;	// IMP=0x00000001000a4f50

@end

