/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, IKBackgroundElement, UIColor, NSArray, IKLockupElement;

@interface IKDocumentBannerElement : IKViewElement {

	BOOL _fixed;

}

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (getter=isFixed,nonatomic,readonly) BOOL fixed;                            //@synthesize fixed=_fixed - In the implementation block
@property (nonatomic,retain,readonly) NSArray * buttons; 
@property (nonatomic,retain,readonly) IKLockupElement * lockup; 
-(BOOL)fixed;
-(BOOL)isFixed;
-(NSArray *)buttons;
-(IKLockupElement *)lockup;
-(IKTextElement *)title;
-(IKTextElement *)subtitle;
-(UIColor *)backgroundColor;
-(IKBackgroundElement *)background;
@end

