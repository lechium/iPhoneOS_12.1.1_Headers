/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSData;

@interface WDFieldMarker : WDRun {

	WDCharacterProperties* mProperties;
	int mFieldPosition;
	int mMarkerType;
	unsigned char mFieldType;
	NSData* mData;
	unsigned mZombieEmbed : 1;
	unsigned mResultDirty : 1;
	unsigned mResultEdited : 1;
	unsigned mLocked : 1;
	unsigned mPrivateResult : 1;
	unsigned mNested : 1;
	unsigned mHasSeparator : 1;

}
-(unsigned char)fieldType;
-(int)fieldMarkerType;
-(int)runType;
-(void)setFieldPosition:(int)arg1 ;
-(void)setFieldMarkerType:(int)arg1 ;
-(void)setFieldType:(unsigned char)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(int)fieldPosition;
-(BOOL)zombieEmbed;
-(void)setZombieEmbed:(BOOL)arg1 ;
-(BOOL)resultDirty;
-(void)setResultDirty:(BOOL)arg1 ;
-(BOOL)resultEdited;
-(void)setResultEdited:(BOOL)arg1 ;
-(BOOL)locked;
-(BOOL)privateResult;
-(void)setPrivateResult:(BOOL)arg1 ;
-(BOOL)nested;
-(void)setNested:(BOOL)arg1 ;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
-(void)clearProperties;
-(void)dealloc;
-(id)description;
-(void)setLocked:(BOOL)arg1 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(id)properties;
@end

