/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADCubicBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint1;
	OADAdjustPoint mControlPoint2;
	OADAdjustPoint mToPoint;
	BOOL mRelative;

}
-(OADAdjustPoint)toPoint;
-(BOOL)relative;
-(id)initWithControlPoint1:(OADAdjustPoint)arg1 controlPoint2:(OADAdjustPoint)arg2 toPoint:(OADAdjustPoint)arg3 ;
-(void)setRelative:(BOOL)arg1 ;
-(OADAdjustPoint)controlPoint1;
-(OADAdjustPoint)controlPoint2;
@end

