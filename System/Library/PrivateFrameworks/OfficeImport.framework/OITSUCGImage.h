/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@interface OITSUCGImage : OITSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
@end
