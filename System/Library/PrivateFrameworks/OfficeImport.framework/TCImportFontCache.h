/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUNoCopyDictionary, NSMutableDictionary;

@interface TCImportFontCache : NSObject {

	OITSUNoCopyDictionary* mFontCache;
	NSMutableDictionary* mFontNameCache;

}

@property (nonatomic,readonly) NSMutableDictionary * fontNameCache; 
+(CGSize)stringSizeForText:(id)arg1 ctFontRef:(CTFontRef)arg2 ;
-(CTFontRef)ctFontRefForKey:(id)arg1 ;
-(CTFontRef)fontRefForFontName:(id)arg1 size:(int)arg2 ;
-(CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2 ;
-(CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3 ;
-(void)addReplacementFontWarning:(id)arg1 fontName:(id)arg2 ;
-(void)validateFontInfoInPropertyMap:(id)arg1 baseStyle:(id)arg2 ;
-(NSMutableDictionary *)fontNameCache;
-(id)init;
-(void)dealloc;
@end

