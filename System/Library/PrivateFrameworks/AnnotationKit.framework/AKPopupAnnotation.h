/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKRectangularAnnotationProtocol.h>
#import <libobjc.A.dylib/AKChildAnnotationProtocol.h>

@class AKAnnotation, NSString;

@interface AKPopupAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKChildAnnotationProtocol> {

	unsigned long long _visualStyle;
	AKAnnotation* _parentAnnotation;
	NSString* _contents;
	CGRect _rectangle;
	CGRect _openRectangle;

}

@property (assign) unsigned long long visualStyle;                  //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign) CGRect rectangle;                                //@synthesize rectangle=_rectangle - In the implementation block
@property (assign) CGRect openRectangle;                            //@synthesize openRectangle=_openRectangle - In the implementation block
@property (__weak) AKAnnotation * parentAnnotation;                 //@synthesize parentAnnotation=_parentAnnotation - In the implementation block
@property (copy) NSString * contents;                               //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(CGRect)rectangle;
-(AKAnnotation *)parentAnnotation;
-(id)keysForValuesToObserveForUndo;
-(void)setRectangle:(CGRect)arg1 ;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(id)keysForValuesToObserveForAdornments;
-(void)setOpenRectangle:(CGRect)arg1 ;
-(void)setParentAnnotation:(AKAnnotation *)arg1 ;
-(CGRect)openRectangle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)visualStyle;
-(void)setVisualStyle:(unsigned long long)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(id)displayName;
@end

