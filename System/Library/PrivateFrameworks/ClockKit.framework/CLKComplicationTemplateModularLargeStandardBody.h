/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate {

	BOOL _shouldTruncateHeaderLeadingLabelFirst;
	CLKTextProvider* _headerTextProvider;
	CLKTextProvider* _body1TextProvider;
	CLKTextProvider* _body2TextProvider;
	CLKImageProvider* _headerImageProvider;
	CLKImageProvider* _body1ImageProvider;
	CLKTextProvider* _headerTrailingTextProvider;

}

@property (nonatomic,copy) CLKImageProvider * body1ImageProvider;                     //@synthesize body1ImageProvider=_body1ImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTrailingTextProvider;              //@synthesize headerTrailingTextProvider=_headerTrailingTextProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;              //@synthesize shouldTruncateHeaderLeadingLabelFirst=_shouldTruncateHeaderLeadingLabelFirst - In the implementation block
@property (nonatomic,copy) CLKTextProvider * headerTextProvider;                      //@synthesize headerTextProvider=_headerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body1TextProvider;                       //@synthesize body1TextProvider=_body1TextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * body2TextProvider;                       //@synthesize body2TextProvider=_body2TextProvider - In the implementation block
@property (nonatomic,copy) CLKImageProvider * headerImageProvider;                    //@synthesize headerImageProvider=_headerImageProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setHeaderTrailingTextProvider:(CLKTextProvider *)arg1 ;
-(void)setShouldTruncateHeaderLeadingLabelFirst:(BOOL)arg1 ;
-(void)setHeaderTextProvider:(CLKTextProvider *)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(void)setBody1TextProvider:(CLKTextProvider *)arg1 ;
-(void)setBody2TextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)body2TextProvider;
-(void)setHeaderImageProvider:(CLKImageProvider *)arg1 ;
-(CLKImageProvider *)headerImageProvider;
-(CLKTextProvider *)headerTextProvider;
-(CLKTextProvider *)body1TextProvider;
-(CLKImageProvider *)body1ImageProvider;
-(CLKTextProvider *)headerTrailingTextProvider;
-(BOOL)shouldTruncateHeaderLeadingLabelFirst;
-(void)setBody1ImageProvider:(CLKImageProvider *)arg1 ;
@end

