/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iMessageApps/iMessageApps-Structs.h>
@interface IMADropTarget : NSObject {

	double _scale;
	double _meshScaleFactor;
	double _rotation;
	CGPoint _screenCoordinate;
	CGSize _initialSize;

}

@property (nonatomic,readonly) CGPoint screenCoordinate;              //@synthesize screenCoordinate=_screenCoordinate - In the implementation block
@property (nonatomic,readonly) CGSize initialSize;                    //@synthesize initialSize=_initialSize - In the implementation block
@property (nonatomic,readonly) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double meshScaleFactor;                //@synthesize meshScaleFactor=_meshScaleFactor - In the implementation block
@property (nonatomic,readonly) double rotation;                       //@synthesize rotation=_rotation - In the implementation block
-(CGSize)initialSize;
-(double)meshScaleFactor;
-(CGPoint)screenCoordinate;
-(double)scale;
-(id)description;
-(double)rotation;
-(id)initWithScreenCoordinate:(CGPoint)arg1 initialSize:(CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 ;
@end
