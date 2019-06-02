/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Preferences/PSTableCell.h>
#import <libobjc.A.dylib/CRKFullNameEditorViewDelegate.h>
#import <libobjc.A.dylib/CRKUserEditorTableViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CRKUserTableViewCellDelegate;
@class UIView, CNAvatarViewController, CNMutableContact, UIStackView, UILabel, UIImageView, CRKUserFullNameEditorView, NSLayoutConstraint, UIViewController, CRKUser, NSString;

@interface CRKUserTableViewCell : PSTableCell <CRKFullNameEditorViewDelegate, CRKUserEditorTableViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	UIView* _avatarView;
	CNAvatarViewController* _avatarViewController;
	CNMutableContact* _contact;
	UIStackView* _contentStackView;
	UILabel* _fullNameLabel;
	UIImageView* _screenObservationImageView;
	UIImageView* _userImageView;
	UIView* _userImageWrapperView;
	CRKUserFullNameEditorView* _userFullNameEditorView;
	NSLayoutConstraint* mContentStackViewTrailingToEndConstraint;
	NSLayoutConstraint* mContentStackViewTrailingToScreenObservationConstraint;
	BOOL _editingUser;
	BOOL _observing;
	BOOL _presentingFullScreen;
	BOOL _showFamilyNameFirst;
	BOOL _showPhoneticName;
	UIViewController* _presentingViewController;
	id<CRKUserTableViewCellDelegate> _delegate;
	CRKUser* _user;

}

@property (nonatomic,readonly) UIView * avatarView; 
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController; 
@property (nonatomic,readonly) CNMutableContact * contact; 
@property (nonatomic,readonly) UIStackView * contentStackView; 
@property (nonatomic,readonly) UILabel * fullNameLabel; 
@property (nonatomic,readonly) UIImageView * screenObservationImageView; 
@property (nonatomic,readonly) UIImageView * userImageView; 
@property (nonatomic,readonly) UIView * userImageWrapperView; 
@property (nonatomic,readonly) CRKUserFullNameEditorView * userFullNameEditorView; 
@property (assign,nonatomic,__weak) id<CRKUserTableViewCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) CRKUser * user;                                                         //@synthesize user=_user - In the implementation block
@property (assign,getter=isEditingUser,nonatomic) BOOL editingUser;                                  //@synthesize editingUser=_editingUser - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                      //@synthesize observing=_observing - In the implementation block
@property (assign,getter=isPresentingFullScreen,nonatomic) BOOL presentingFullScreen;                //@synthesize presentingFullScreen=_presentingFullScreen - In the implementation block
@property (assign,getter=shouldShowFamilyNameFirst,nonatomic) BOOL showFamilyNameFirst;              //@synthesize showFamilyNameFirst=_showFamilyNameFirst - In the implementation block
@property (assign,getter=shouldShowPhoneticName,nonatomic) BOOL showPhoneticName;                    //@synthesize showPhoneticName=_showPhoneticName - In the implementation block
@property (getter=hasValidUser,nonatomic,readonly) BOOL validUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isObserving;
-(void)setObserving:(BOOL)arg1 ;
-(UIView *)avatarView;
-(CNMutableContact *)contact;
-(BOOL)isPresentingFullScreen;
-(void)userEditorTableViewControllerDidFinishEditingUser:(id)arg1 ;
-(void)setEditingUser:(BOOL)arg1 ;
-(BOOL)hasValidUser;
-(BOOL)shouldShowPhoneticName;
-(BOOL)shouldShowFamilyNameFirst;
-(void)setShowFamilyNameFirst:(BOOL)arg1 ;
-(void)userFullNameEditorDidEditFamilyName:(id)arg1 ;
-(void)userFullNameEditorDidEditGivenName:(id)arg1 ;
-(void)userFullNameEditorDidEditPhoneticFamilyName:(id)arg1 ;
-(void)userFullNameEditorDidEditPhoneticGivenName:(id)arg1 ;
-(void)_didTapCell:(id)arg1 ;
-(UIStackView *)contentStackView;
-(UIImageView *)screenObservationImageView;
-(UIView *)userImageWrapperView;
-(UIImageView *)userImageView;
-(void)_updateContentStackViewConstraints;
-(void)_updateShowFamilyNameFirstForNameComponents:(id)arg1 ;
-(void)_updateAccessoryType;
-(BOOL)isEditingUser;
-(CRKUserFullNameEditorView *)userFullNameEditorView;
-(void)_didTapUserImage:(id)arg1 ;
-(UILabel *)fullNameLabel;
-(id)_makeImagePickerController;
-(void)setPresentingFullScreen:(BOOL)arg1 ;
-(void)_updateUserImageView;
-(void)_userDidChange;
-(CGRect)_aspectFillFrameForViewOfSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(CNAvatarViewController *)avatarViewController;
-(void)setShowPhoneticName:(BOOL)arg1 ;
-(CRKUser *)user;
-(void)setUser:(CRKUser *)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setDelegate:(id<CRKUserTableViewCellDelegate>)arg1 ;
-(id<CRKUserTableViewCellDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end
