/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface UITableTextAccessibilityElement : UIAccessibilityElement {

	SEL _selector;
	id textDelegate;
	id attributeDelegate;

}

@property (assign,nonatomic,__weak) id textDelegate; 
@property (assign,nonatomic,__weak) id attributeDelegate; 
-(void)setTextDelegate:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(NSRange)_accessibilitySelectedTextRange;
-(NSRange)accessibilityRowRange;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityScrollStatus;
-(void)setAttributeDelegate:(id)arg1 ;
-(id)_accessibilityEquivalenceTag;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityAllDragSourceDescriptors;
-(id)_accessibilityAllDropPointDescriptors;
-(id)_accessibilityCustomActionGroupIdentifier;
-(BOOL)_accessibilityIsAwayAlertElement;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)attributeDelegate;
-(id)_tableViewCellAttributeDelegate;
-(double)_accessibilityDelayBeforeUpdatingOnActivation;
-(BOOL)_accessibilityUseElementAtPositionAfterActivation;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityActivate;
-(id)accessibilityIdentifier;
-(id)accessibilityLocalizedStringKey;
-(id)description;
@end

