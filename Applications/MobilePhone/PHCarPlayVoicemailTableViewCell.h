//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCarPlayGenericTableViewCell.h"

@class NSLayoutConstraint, NSString, TPBadgeView, UIDateLabel, UIImageView, UILabel, UIStackView, VMVoicemail;

@interface PHCarPlayVoicemailTableViewCell : PHCarPlayGenericTableViewCell
{
    VMVoicemail *_representedVoicemail;	// 8 = 0x8
    NSString *_localizedSenderIdentityTitle;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    NSLayoutConstraint *_nameLabelBaselineConstraint;	// 32 = 0x20
    UILabel *_subtitleLabel;	// 40 = 0x28
    UIDateLabel *_dateLabel;	// 48 = 0x30
    UIImageView *_unreadIndicatorImageView;	// 56 = 0x38
    UIStackView *_stackView;	// 64 = 0x40
    TPBadgeView *_badgeView;	// 72 = 0x48
}

@property(retain, nonatomic) TPBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) UIImageView *unreadIndicatorImageView; // @synthesize unreadIndicatorImageView=_unreadIndicatorImageView;
@property(retain) UIDateLabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) NSLayoutConstraint *nameLabelBaselineConstraint; // @synthesize nameLabelBaselineConstraint=_nameLabelBaselineConstraint;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) NSString *localizedSenderIdentityTitle; // @synthesize localizedSenderIdentityTitle=_localizedSenderIdentityTitle;
@property(retain, nonatomic) VMVoicemail *representedVoicemail; // @synthesize representedVoicemail=_representedVoicemail;
- (void).cxx_destruct;	// IMP=0x00000001000bc50c
- (void)setSubtitleString:(id)arg1;	// IMP=0x00000001000bbfa4
- (void)setPendingState:(_Bool)arg1;	// IMP=0x00000001000bbe68
- (void)updatePendingState;	// IMP=0x00000001000bbdf8
- (void)_voicemailFlagsDidChangeNotification:(id)arg1;	// IMP=0x00000001000bbdec
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000bad28

@end
