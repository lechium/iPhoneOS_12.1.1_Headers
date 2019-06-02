/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(CGRect)_accessibilityDirectInteractionFrame;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(void)activate;
-(void)deactivate;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
@end
