/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MAPropertyAccessTuple : NSObject <NSCopying> {

	BOOL _isNode;
	unsigned short _domain;
	unsigned short _label;
	NSString* _propertyKey;
	Class _valueClass;

}

@property (assign,nonatomic) unsigned short domain;               //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned short label;                //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL isNode;                         //@synthesize isNode=_isNode - In the implementation block
@property (nonatomic,retain) NSString * propertyKey;              //@synthesize propertyKey=_propertyKey - In the implementation block
@property (assign,nonatomic) Class valueClass;                    //@synthesize valueClass=_valueClass - In the implementation block
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setValueClass:(Class)arg1 ;
-(BOOL)isNode;
-(id)initWithDomain:(unsigned short)arg1 label:(unsigned short)arg2 isNode:(BOOL)arg3 propertyKey:(id)arg4 valueClass:(Class)arg5 ;
-(void)setIsNode:(BOOL)arg1 ;
-(void)setDomain:(unsigned short)arg1 ;
-(NSString *)propertyKey;
-(Class)valueClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned short)domain;
-(unsigned short)label;
-(void)setLabel:(unsigned short)arg1 ;
@end
