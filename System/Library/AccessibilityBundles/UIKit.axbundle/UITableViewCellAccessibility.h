/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewCellAccessibility_super.h>

@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(NSRange)accessibilityRowRange;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityIsDescendantOfElement:(id)arg1 ;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityChildren;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(id)_accessibilityScannerGroupElements;
-(void)_accessibilityClearChildren;
-(id)_accessibilityInternalData;
-(void)_axSetShouldForceRefreshChildren:(BOOL)arg1 ;
-(id)_accessibilitySubviewsForAddingWithSort:(BOOL)arg1 ;
-(id)_accessibilityUserTestingChildrenInAccessibilitySortedOrder:(BOOL)arg1 ;
-(id)_accessibilityParentTableView;
-(id)_accessibilityIndexPath;
-(id)_accessibilityImageViewIfExists;
-(BOOL)_accessibilityIsButton;
-(id)_accessibilityTextLabelIfExists;
-(id)_accessibilityTableViewSwitch;
-(BOOL)_accessibilityIsButtonAccessoryType:(long long)arg1 ;
-(id)_accessibilityNextIndexPath;
-(id)_accessibilityPreviousIndexPath;
-(void)registerMockChild:(id)arg1 ;
-(BOOL)_accessibilityLabelShouldBeDistinct:(id)arg1 ;
-(void)_accessibilityReevaluateChildren;
-(BOOL)_accessibilityTableViewIsOpaque;
-(void)unregisterMockChild:(id)arg1 ;
-(id)_accessibilitySubviewsForAdding;
-(void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3 ;
-(void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1 ;
-(id)_accessibilityMockParent;
-(BOOL)_accessibilityTableViewCellHidesInsertControl;
-(BOOL)_accessibilityIsRemoveControlVisible;
-(id)_accessibilityCellEditingControl;
-(BOOL)_accessibilityIsRemoveConfirmVisible;
-(id)_accessibilityFindRemoveConfirmSubview;
-(void)_accessibilityHandleRemoveSwitch;
-(void)_accessibilityHandleRemoveConfirm;
-(BOOL)_accessibilityAlwaysReturnsChild;
-(id)_accessibilityEditableTextFieldIfExists;
-(id)_accessibilityRetrieveTableViewCellText;
-(id)_accessibilityRetrieveTableViewCellText:(long long)arg1 ;
-(id)_accessibilityDetailTextLabelIfExists;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(BOOL)accessibilityIsFetchingChildren;
-(void)accessibilitySetIsFetchingChildren:(BOOL)arg1 ;
-(BOOL)_accessibilityUsesOverrideContainerProtocol;
-(id)_accessibilityContainerElements;
-(id)_accessibilityOverrideChildren;
-(BOOL)_axShouldForceRefreshChildren;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(BOOL)_axSubviewIgnoredDueToHiddenOrZeroAlphaAncestry:(id)arg1 ;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(BOOL)_accessibilityShouldSortTableViewCellChildren;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(void)_accessibilityUpdateRemoveControl;
-(BOOL)_accessibilityShouldBeEmptyIfHidden;
-(BOOL)_hasTrailingSwipeActions;
-(id)_accessibilityEquivalenceTag;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(BOOL)_axPerformAction:(id)arg1 ;
-(id)_privateAccessibilityCustomActions;
-(BOOL)_accessibilitySwipeActionsAllowed;
-(id)_axCustomActionsForActions:(id)arg1 ;
-(BOOL)_accessibilityPerformSwipeAction:(id)arg1 ;
-(BOOL)_accessibilityHandleDetailButtonPress:(id)arg1 ;
-(BOOL)_accessibilityHandleReorderMoveUp:(id)arg1 ;
-(BOOL)_accessibilityHandleReorderMoveDown:(id)arg1 ;
-(BOOL)_accessibilityHandleReorderMove:(id)arg1 up:(BOOL)arg2 ;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(long long)_accessibilityUserTestingChildrenCount;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityIsTableCell;
-(BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(long long)arg1 ;
-(void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(void)_setAccessibilityMockParent:(id)arg1 ;
-(id)_accessibilityTextElementText;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(id)tableTextAccessibleLabel:(id)arg1 ;
-(id)tableTextAccessibleStringKey:(id)arg1 ;
-(id)tableTextAccessibleLocalizationBundleID:(id)arg1 ;
-(id)tableTextAccessibleLocalizationBundlePath:(id)arg1 ;
-(id)tableTextAccessibleLocalizedTableName:(id)arg1 ;
-(double)_accessibilityAllowedGeometryOverlapX;
-(double)_accessibilityAllowedGeometryOverlap;
-(BOOL)accessibilityScrollToVisible;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(BOOL)_accessibilityHasTextOperations;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityHeaderElements;
-(BOOL)accessibilityElementIsFocused;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)prepareForReuse;
-(void)setAccessoryView:(id)arg1 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)_beginSwiping;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
@end

