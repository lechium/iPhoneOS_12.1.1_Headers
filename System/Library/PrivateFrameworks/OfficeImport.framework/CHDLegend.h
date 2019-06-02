/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADGraphicProperties, EDCollection, EDResources, NSArray;

@interface CHDLegend : NSObject {

	int mLegendPosition;
	OADGraphicProperties* mGraphicProperties;
	unsigned long long mFontIndex;
	EDCollection* mLegendEntries;
	EDResources* mResources;
	BOOL mIsVertical;
	BOOL mIsOverlay;
	NSArray* mLabelEffects;

}
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(id)graphicProperties;
-(int)legendPosition;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(void)setLabelEffects:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLegendPosition:(int)arg1 ;
-(void)setIsSingleColumnLegend:(BOOL)arg1 ;
-(unsigned long long)fontIndex;
-(id)labelEffects;
-(id)legendEntries;
-(BOOL)isSingleColumnLegend;
-(void)dealloc;
-(id)description;
-(void)setFont:(id)arg1 ;
-(id)font;
@end
