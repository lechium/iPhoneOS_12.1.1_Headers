/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned long long mColorIndex;
	unsigned long long mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2 ;
-(double)tint;
-(int)systemColorID;
-(id)initWithResources:(id)arg1 ;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
-(BOOL)isEqualToColorReference:(id)arg1 ;
-(unsigned long long)colorIndex;
-(unsigned long long)themeIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(BOOL)isValid;
@end
