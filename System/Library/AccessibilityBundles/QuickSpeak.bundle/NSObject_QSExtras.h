/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickSpeak/QuickSpeak-Structs.h>
#import <QuickSpeak/__NSObject_QSExtras_super.h>

@interface NSObject_QSExtras : __NSObject_QSExtras_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(void)_accessibilitySpeakWithLanguage:(id)arg1 ;
-(id)_accessibilitySpeakSelectionTextInputResponder;
-(void)_accessibilityQuickSpeakTextRectsWithRange:(NSRange)arg1 string:(id)arg2 highlightRects:(id)arg3 sentenceRects:(id)arg4 singleTextRect:(CGRect*)arg5 ;
-(void)_accessibilityHandleFinishSpeaking;
-(void)_accessibilityCacheContentIfNecessary;
-(BOOL)_accessibilityShouldUpdateQuickSpeakContent;
-(BOOL)_accessibilitySystemShouldShowSpeakSpellOut;
-(BOOL)_accessibilitySystemShouldShowSpeakBubbleCommon;
-(BOOL)_accessibilitySystemShouldShowSpeakBubble;
-(BOOL)_accessibilityShouldShowSpeakBubble;
-(BOOL)_accessibilitySystemShouldShowSpeakSentence;
-(BOOL)_accessibilityShouldShowSpeakSpellOut;
-(BOOL)_accessibilityShouldShowSpeakLanguageBubble;
-(BOOL)_accessibilitySystemShouldShowSpeakLanguageBubble;
-(BOOL)_accessibilitySystemShouldShowPauseBubble;
-(BOOL)_accessibilityShouldShowPauseBubble;
-(BOOL)_accessibilityQScanPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)_accessibilityQuickSpeakContentIsSpeakable;
-(void)_accessibilitySpeakSentence:(id)arg1 ;
-(void)_accessibilitySpeakSpellOut:(id)arg1 ;
-(void)_accessibilitySpeak:(id)arg1 ;
-(void)_accessibilitySpeakLanguageSelection:(id)arg1 ;
-(void)_accessibilityPauseSpeaking:(id)arg1 ;
@end

