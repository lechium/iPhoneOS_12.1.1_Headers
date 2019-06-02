/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKNumericBorderButton.h>

@class UIColor, PKNumericSuggestion;

@interface PKNumericSuggestionButton : PKNumericBorderButton {

	UIColor* _textColor;
	PKNumericSuggestion* _suggestion;

}

@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) PKNumericSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(id)buttonWithSuggestion:(id)arg1 ;
-(PKNumericSuggestion *)suggestion;
-(void)setSuggestion:(PKNumericSuggestion *)arg1 ;
-(id)init;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
@end
