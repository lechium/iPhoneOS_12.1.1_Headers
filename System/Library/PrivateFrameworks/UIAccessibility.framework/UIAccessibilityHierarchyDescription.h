/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIAccessibilityElementDescription, NSArray;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding> {

	UIAccessibilityElementDescription* _rootElement;
	NSArray* _leafElements;

}

@property (nonatomic,retain) UIAccessibilityElementDescription * rootElement;              //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) NSArray * leafElements;                                       //@synthesize leafElements=_leafElements - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLeafElements:(NSArray *)arg1 ;
-(NSArray *)leafElements;
-(UIAccessibilityElementDescription *)rootElement;
-(void)setRootElement:(UIAccessibilityElementDescription *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

