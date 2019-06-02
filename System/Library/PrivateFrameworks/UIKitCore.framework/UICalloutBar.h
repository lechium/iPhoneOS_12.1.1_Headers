/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSArray, NSMutableArray, UICalloutBarButton, UICalloutBarBackground, NSDictionary, NSString, UIScrollView, UIStackView, UIResponder;

@interface UICalloutBar : UIView {

	id m_delegate;
	CGPoint m_pointBelowControls;
	CGPoint m_pointAboveControls;
	CGPoint m_pointLeftOfControls;
	CGPoint m_pointRightOfControls;
	CGPoint m_targetPoint;
	int m_targetDirection;
	BOOL m_targetHorizontal;
	BOOL m_fadeAfterCommand;
	BOOL m_recalcVisibleItems;
	int m_pageCount;
	int m_currentPage;
	BOOL m_supressesHorizontalMovement;
	CGRect m_controlFrame;
	CGRect m_targetRect;
	UIView* m_targetView;
	CGRect m_supressesHorizontalMovementFrame;
	double m_supressedHorizontalMovementX;
	int m_arrowDirection;
	double m_availableSpaceOnLeft;
	double m_availableSpaceOnRight;
	NSArray* m_systemButtonDescriptions;
	NSMutableArray* m_currentSystemButtons;
	NSMutableArray* m_extraButtons;
	UICalloutBarButton* m_nextButton;
	UICalloutBarButton* m_previousButton;
	NSMutableArray* m_rectsToEvade;
	UICalloutBarBackground* m_overlay;
	double m_fadedTime;
	NSDictionary* m_currentAppearOrFadeContext;
	id m_responderTarget;
	NSArray* m_replacements;
	NSArray* m_extraItems;
	NSString* m_untruncatedString;
	BOOL m_didPromptForReplace;
	BOOL m_showAllReplacements;
	BOOL m_ignoreFade;
	BOOL m_suppressesAppearance;
	BOOL m_isDisplayingVertically;
	UIScrollView* m_verticalScrollView;
	UIStackView* m_verticalStackView;
	NSMutableArray* m_axSeparatorViews;

}

