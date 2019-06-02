/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {

	UICollectionViewCell* _cell;
	BOOL _usingRealCell;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) UICollectionViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
-(BOOL)_accessibilitySupportsActivateAction;
-(NSRange)_accessibilitySelectedTextRange;
-(NSRange)accessibilityRowRange;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilitySelect;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(long long)_accessibilityScannerActivateBehavior;
-(BOOL)_accessibilityBackingElementIsValid;
-(id)_accessibilityUserTestingVisibleAncestor;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(id)realCell;
-(id)_accessibilityCollectionViewCellContentSubviews;
-(BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
-(BOOL)_accessibilityHasTextOperations;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)accessibilityIdentifier;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UICollectionViewCell *)cell;
-(void)setCell:(UICollectionViewCell *)arg1 ;
@end

