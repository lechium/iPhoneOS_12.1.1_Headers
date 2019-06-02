/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPImageObjectData : NSObject {

	CGImageRef _image;
	CGRect _boundsOnPage;

}

@property (retain) CGImageRef image;                 //@synthesize image=_image - In the implementation block
@property (assign) CGRect boundsOnPage;              //@synthesize boundsOnPage=_boundsOnPage - In the implementation block
+(id)imageObjectDataWithCGImage:(CGImageRef)arg1 andBounds:(CGRect)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 andBoundsOnPage:(CGRect)arg2 ;
-(void)setBoundsOnPage:(CGRect)arg1 ;
-(CGRect)boundsOnPage;
-(void)dealloc;
-(void)setImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
@end

