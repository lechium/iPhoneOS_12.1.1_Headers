/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>
#import <libobjc.A.dylib/TVCarouselViewDelegate.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIButton, TVCarouselView, UIView, NSString;

@interface WLKUIAccessView_tvOS : UIView <TVCarouselViewDataSource, TVCarouselViewDelegate> {

	NSArray* _apps;
	UILayoutGuide* _contentGuide;
	UIStackView* _contentStack;
	UILabel* _titleLabel;
	UIStackView* _logoStack;
	UILabel* _bodyLabel;
	UIStackView* _buttonStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UIButton* _seeAllButton;
	TVCarouselView* _carouselView;
	BOOL _didLayout;
	UIView* _privacyView;

}

@property (nonatomic,retain) UIView * privacyView;                  //@synthesize privacyView=_privacyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)iconSize;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 ;
-(id)allowButton;
-(id)disallowButton;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(id)_buildButtonStack;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBody:(id)arg1 ;
-(id)seeAllButton;
@end

