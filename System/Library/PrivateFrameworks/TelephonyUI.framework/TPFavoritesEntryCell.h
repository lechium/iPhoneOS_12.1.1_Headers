/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UILabel, UIImage, NSString, CNAvatarViewController, UIImageView, UIVisualEffectView, NSLayoutConstraint;

@interface TPFavoritesEntryCell : UICollectionViewCell {

	BOOL _contentViewLoaded;
	BOOL _contentViewLayoutConstraintsLoaded;
	UIView* _avatarContentView;
	UILabel* _contactNameLabel;
	UIImage* _transportImage;
	UILabel* _transportNameLabel;
	NSString* _actionType;
	CNAvatarViewController* _avatarViewController;
	UIImageView* _transportImageView;
	UIView* _transportView;
	UIVisualEffectView* _primaryVisualEffectView;
	UIVisualEffectView* _secondaryVisualEffectView;
	NSLayoutConstraint* _avatarContentViewHeightLayoutConstraint;
	NSLayoutConstraint* _avatarContentViewWidthLayoutConstraint;
	NSLayoutConstraint* _contactNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelBaselineLayoutConstraint;
	NSLayoutConstraint* _transportNameLabelLeadingLayoutConstraint;

}

@property (nonatomic,retain) UILabel * contactNameLabel;                                                                       //@synthesize contactNameLabel=_contactNameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * transportImageView;                                                                 //@synthesize transportImageView=_transportImageView - In the implementation block
@property (nonatomic,retain) UILabel * transportNameLabel;                                                                     //@synthesize transportNameLabel=_transportNameLabel - In the implementation block
@property (nonatomic,retain) UIView * transportView;                                                                           //@synthesize transportView=_transportView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * primaryVisualEffectView;                                                     //@synthesize primaryVisualEffectView=_primaryVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * secondaryVisualEffectView;                                                   //@synthesize secondaryVisualEffectView=_secondaryVisualEffectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * avatarContentViewHeightLayoutConstraint;                                     //@synthesize avatarContentViewHeightLayoutConstraint=_avatarContentViewHeightLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double avatarContentViewHeightLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * avatarContentViewWidthLayoutConstraint;                                      //@synthesize avatarContentViewWidthLayoutConstraint=_avatarContentViewWidthLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double avatarContentViewWidthLayoutConstraintConstant; 
@property (nonatomic,readonly) double contactNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * contactNameLabelBaselineLayoutConstraint;                                    //@synthesize contactNameLabelBaselineLayoutConstraint=_contactNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double transportNameLabelBaselineLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelBaselineLayoutConstraint;                                  //@synthesize transportNameLabelBaselineLayoutConstraint=_transportNameLabelBaselineLayoutConstraint - In the implementation block
@property (nonatomic,readonly) double transportNameLabelLeadingLayoutConstraintConstant; 
@property (nonatomic,retain) NSLayoutConstraint * transportNameLabelLeadingLayoutConstraint;                                   //@synthesize transportNameLabelLeadingLayoutConstraint=_transportNameLabelLeadingLayoutConstraint - In the implementation block
@property (assign,getter=isContentViewLoaded,nonatomic) BOOL contentViewLoaded;                                                //@synthesize contentViewLoaded=_contentViewLoaded - In the implementation block
@property (assign,getter=isContentViewLayoutConstraintsLoaded,nonatomic) BOOL contentViewLayoutConstraintsLoaded;              //@synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded - In the implementation block
@property (nonatomic,readonly) UIView * avatarContentView;                                                                     //@synthesize avatarContentView=_avatarContentView - In the implementation block
@property (nonatomic,retain) UIImage * transportImage;                                                                         //@synthesize transportImage=_transportImage - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                                                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                                                    //@synthesize avatarViewController=_avatarViewController - In the implementation block
+(id)imageForActionType:(id)arg1 ;
+(id)reuseIdentifier;
+(BOOL)requiresConstraintBasedLayout;
-(void)loadContentView;
-(void)updateConstraintsConstants;
-(BOOL)isContentViewLoaded;
-(void)setTransportImage:(UIImage *)arg1 ;
-(UIView *)avatarContentView;
-(UIImageView *)transportImageView;
-(BOOL)isContentViewLayoutConstraintsLoaded;
-(double)avatarContentViewHeightLayoutConstraintConstant;
-(NSLayoutConstraint *)avatarContentViewHeightLayoutConstraint;
-(double)avatarContentViewWidthLayoutConstraintConstant;
-(NSLayoutConstraint *)avatarContentViewWidthLayoutConstraint;
-(double)contactNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)contactNameLabelBaselineLayoutConstraint;
-(double)transportNameLabelBaselineLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelBaselineLayoutConstraint;
-(double)transportNameLabelLeadingLayoutConstraintConstant;
-(NSLayoutConstraint *)transportNameLabelLeadingLayoutConstraint;
-(UILabel *)contactNameLabel;
-(UILabel *)transportNameLabel;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setContactNameLabel:(UILabel *)arg1 ;
-(UIImage *)transportImage;
-(void)setTransportNameLabel:(UILabel *)arg1 ;
-(void)setTransportImageView:(UIImageView *)arg1 ;
-(UIView *)transportView;
-(void)setTransportView:(UIView *)arg1 ;
-(void)setAvatarContentViewHeightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAvatarContentViewWidthLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContactNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelBaselineLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTransportNameLabelLeadingLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(void)updateFonts;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(UIVisualEffectView *)primaryVisualEffectView;
-(UIVisualEffectView *)secondaryVisualEffectView;
-(void)setPrimaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setSecondaryVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)loadContentViewLayoutConstraints;
-(void)setContentViewLoaded:(BOOL)arg1 ;
-(void)setContentViewLayoutConstraintsLoaded:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)commonInit;
@end

