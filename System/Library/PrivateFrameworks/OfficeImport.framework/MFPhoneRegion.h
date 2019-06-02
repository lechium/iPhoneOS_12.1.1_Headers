/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

@interface MFPhoneRegion : MFRegion {

	OITSUBezierPath* m_path;
	CGRect m_bounds;

}
-(id)pathForClippingWithDeviceContext:(id)arg1 ;
-(int)fill:(id)arg1 in_brush:(id)arg2 ;
-(int)invert:(id)arg1 ;
-(int)frame:(id)arg1 in_brush:(id)arg2 ;
-(id)initWithRects:(id)arg1 in_bounds:(CGRect)arg2 in_dc:(id)arg3 ;
-(id)initWithPath:(id)arg1 in_bounds:(CGRect)arg2 ;
-(void)dealloc;
@end

