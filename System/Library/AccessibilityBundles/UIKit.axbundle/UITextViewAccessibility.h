/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1 ;
-(double)_accessibilityFontSize;
-(void)_accessibilitySetValue:(id)arg1 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1 ;
-(id)_accessibilityGetValue;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)_axDidRegisterForDDNotification;
-(void)_axDidFinishDataDetectorURLification:(id)arg1 ;
-(void)_axSetDidRegisterForDDNotification:(BOOL)arg1 ;
-(void)_axRegisterForDDNotificationIfNeeded;
-(void)_axClearCachedLinkData;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityGetValue:(BOOL)arg1 ;
-(BOOL)_axIsOnlyOneLinkElement;
-(id)_accessibilityInternalTextLinks;
-(BOOL)_accessibilityActivateLink:(id)arg1 ;
-(id)_accessibilityParagraphElements;
-(id)_accessibilityParagraphLinksCustomRotor;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityParagraphElementsWithLinks;
-(id)_accessibilityLinksForRange:(NSRange)arg1 ;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(id)_accessibilityAttributedTextRetrieval;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(id)accessibilityElements;
-(long long)accessibilityContainerType;
-(id)accessibilityCustomRotors;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setAttributedPlaceholder:(id)arg1 ;
@end

