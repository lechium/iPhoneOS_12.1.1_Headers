/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKImageElement, IKTextElement, IKOrdinalElement, IKViewElement;

@interface IKLockupElement : IKViewElement

@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,retain,readonly) IKImageElement * fullscreenImage; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) BOOL showTitlesOnFocus; 
@property (nonatomic,retain,readonly) IKViewElement * overlays; 
-(IKOrdinalElement *)ordinal;
-(IKTextElement *)descriptionText;
-(BOOL)showTitlesOnFocus;
-(IKImageElement *)fullscreenImage;
-(IKImageElement *)image;
-(IKTextElement *)title;
-(IKTextElement *)subtitle;
-(IKViewElement *)overlays;
@end

