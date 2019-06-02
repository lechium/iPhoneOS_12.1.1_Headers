/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSLayoutItem;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface NSLayoutConstraintParser : NSObject {

	NSString* _line;
	const char* _lineChars;
	unsigned long long _lineLength;
	unsigned long long _opts;
	BOOL _useHorizontalArrangement;
	NSDictionary* _metrics;
	NSDictionary* _views;
	id<NSLayoutItem> _containerView;
	NSMutableArray* _constraints;
	NSMutableArray* _unflushedWidthConstraints;
	NSMutableArray* _alignmentConstraints;
	unsigned long long _currentCharacter;
	NSMutableArray* _incompleteConstraints;
	id<NSLayoutItem> _parsedLeftView;
	id<NSLayoutItem> _parsedRightView;
	id<NSLayoutItem> _parsedConstrainedWidthView;

}
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(id)descriptionLineWithCurrentCharacterPointer;
-(void)failWithDescription:(id)arg1 ;
-(void)parseConnection;
-(id)parseView;
-(void)finishConstraint;
-(void)flushWidthConstraints;
-(NSRange)rangeOfName;
-(id)layoutItemForKey:(id)arg1 ;
-(void)parsePredicateList;
-(void)parsePredicateWithParentheses;
-(void)parsePredicate;
-(void)parseOp;
-(double)parseConstant;
-(void)findContainerView;
-(void)parse;
-(id)metricForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)constraints;
@end