@property (assign,nonatomic) CGPoint pointAboveControls; 
@property (assign,nonatomic) CGPoint pointBelowControls; 
@property (assign,nonatomic) CGPoint pointLeftOfControls; 
@property (assign,nonatomic) CGPoint pointRightOfControls; 
@property (assign,nonatomic) CGPoint targetPoint; 
@property (assign,nonatomic) int targetDirection; 
@property (assign,nonatomic) BOOL targetHorizontal; 
@property (assign,nonatomic) CGRect targetRect; 
@property (assign,nonatomic,__weak) UIView * targetView; 
@property (assign,nonatomic) int arrowDirection; 
@property (assign,nonatomic) CGRect controlFrame; 
@property (nonatomic,retain) NSDictionary * currentAppearOrFadeContext; 
@property (assign,nonatomic) BOOL suppressesAppearance; 
@property (nonatomic,readonly) BOOL isDisplayingVertically; 
@property (nonatomic,readonly) UIScrollView * verticalScrollView; 
@property (nonatomic,readonly) UIStackView * verticalStackView; 
@property (nonatomic,readonly) NSArray * rectsToEvade; 
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic,__weak) UIResponder * responderTarget; 
@property (nonatomic,copy) NSArray * replacements; 
@property (assign,nonatomic) BOOL showAllReplacements; 
@property (nonatomic,copy) NSArray * extraItems; 
@property (nonatomic,copy) NSString * untruncatedString; 
@property (assign,nonatomic) BOOL supressesHorizontalMovement; 
+(Class)safeCategoryBaseClass;
+(id)sharedCalloutBar;
+(void)fadeSharedCalloutBar;
+(id)activeCalloutBar;
+(void)performWithoutAffectingSharedCalloutBar:(/*^block*/id)arg1 ;
+(void)_releaseSharedInstance;
+(BOOL)sharedCalloutBarIsVisible;
+(void)fadeSharedCalloutBarIfTargetView:(id)arg1 ;
+(void)hideSharedCalloutBar;
+(void)hideSharedCalloutBarIfTargetView:(id)arg1 ;
-(void)_accessibilityAddSpeakItemToExtras:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)update;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(id)delegate;
-(void)show;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setResponderTarget:(UIResponder *)arg1 ;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(int)arrowDirection;
-(void)setArrowDirection:(int)arg1 ;
-(void)hide;
-(CGRect)controlFrame;
-(int)targetDirection;
-(CGPoint)targetPoint;
-(void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)buttonPressed:(id)arg1 ;
-(BOOL)visible;
-(void)fade;
-(void)fadeIfTargetView:(id)arg1 ;
-(void)hideIfTargetView:(id)arg1 ;
-(void)_showPreviousItems:(id)arg1 ;
-(void)_showNextItems:(id)arg1 ;
-(void)applicationDidAddDeactivationReason:(id)arg1 ;
-(id)_targetForAction:(SEL)arg1 ;
-(void)_fadeAfterCommand:(SEL)arg1 ;
-(BOOL)_updateVisibleItemsAnimated:(BOOL)arg1 ;
-(void)clearEvadeRects;
-(CGRect)textEffectsWindowSafeArea;
-(NSArray *)rectsToEvade;
-(BOOL)supressesHorizontalMovement;
-(double)supressHorizontalXMovementIfNeededForPoint:(CGPoint)arg1 proposedX:(double)arg2 ;
-(BOOL)rectClear:(CGRect)arg1 ;
-(CGRect)targetRect;
-(BOOL)hasReplacements;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 below:(BOOL)arg2 ;
-(void)setTargetDirection:(int)arg1 ;
-(BOOL)calculateControlFrameForCalloutSize:(CGSize)arg1 right:(BOOL)arg2 ;
-(BOOL)calculateControlFrameInsideTargetRect:(CGSize)arg1 ;
-(CGPoint)pointBelowControls;
-(void)setTargetPoint:(CGPoint)arg1 ;
-(CGPoint)pointAboveControls;
-(BOOL)setFrameForSize:(CGSize)arg1 ;
-(void)shrinkButtonTextSize:(id)arg1 ;
-(void)updateForCurrentVerticalPage;
-(void)updateForCurrentHorizontalPage;
-(void)addVerticalSeparatorAfterButton:(id)arg1 ;
-(void)setControlFrame:(CGRect)arg1 ;
-(id)_visibleButtons;
-(double)maxVerticalCalloutHeightForMinButtonHeight:(double)arg1 ;
-(void)configureButtonsForVerticalView:(double)arg1 ;
-(void)configureButtons:(double)arg1 ;
-(void)adjustFrameToAvoidDividerOnArrow;
-(void)updateForCurrentPage;
-(void)updateAvailableButtons;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)setTargetHorizontal:(BOOL)arg1 ;
-(void)setPointBelowControls:(CGPoint)arg1 ;
-(void)setPointAboveControls:(CGPoint)arg1 ;
-(void)setPointLeftOfControls:(CGPoint)arg1 ;
-(void)setPointRightOfControls:(CGPoint)arg1 ;
-(BOOL)suppressesAppearance;
-(void)_endOngoingAppearOrFadeAnimations;
-(void)setCurrentAppearOrFadeContext:(NSDictionary *)arg1 ;
-(void)appearAnimationDidStopWithContext:(id)arg1 ;
-(NSDictionary *)currentAppearOrFadeContext;
-(void)fadeAnimationDidStopWithContext:(id)arg1 finished:(BOOL)arg2 ;
-(void)clearSupressesHorizontalMovementFrame;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(int)textEffectsVisibilityLevel;
-(void)resetPage;
-(SEL)_actionForButton:(id)arg1 ;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 pointBelowControls:(CGPoint)arg3 pointAboveControls:(CGPoint)arg4 ;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 pointLeftOfControls:(CGPoint)arg3 pointRightOfControls:(CGPoint)arg4 ;
-(void)setTargetRect:(CGRect)arg1 view:(id)arg2 arrowDirection:(int)arg3 ;
-(void)appear;
-(void)updateAnimated:(BOOL)arg1 ;
-(BOOL)recentlyFaded;
-(void)addRectToEvade:(CGRect)arg1 ;
-(void)clearReplacements;
-(CGPoint)pointLeftOfControls;
-(CGPoint)pointRightOfControls;
-(BOOL)targetHorizontal;
-(UIResponder *)responderTarget;
-(NSArray *)replacements;
-(void)setReplacements:(NSArray *)arg1 ;
-(BOOL)showAllReplacements;
-(void)setShowAllReplacements:(BOOL)arg1 ;
-(NSArray *)extraItems;
-(void)setExtraItems:(NSArray *)arg1 ;
-(NSString *)untruncatedString;
-(void)setUntruncatedString:(NSString *)arg1 ;
-(void)setSupressesHorizontalMovement:(BOOL)arg1 ;
-(void)setSuppressesAppearance:(BOOL)arg1 ;
-(BOOL)isDisplayingVertically;
-(UIScrollView *)verticalScrollView;
-(UIStackView *)verticalStackView;
@end

