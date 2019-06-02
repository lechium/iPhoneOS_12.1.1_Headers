/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet;

@interface MLMultiArrayShapeConstraint : NSObject {

	long long _type;
	NSArray* _sizeRangeForDimension;
	NSOrderedSet* _shapeSet;

}

@property (nonatomic,readonly) NSOrderedSet * shapeSet;                      //@synthesize shapeSet=_shapeSet - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * sizeRangeForDimension;              //@synthesize sizeRangeForDimension=_sizeRangeForDimension - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedShapes; 
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(id)findAvailableShape:(id)arg1 ;
-(id)initUnspecified;
-(id)initWithSizeRangeForDimension:(id)arg1 ;
-(id)initWithEnumeratedShapes:(id)arg1 ;
-(NSArray *)enumeratedShapes;
-(NSArray *)sizeRangeForDimension;
-(NSOrderedSet *)shapeSet;
-(long long)type;
@end

