/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {

	OADRotation3D* mRotation;
	int mCameraType;
	float mFieldOfView;
	float mZoom;

}
-(int)cameraType;
-(void)setCameraType:(int)arg1 ;
-(void)setFieldOfView:(float)arg1 ;
-(float)fieldOfView;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(id)rotation;
-(void)setRotation:(id)arg1 ;
@end

