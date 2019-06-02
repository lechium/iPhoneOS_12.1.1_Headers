/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitLayoutNode.h>
#import <libobjc.A.dylib/EQKitLayoutSchemataFenced.h>

@class NSArray, NSString;

@interface EQKitMathMLMFenced : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutNode, EQKitLayoutSchemataFenced> {

	NSArray* mChildren;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<EQKitLayoutNode> parent; 
-(BOOL)isBaseFontNameUsed;
-(int)isOperatorPaddingRequired;
-(Schemata*)layoutSchemata;
-(id)schemataChildren;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(id)initWithChildren:(id)arg1 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> >*)mathMLAttributes;
-(id)initWithChildren:(id)arg1 node:(xmlNode*)arg2 ;
-(id)init;
-(void)dealloc;
@end

