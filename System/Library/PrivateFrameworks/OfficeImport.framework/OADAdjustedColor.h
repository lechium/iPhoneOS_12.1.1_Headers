/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@class OADColor;

@interface OADAdjustedColor : OADColor {

	OADColor* mBaseColor;
	int mAdjustmentType;
	unsigned char mAdjustmentParam;
	BOOL mInvert;
	BOOL mInvert128;
	BOOL mGray;

}
-(int)adjustmentType;
-(id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(BOOL)arg4 invert128:(BOOL)arg5 gray:(BOOL)arg6 ;
-(id)baseColor;
-(BOOL)gray;
-(unsigned char)adjustmentParam;
-(BOOL)invert;
-(BOOL)invert128;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

