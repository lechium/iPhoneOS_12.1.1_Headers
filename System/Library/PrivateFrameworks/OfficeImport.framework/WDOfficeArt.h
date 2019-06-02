/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {

	WDCharacterProperties* mProperties;
	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(id)imageData;
-(id)drawable;
-(BOOL)isDrawableOverridden;
-(int)runType;
-(void)setDrawable:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
-(void)checkForFloating:(id)arg1 ;
-(void)clearProperties;
-(void)dealloc;
-(id)description;
-(void)setFloating:(BOOL)arg1 ;
-(void)setProperties:(id)arg1 ;
-(BOOL)isFloating;
-(id)properties;
-(id)imageName;
@end

