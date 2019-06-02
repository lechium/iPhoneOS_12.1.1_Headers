/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPen.h>

@interface MFPhonePen : MFPen {

	float m_PixelSize;

}
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(CGAffineTransform)arg5 ;
-(void)strokePath:(id)arg1 in_path:(id)arg2 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(void)applyDashedLinesToPath:(id)arg1 ;
-(void)applyLineCapStyleToPath:(id)arg1 ;
-(void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2 ;
@end
