/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKDocumentBannerElement, IKCarouselElement, IKBackgroundElement;

@interface IKShowcaseTemplate : IKViewElement

@property (nonatomic,retain,readonly) NSArray * modes; 
@property (nonatomic,retain,readonly) IKDocumentBannerElement * documentBanner; 
@property (nonatomic,retain,readonly) IKCarouselElement * carousel; 
@property (nonatomic,retain,readonly) IKBackgroundElement * background; 
@property (nonatomic,readonly) unsigned long long transition; 
-(IKDocumentBannerElement *)documentBanner;
-(NSArray *)modes;
-(IKCarouselElement *)carousel;
-(unsigned long long)transition;
-(IKBackgroundElement *)background;
@end

