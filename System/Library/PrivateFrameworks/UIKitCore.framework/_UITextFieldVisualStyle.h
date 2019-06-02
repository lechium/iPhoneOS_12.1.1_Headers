/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)defaultTextColor;
-(id)placeholderColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)parentViewForTextContentView;
-(id)defaultFocusedTextColor;
-(id)initWithStyleSubject:(id)arg1 ;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id)overrideAttributesForEditing;
-(id)fieldEditorTextAttributes:(id)arg1 storingOriginalAttributes:(id)arg2 ;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

