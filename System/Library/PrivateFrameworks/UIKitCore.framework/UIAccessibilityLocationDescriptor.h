/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSAttributedString, NSString;

@interface UIAccessibilityLocationDescriptor : NSObject {

	UIView* _view;
	NSAttributedString* _attributedName;
	CGPoint _point;

}

@property (nonatomic,__weak,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                    //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
-(BOOL)matchesDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSAttributedString *)attributedName;
-(UIView *)view;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(id)initWithAttributedName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(CGPoint)point;
-(id)initWithName:(id)arg1 view:(id)arg2 ;
@end

