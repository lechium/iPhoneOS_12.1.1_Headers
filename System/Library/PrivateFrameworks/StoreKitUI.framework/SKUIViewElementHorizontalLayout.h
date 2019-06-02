/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKUIViewElementHorizontalLayout : NSObject {

	double _elementSpacing;
	double _layoutWidth;
	long long _maximumElementsPerLine;
	long long _maximumLines;

}

@property (assign,nonatomic) double elementSpacing;                         //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (assign,nonatomic) double layoutWidth;                            //@synthesize layoutWidth=_layoutWidth - In the implementation block
@property (assign,nonatomic) long long maximumElementsPerLine;              //@synthesize maximumElementsPerLine=_maximumElementsPerLine - In the implementation block
@property (assign,nonatomic) long long maximumLines;                        //@synthesize maximumLines=_maximumLines - In the implementation block
-(void)setElementSpacing:(double)arg1 ;
-(void)setLayoutWidth:(double)arg1 ;
-(id)layoutViewElements:(id)arg1 usingSizingBlock:(/*^block*/id)arg2 ;
-(double)elementSpacing;
-(void)setMaximumElementsPerLine:(long long)arg1 ;
-(void)setMaximumLines:(long long)arg1 ;
-(double)layoutWidth;
-(long long)maximumElementsPerLine;
-(long long)maximumLines;
@end
