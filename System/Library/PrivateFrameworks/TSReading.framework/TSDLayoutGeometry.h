/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {

	CGSize mSize;
	CGAffineTransform mTransform;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform transform; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)inverseTransform;
-(CGAffineTransform)fullTransform;
-(BOOL)differsInMoreThanTranslationFrom:(id)arg1 ;
-(id)initWithInfoGeometry:(id)arg1 ;
-(id)geometryByTranslatingBy:(CGPoint)arg1 ;
-(CGAffineTransform)transformByConcatenatingTransformTo:(CGAffineTransform)arg1 ;
-(id)initWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 ;
-(id)geometryByTransformingBy:(CGAffineTransform)arg1 ;
-(id)infoGeometry;
-(id)geometryByOutsettingBy:(CGSize)arg1 ;
-(CGSize)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

