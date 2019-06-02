/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSString, XMLWrapperNamespace;

@interface XMLWrapperAttribute : NSObject {

	xmlAttr* _attributeNode;
	int _type;
	NSString* _name;
	NSString* _value;
	XMLWrapperNamespace* _ns;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) XMLWrapperNamespace * ns;              //@synthesize ns=_ns - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
-(XMLWrapperNamespace *)ns;
-(id)initWithNode:(xmlAttr*)arg1 error:(id*)arg2 ;
-(BOOL)xmlAttrNodeForNode:(xmlNode*)arg1 error:(id*)arg2 ;
-(void)setNs:(XMLWrapperNamespace *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
@end

