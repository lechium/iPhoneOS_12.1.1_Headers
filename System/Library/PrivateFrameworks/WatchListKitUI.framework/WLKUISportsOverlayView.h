/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WLKUIScorecardViewDelegate.h>

@class UIImage, TVViewElement, NSArray, WLKUIScorecardView, _WLKUITextBadge, _TVImageView, TVImageElement, NSString;

@interface WLKUISportsOverlayView : UIView <WLKUIScorecardViewDelegate> {

	BOOL _textBadgeHasMaterial;
	UIImage* _backgroundImageForMaterialRendering;
	TVViewElement* _overlayElement;
	NSArray* _scorecardData;
	TVViewElement* _scorecardElement;
	WLKUIScorecardView* _scorecardView;
	TVViewElement* _textBadgeElement;
	_WLKUITextBadge* _textBadge;
	_TVImageView* _logo;
	TVImageElement* _logoElement;

}

@property (nonatomic,retain) TVViewElement * overlayElement;                             //@synthesize overlayElement=_overlayElement - In the implementation block
@property (nonatomic,copy) NSArray * scorecardData;                                      //@synthesize scorecardData=_scorecardData - In the implementation block
@property (nonatomic,retain) TVViewElement * scorecardElement;                           //@synthesize scorecardElement=_scorecardElement - In the implementation block
@property (nonatomic,retain) WLKUIScorecardView * scorecardView;                         //@synthesize scorecardView=_scorecardView - In the implementation block
@property (assign,nonatomic) BOOL textBadgeHasMaterial;                                  //@synthesize textBadgeHasMaterial=_textBadgeHasMaterial - In the implementation block
@property (nonatomic,retain) TVViewElement * textBadgeElement;                           //@synthesize textBadgeElement=_textBadgeElement - In the implementation block
@property (nonatomic,retain) _WLKUITextBadge * textBadge;                                //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) _TVImageView * logo;                                        //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) TVImageElement * logoElement;                               //@synthesize logoElement=_logoElement - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageForMaterialRendering;              //@synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sportsOverlayViewFromElement:(id)arg1 existingView:(id)arg2 ;
-(void)setLogo:(_TVImageView *)arg1 ;
-(_TVImageView *)logo;
-(double)maximumInteritemSpacingInScorecardView:(id)arg1 ;
-(double)minimumInteritemSpacingInScorecardView:(id)arg1 ;
-(double)rowSpacingInScorecardView:(id)arg1 ;
-(void)layoutWithElement:(id)arg1 ;
-(void)_resetTextBadge;
-(id)_materialImageForImage:(id)arg1 forFrame:(CGRect)arg2 ;
-(TVViewElement *)overlayElement;
-(void)setOverlayElement:(TVViewElement *)arg1 ;
-(TVViewElement *)textBadgeElement;
-(void)setTextBadgeElement:(TVViewElement *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setScorecardData:(NSArray *)arg1 ;
-(long long)styleForScorecardView:(id)arg1 ;
-(long long)numberOfRowsInScorecardView:(id)arg1 ;
-(long long)numberOfElementsForScorecardView:(id)arg1 inRow:(long long)arg2 ;
-(id)viewElementForScorecard:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3 ;
-(double)maximumWidthForScorecardView:(id)arg1 ;
-(id)backgroundImageForScorecardViewMaterial:(id)arg1 ;
-(int)backgroundBlendModeForElementInRow:(long long)arg1 atIndex:(long long)arg2 ;
-(void)backgroundImageSizeDidChange:(CGSize)arg1 ;
-(UIImage *)backgroundImageForMaterialRendering;
-(void)setBackgroundImageForMaterialRendering:(UIImage *)arg1 ;
-(NSArray *)scorecardData;
-(TVViewElement *)scorecardElement;
-(void)setScorecardElement:(TVViewElement *)arg1 ;
-(WLKUIScorecardView *)scorecardView;
-(void)setScorecardView:(WLKUIScorecardView *)arg1 ;
-(BOOL)textBadgeHasMaterial;
-(void)setTextBadgeHasMaterial:(BOOL)arg1 ;
-(_WLKUITextBadge *)textBadge;
-(void)setTextBadge:(_WLKUITextBadge *)arg1 ;
-(TVImageElement *)logoElement;
-(void)setLogoElement:(TVImageElement *)arg1 ;
@end

