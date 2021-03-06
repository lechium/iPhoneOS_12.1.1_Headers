/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OADOrientedBounds, NSDictionary;

@interface CMShapeBuilder : NSObject {

	int _type;
	OADOrientedBounds* _orientedBounds;
	int _format;
	NSDictionary* _adjustValues;

}
+(CGRect)canonicalBounds;
-(BOOL)isOffice12;
-(void)setOrientedBounds:(id)arg1 ;
-(void)setFileFormat:(int)arg1 ;
-(CGPathRef)copyShapeWithTransform:(CGAffineTransform)arg1 ;
-(void)setShapeType:(int)arg1 ;
-(void)setAdjustValues:(id)arg1 ;
-(float)maxAdjustedValue;
-(CGAffineTransform)affineTransform;
@end

