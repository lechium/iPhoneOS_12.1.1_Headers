/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, IKDOMElement, NSString;

@interface IKDOMConditionality : NSObject {

	NSArray* _expressions;
	NSSet* _dependentPropertyPaths;
	IKDOMElement* _domElement;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * expressions;                       //@synthesize expressions=_expressions - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                 //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPropertyPaths;              //@synthesize dependentPropertyPaths=_dependentPropertyPaths - In the implementation block
+(id)_applyOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)conditionalityWithDOMElement:(id)arg1 ;
-(NSArray *)expressions;
-(BOOL)passesForDataItem:(id)arg1 ;
-(NSSet *)dependentPropertyPaths;
-(IKDOMElement *)domElement;
-(void)applyOnDOMElement:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 ;
-(NSString *)identifier;
@end
