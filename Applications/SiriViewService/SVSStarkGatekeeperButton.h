//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface SVSStarkGatekeeperButton : UIButton
{
    NSString *_buttonTitle;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;	// IMP=0x000000010006257c
- (_Bool)_isRTL;	// IMP=0x0000000100062524
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010006244c
- (void)layoutSubviews;	// IMP=0x0000000100062288
- (void)_updateChevronForRTL:(_Bool)arg1;	// IMP=0x000000010006223c
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000001000621c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000620c0

@end
