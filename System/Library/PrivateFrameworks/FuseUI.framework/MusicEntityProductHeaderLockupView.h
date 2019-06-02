/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityAbstractLockupView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MusicEntityProductHeaderLockupViewDelegate;
@class MPUTextButton, UIView, _UIBackdropView, NSString, UILabel, UITextView, UIButton, UIActivityIndicatorView, MusicDownloadProgressButton, MusicEntityViewProductHeaderLockupContentDescriptor;

@interface MusicEntityProductHeaderLockupView : MusicEntityAbstractLockupView <UITextViewDelegate> {

	MPUTextButton* _addSongsButton;
	UIView* _artworkEditingOverlayView;
	_UIBackdropView* _backdropView;
	UIView* _bottomHairlineView;
	double _cachedTallestButtonHeight;
	NSString* _editableText;
	UIView* _editableTextBottomHairlineView;
	UILabel* _editableTextHeaderLabel;
	UITextView* _editableTextPlaceholderView;
	UITextView* _editableTextView;
	MPUTextButton* _editButton;
	UIButton* _likeDislikeButton;
	UIActivityIndicatorView* _refreshActivityIndicatorView;
	UIButton* _refreshButton;
	BOOL _shouldIgnoreArtworkImageChanges;
	BOOL _shouldUpdateTallestButtonHeightCache;
	BOOL _editing;
	BOOL _editableTitleShouldBecomeFirstResponder;
	double _downloadProgress;
	MusicDownloadProgressButton* _downloadProgressButton;
	long long _downloadProgressType;
	long long _likeDislikeButtonState;
	UIButton* _shareButton;
	id<MusicEntityProductHeaderLockupViewDelegate> _delegate;
	MusicEntityViewProductHeaderLockupContentDescriptor* _productHeaderLockupContentDescriptor;

}

@property (assign,nonatomic) double downloadProgress;                                                                                 //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) MusicDownloadProgressButton * downloadProgressButton;                                                  //@synthesize downloadProgressButton=_downloadProgressButton - In the implementation block
@property (assign,nonatomic) long long downloadProgressType;                                                                          //@synthesize downloadProgressType=_downloadProgressType - In the implementation block
@property (assign,nonatomic) long long likeDislikeButtonState;                                                                        //@synthesize likeDislikeButtonState=_likeDislikeButtonState - In the implementation block
@property (nonatomic,readonly) UIButton * shareButton;                                                                                //@synthesize shareButton=_shareButton - In the implementation block
@property (assign,nonatomic,__weak) id<MusicEntityProductHeaderLockupViewDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * editableText; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL editableTitleShouldBecomeFirstResponder;                                                            //@synthesize editableTitleShouldBecomeFirstResponder=_editableTitleShouldBecomeFirstResponder - In the implementation block
@property (nonatomic,retain) MusicEntityViewProductHeaderLockupContentDescriptor * productHeaderLockupContentDescriptor;              //@synthesize productHeaderLockupContentDescriptor=_productHeaderLockupContentDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumRowHeightForHorizontalLockupContentDescriptor:(id)arg1 traitCollection:(id)arg2 ;
+(double)_buttonHeight;
-(BOOL)_shouldShowPlayButton;
-(UIButton *)shareButton;
-(void)setEntityValueProvider:(id)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)_contentDescriptorDidChange:(id)arg1 ;
-(BOOL)_shouldEnableArtworkViewUserInteraction;
-(void)_artworkViewImageDidChange;
-(NSString *)editableText;
-(MusicEntityViewProductHeaderLockupContentDescriptor *)productHeaderLockupContentDescriptor;
-(void)setProductHeaderLockupContentDescriptor:(MusicEntityViewProductHeaderLockupContentDescriptor *)arg1 ;
-(void)setEditableTitleShouldBecomeFirstResponder:(BOOL)arg1 ;
-(long long)downloadProgressType;
-(void)setLikeDislikeButtonState:(long long)arg1 ;
-(id)_newTextView;
-(void)_layoutEditingSubviews;
-(void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(double)arg2 ;
-(void)_layoutSubviewsForCompactHorizontalSizeClass;
-(void)_layoutSubviewsForRegularHorizontalSizeClass;
-(void)_updateEditableTextPlaceholderViewVisibility;
-(void)_updateLikeDislikeButtonStateAppearance;
-(CGRect)_adjustAvailableContentBounds:(CGRect)arg1 forActionView:(id)arg2 ;
-(id)_genericActionButtonWithImage:(id)arg1 ;
-(id)_genericActionButtonWithImageName:(id)arg1 ;
-(void)_shareButtonTapped:(id)arg1 ;
-(void)_updateColorsOfGenericActionControl:(id)arg1 ;
-(void)_downloadProgressButtonTapped:(id)arg1 ;
-(id)_refreshImage;
-(void)_refreshButtonTapped:(id)arg1 ;
-(void)_updateColorsOfGenericActionView:(id)arg1 ;
-(id)_genericActionButtonWithText:(id)arg1 ;
-(void)_addSongsButtonTapped:(id)arg1 ;
-(void)_setFrameOfActionButton:(id)arg1 basedOnAvailableContentBounds:(CGRect)arg2 customHeight:(double)arg3 maximumHeightForCentering:(double)arg4 ;
-(CGRect)_adjustAvailableContentBounds:(CGRect)arg1 forActionControl:(id)arg2 ;
-(void)_setFrameOfActionControl:(id)arg1 basedOnAvailableContentBounds:(CGRect)arg2 maximumHeightForCentering:(double)arg3 buttonHeightForCentering:(double)arg4 buttonBaselineOffset:(double)arg5 ;
-(void)_updateTextView:(id)arg1 forTextDescriptor:(id)arg2 textColor:(id)arg3 ;
-(void)_layoutButtonsWithAvailableContentBounds:(CGRect)arg1 insetContentBounds:(CGRect)arg2 ;
-(void)setDownloadProgressType:(long long)arg1 ;
-(void)_likeDislikeButtonTapped:(id)arg1 ;
-(MusicDownloadProgressButton *)downloadProgressButton;
-(long long)likeDislikeButtonState;
-(BOOL)editableTitleShouldBecomeFirstResponder;
-(void)_editButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicEntityProductHeaderLockupViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<MusicEntityProductHeaderLockupViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
@end

