/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol _TVRDropDownViewDelegate;
@class NSArray, NSString, UIView, _TVRMaterialViewDropDownButton, UITableView, _TVRUICubicSpringAnimator;

@interface _TVRDropDownView : UIView <UITableViewDelegate, UITableViewDataSource> {

	BOOL _isDevicePickerShowing;
	id<_TVRDropDownViewDelegate> _delegate;
	NSArray* _devices;
	NSString* _title;
	double _deviceListCornerRadius;
	UIView* _titleView;
	_TVRMaterialViewDropDownButton* _titleButton;
	UITableView* _tableView;
	UIView* _tableViewWrapper;
	UIView* _tableViewTopSeperator;
	UIView* _tableViewBottomSeperator;
	double _baseHeight;
	_TVRUICubicSpringAnimator* _showAnimator;
	_TVRUICubicSpringAnimator* _hideAnimator;

}

@property (nonatomic,retain) UIView * titleView;                                                   //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) _TVRMaterialViewDropDownButton * titleButton;                         //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * tableViewWrapper;                                            //@synthesize tableViewWrapper=_tableViewWrapper - In the implementation block
@property (nonatomic,retain) UIView * tableViewTopSeperator;                                       //@synthesize tableViewTopSeperator=_tableViewTopSeperator - In the implementation block
@property (nonatomic,retain) UIView * tableViewBottomSeperator;                                    //@synthesize tableViewBottomSeperator=_tableViewBottomSeperator - In the implementation block
@property (assign,nonatomic) BOOL isDevicePickerShowing;                                           //@synthesize isDevicePickerShowing=_isDevicePickerShowing - In the implementation block
@property (assign,nonatomic) double baseHeight;                                                    //@synthesize baseHeight=_baseHeight - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * showAnimator;                             //@synthesize showAnimator=_showAnimator - In the implementation block
@property (nonatomic,retain) _TVRUICubicSpringAnimator * hideAnimator;                             //@synthesize hideAnimator=_hideAnimator - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRDropDownViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double deviceListCornerRadius;                                        //@synthesize deviceListCornerRadius=_deviceListCornerRadius - In the implementation block
@property (getter=isDevicePickerShowing,nonatomic,readonly) BOOL devicePickerShowing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)baseHeight;
-(void)setDevices:(NSArray *)arg1 ;
-(NSArray *)devices;
-(_TVRMaterialViewDropDownButton *)titleButton;
-(void)setTitleButton:(_TVRMaterialViewDropDownButton *)arg1 ;
-(void)toggleState;
-(void)_toggleState;
-(void)didTapWrapperView:(id)arg1 ;
-(CGRect)_preferredTableViewFrameWhenExpanded:(BOOL)arg1 ;
-(BOOL)_accessibilityFontSizesEnabled;
-(double)_calculatedContentHeight;
-(id)initWithBaseHeight:(double)arg1 ;
-(void)didChangeToExpanded:(BOOL)arg1 ;
-(BOOL)isDevicePickerShowing;
-(double)_contentHeightForPreferredContentSizeCategory;
-(double)deviceListCornerRadius;
-(void)setDeviceListCornerRadius:(double)arg1 ;
-(UIView *)tableViewWrapper;
-(void)setTableViewWrapper:(UIView *)arg1 ;
-(UIView *)tableViewTopSeperator;
-(void)setTableViewTopSeperator:(UIView *)arg1 ;
-(UIView *)tableViewBottomSeperator;
-(void)setTableViewBottomSeperator:(UIView *)arg1 ;
-(void)setIsDevicePickerShowing:(BOOL)arg1 ;
-(void)setBaseHeight:(double)arg1 ;
-(_TVRUICubicSpringAnimator *)showAnimator;
-(void)setShowAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(_TVRUICubicSpringAnimator *)hideAnimator;
-(void)setHideAnimator:(_TVRUICubicSpringAnimator *)arg1 ;
-(void)setDelegate:(id<_TVRDropDownViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(id<_TVRDropDownViewDelegate>)delegate;
-(UITableView *)tableView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
@end

