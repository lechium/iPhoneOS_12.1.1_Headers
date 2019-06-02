/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HUIncomingInvitationTableViewCellDelegate;
@class HMIncomingHomeInvitation, CNContact, CNAvatarView, UIView, UILabel, HUPillButton, UIActivityIndicatorView;

@interface HUIncomingInvitationTableViewCell : UITableViewCell {

	BOOL _showSpinner;
	HMIncomingHomeInvitation* _invitation;
	id<HUIncomingInvitationTableViewCellDelegate> _delegate;
	CNContact* _contact;
	CNAvatarView* _avatarView;
	UIView* _containerView;
	UILabel* _homeNameLabel;
	UILabel* _infoLabel;
	HUPillButton* _declineButton;
	HUPillButton* _acceptButton;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) CNContact * contact;                                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                                  //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * homeNameLabel;                                                    //@synthesize homeNameLabel=_homeNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                        //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) HUPillButton * declineButton;                                               //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) HUPillButton * acceptButton;                                                //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                          //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) HMIncomingHomeInvitation * invitation;                                      //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                           //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic,__weak) id<HUIncomingInvitationTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_formatDate:(id)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(void)setContact:(CNContact *)arg1 ;
-(void)setInvitation:(HMIncomingHomeInvitation *)arg1 ;
-(UILabel *)infoLabel;
-(HUPillButton *)acceptButton;
-(HUPillButton *)declineButton;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(void)setAcceptButton:(HUPillButton *)arg1 ;
-(void)setDeclineButton:(HUPillButton *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(CNContact *)contact;
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
-(void)declineButtonPressed:(id)arg1 ;
-(void)acceptButtonPressed:(id)arg1 ;
-(UILabel *)homeNameLabel;
-(void)_showInvitationSpinner;
-(void)_hideInvitationSpinner;
-(void)setHomeNameLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<HUIncomingInvitationTableViewCellDelegate>)arg1 ;
-(id<HUIncomingInvitationTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

