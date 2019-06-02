//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKRectShadowCell.h"

@class GKAchievement, GKAchievementIconView, GKResizingLabel, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell
{
    GKAchievement *_achievement;	// 8 = 0x8
    GKAchievement *_localAchievement;	// 16 = 0x10
    GKAchievementIconView *_iconView;	// 24 = 0x18
    GKResizingLabel *_titleLabel;	// 32 = 0x20
    GKResizingLabel *_descriptionLabel;	// 40 = 0x28
    UILabel *_pointsLabel;	// 48 = 0x30
    UILabel *_pointsTextLabel;	// 56 = 0x38
}

@property(nonatomic) UILabel *pointsTextLabel; // @synthesize pointsTextLabel=_pointsTextLabel;
@property(nonatomic) UILabel *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property(nonatomic) GKResizingLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) GKResizingLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;	// IMP=0x000000010001b5ac
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;	// IMP=0x000000010001b52c

@end

