//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class GKLeaderboard, GKLeaderboardSet, NSString, UIColor, UIImageView, UILabel, UIView;

@interface GKDashboardLeaderboardCell : UICollectionViewCell
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_imageName;	// 16 = 0x10
    GKLeaderboardSet *_leaderboardSet;	// 24 = 0x18
    GKLeaderboard *_leaderboard;	// 32 = 0x20
    UIImageView *_iconView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_countLabel;	// 56 = 0x38
    UIView *_overlayView;	// 64 = 0x40
    UIColor *_titleLabelColor;	// 72 = 0x48
}

@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100026214
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010002618c
- (_Bool)canBecomeFocused;	// IMP=0x0000000100026184
- (void)updateOverlay;	// IMP=0x0000000100026180
- (void)updateImage;	// IMP=0x0000000100025e80
- (void)updateRank;	// IMP=0x0000000100025cfc
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;	// IMP=0x0000000100025a18
- (void)awakeFromNib;	// IMP=0x000000010002597c

@end

