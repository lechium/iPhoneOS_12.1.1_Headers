/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <TVRemoteUI/_TVRMaterialView.h>

@protocol _TVRButtonsViewDelegate;
@class _TVRButtonsLayoutView, _TVRButton, NSArray, NSMutableDictionary;

@interface _TVRButtonsView : _TVRMaterialView {

	BOOL _volumeControlEnabled;
	id<_TVRButtonsViewDelegate> _delegate;
	_TVRButtonsLayoutView* _buttonLayoutView;
	_TVRButton* _keyboardButton;
	_TVRButton* _leftMediaButton;
	_TVRButton* _rightMediaButton;
	NSArray* _nonMediaViews;
	NSMutableDictionary* _viewsByType;
	NSMutableDictionary* _buttonsByType;

}

@property (nonatomic,retain) _TVRButtonsLayoutView * buttonLayoutView;                 //@synthesize buttonLayoutView=_buttonLayoutView - In the implementation block
@property (nonatomic,retain) _TVRButton * keyboardButton;                              //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,retain) _TVRButton * leftMediaButton;                             //@synthesize leftMediaButton=_leftMediaButton - In the implementation block
@property (nonatomic,retain) _TVRButton * rightMediaButton;                            //@synthesize rightMediaButton=_rightMediaButton - In the implementation block
@property (nonatomic,retain) NSArray * nonMediaViews;                                  //@synthesize nonMediaViews=_nonMediaViews - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewsByType;                        //@synthesize viewsByType=_viewsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * buttonsByType;                      //@synthesize buttonsByType=_buttonsByType - In the implementation block
@property (assign,nonatomic) BOOL volumeControlEnabled;                                //@synthesize volumeControlEnabled=_volumeControlEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_volumeUpButtonTouchDown:(id)arg1 ;
-(void)_volumeUpButtonTouchUp:(id)arg1 ;
-(void)_volumeDownButtonTouchDown:(id)arg1 ;
-(void)_volumeDownButtonTouchUp:(id)arg1 ;
-(void)disableAllButtons;
-(void)enableButtons:(id)arg1 ;
-(void)supportedButtonsAdded:(id)arg1 removed:(id)arg2 ;
-(void)showKeyboardButton;
-(void)hideKeyboardButton;
-(id)_createGenericViewForButtonType:(long long)arg1 ;
-(void)_disableVolumeControl;
-(id)_keyboardButton;
-(void)_keyboardButtonTapped;
-(void)_setView:(id)arg1 asEnabled:(BOOL)arg2 ;
-(BOOL)_isMediaButton:(id)arg1 ;
-(void)_addAndConfigureMediaButton:(id)arg1 ;
-(BOOL)_isVolumeButton:(id)arg1 ;
-(BOOL)_isBottomRowButton:(id)arg1 ;
-(void)_enableVolumeControl;
-(BOOL)_mediaButtonIsLeftHanded:(id)arg1 ;
-(void)_genericButtonTouchDown:(id)arg1 ;
-(void)_genericButtonTouchUp:(id)arg1 ;
-(void)_genericTapGesture:(id)arg1 ;
-(void)_genericLongPressGesture:(id)arg1 ;
-(void)_configureInteractionOnView:(id)arg1 forButton:(id)arg2 ;
-(id)_buttonForView:(id)arg1 ;
-(_TVRButtonsLayoutView *)buttonLayoutView;
-(void)setButtonLayoutView:(_TVRButtonsLayoutView *)arg1 ;
-(_TVRButton *)keyboardButton;
-(void)setKeyboardButton:(_TVRButton *)arg1 ;
-(_TVRButton *)leftMediaButton;
-(void)setLeftMediaButton:(_TVRButton *)arg1 ;
-(_TVRButton *)rightMediaButton;
-(void)setRightMediaButton:(_TVRButton *)arg1 ;
-(NSArray *)nonMediaViews;
-(void)setNonMediaViews:(NSArray *)arg1 ;
-(NSMutableDictionary *)viewsByType;
-(void)setViewsByType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)buttonsByType;
-(void)setButtonsByType:(NSMutableDictionary *)arg1 ;
-(BOOL)volumeControlEnabled;
-(void)setVolumeControlEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<_TVRButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<_TVRButtonsViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
@end

