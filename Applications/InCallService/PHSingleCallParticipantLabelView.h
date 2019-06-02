//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAbstractCallParticipantLabelView.h"

@class CNAvatarView, CNContact, NSArray, NSLayoutConstraint, NSTimer, UIButton, UIImageView, UILabel, UIStackView;

@interface PHSingleCallParticipantLabelView : PHAbstractCallParticipantLabelView
{
    CNContact *_contact;	// 8 = 0x8
    CNAvatarView *_avatarView;	// 16 = 0x10
    NSLayoutConstraint *_participantMarqueeLabelRightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_participantMarqueeLabelAlignmentConstraint;	// 32 = 0x20
    NSLayoutConstraint *_statusLabelAlignmentConstraint;	// 40 = 0x28
    NSLayoutConstraint *_statusLabelBaseLineConstraint;	// 48 = 0x30
    NSLayoutConstraint *_secondaryInfoLabelBaseLineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_statusLabelRightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_secondaryInfoLabelRightConstraint;	// 72 = 0x48
    UILabel *_statusLabel;	// 80 = 0x50
    UILabel *_secondaryInfoLabel;	// 88 = 0x58
    NSArray *_statusLabelsArray;	// 96 = 0x60
    NSTimer *_statusLabelTimer;	// 104 = 0x68
    unsigned long long _currentStatusLabelIndex;	// 112 = 0x70
    UIButton *_conferenceParticipantsButton;	// 120 = 0x78
    UIImageView *_appIconView;	// 128 = 0x80
    NSLayoutConstraint *_statusLabelLeadingConstraint;	// 136 = 0x88
    UIStackView *_stackView;	// 144 = 0x90
    unsigned long long _labelLayoutState;	// 152 = 0x98
}

@property(nonatomic) unsigned long long labelLayoutState; // @synthesize labelLayoutState=_labelLayoutState;
@property(readonly) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSLayoutConstraint *statusLabelLeadingConstraint; // @synthesize statusLabelLeadingConstraint=_statusLabelLeadingConstraint;
@property(retain) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain) UIButton *conferenceParticipantsButton; // @synthesize conferenceParticipantsButton=_conferenceParticipantsButton;
@property unsigned long long currentStatusLabelIndex; // @synthesize currentStatusLabelIndex=_currentStatusLabelIndex;
@property(retain) NSTimer *statusLabelTimer; // @synthesize statusLabelTimer=_statusLabelTimer;
@property(retain) NSArray *statusLabelsArray; // @synthesize statusLabelsArray=_statusLabelsArray;
@property(retain) UILabel *secondaryInfoLabel; // @synthesize secondaryInfoLabel=_secondaryInfoLabel;
@property(retain) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain) NSLayoutConstraint *secondaryInfoLabelRightConstraint; // @synthesize secondaryInfoLabelRightConstraint=_secondaryInfoLabelRightConstraint;
@property(retain) NSLayoutConstraint *statusLabelRightConstraint; // @synthesize statusLabelRightConstraint=_statusLabelRightConstraint;
@property(retain) NSLayoutConstraint *secondaryInfoLabelBaseLineConstraint; // @synthesize secondaryInfoLabelBaseLineConstraint=_secondaryInfoLabelBaseLineConstraint;
@property(retain) NSLayoutConstraint *statusLabelBaseLineConstraint; // @synthesize statusLabelBaseLineConstraint=_statusLabelBaseLineConstraint;
@property(retain) NSLayoutConstraint *statusLabelAlignmentConstraint; // @synthesize statusLabelAlignmentConstraint=_statusLabelAlignmentConstraint;
@property(retain) NSLayoutConstraint *participantMarqueeLabelAlignmentConstraint; // @synthesize participantMarqueeLabelAlignmentConstraint=_participantMarqueeLabelAlignmentConstraint;
@property(retain) NSLayoutConstraint *participantMarqueeLabelRightConstraint; // @synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;	// IMP=0x000000010002bb24
- (void)fadeStatusLabelToAttributedOrPlainString:(id)arg1;	// IMP=0x000000010002b7a4
- (void)animateToNextLabel;	// IMP=0x000000010002b608
- (void)animateToFirstLabel;	// IMP=0x000000010002b544
- (void)statusLabelTapped:(id)arg1;	// IMP=0x000000010002b44c
- (void)setVoIPAppIcon:(id)arg1;	// IMP=0x000000010002b134
- (void)setShouldCompressLabelsVertically:(_Bool)arg1;	// IMP=0x000000010002afa4
- (_Bool)_statusLabelStringWillFit:(id)arg1 attributes:(id)arg2 padding:(float)arg3;	// IMP=0x000000010002aed8
- (_Bool)_statusLabelStringWillFit:(id)arg1;	// IMP=0x000000010002add0
- (double)_distanceFromParticipantNameBaseLineToStatus;	// IMP=0x000000010000ec08
- (void)_setStatusLabelAlignment:(long long)arg1;	// IMP=0x000000010000ea10
- (void)_setParticipantLabelAlignment:(long long)arg1;	// IMP=0x000000010000e54c
- (void)setParticipantMarqueeLabelFont:(id)arg1;	// IMP=0x000000010002ad64
- (void)setStatusLabelTextColor:(id)arg1;	// IMP=0x000000010002acf8
- (void)setTextColor:(id)arg1;	// IMP=0x000000010002ac04
- (void)infoButtonTapped:(id)arg1;	// IMP=0x000000010002abbc
- (void)setShowsInfoButton:(_Bool)arg1;	// IMP=0x00000001000116c0
- (void)setActivityState:(unsigned short)arg1 animated:(_Bool)arg2;	// IMP=0x000000010001144c
- (void)setActivityState:(unsigned short)arg1;	// IMP=0x000000010002abac
- (void)setHidesLabel:(_Bool)arg1;	// IMP=0x000000010002ab10
- (void)setLabelDescriptor:(id)arg1;	// IMP=0x0000000100010c40
- (void)adjustStatusLabelFontWithDescriptor:(id)arg1;	// IMP=0x000000010002a878
- (void)setLabelLayoutState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010002a6c0
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000100014e20
- (void)dealloc;	// IMP=0x000000010002a608
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000d298

@end
