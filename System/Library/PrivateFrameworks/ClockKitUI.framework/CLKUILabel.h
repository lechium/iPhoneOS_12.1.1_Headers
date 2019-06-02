/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont, UIColor, NSString, NSAttributedString;


@protocol CLKUILabel <NSObject>
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) double _lastLineBaseline; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@required
-(UIEdgeInsets)opticalInsets;
-(void)setText:(id)arg1;
-(void)setFont:(id)arg1;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1;
-(NSString *)text;
-(void)setAttributedText:(id)arg1;
-(void)setTextColor:(id)arg1;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(double)_lastLineBaseline;
-(long long)textAlignment;

@end

