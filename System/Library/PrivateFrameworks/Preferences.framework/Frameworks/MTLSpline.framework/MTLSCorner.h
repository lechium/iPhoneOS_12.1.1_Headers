/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Frameworks/MTLSpline.framework/MTLSpline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MTLSpline/MTLSpline-Structs.h>
#import <MTLSpline/MTLSPath.h>

@interface MTLSCorner : MTLSPath {

	vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >* _points;

}
-(id)initWithStrokeWeight:(float)arg1 radius:(float)arg2 outerAnchor:(float)arg3 innerAnchor:(float)arg4 cornerEdge:(float)arg5 scale:(AxisAngle)arg6 ;
@end

