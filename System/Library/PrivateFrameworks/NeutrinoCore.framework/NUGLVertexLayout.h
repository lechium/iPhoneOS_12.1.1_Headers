/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NUGLVertexLayout : NSObject {

	NSArray* _attributes;
	long long _size;

}

@property (readonly) long long count; 
@property (readonly) NSArray * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (readonly) long long size;                        //@synthesize size=_size - In the implementation block
@property (readonly) NSArray * attributeNames; 
-(unsigned long long)indexOfAttribute:(id)arg1 ;
-(int)offsetAtIndex:(unsigned long long)arg1 ;
-(long long)offsetForAttribute:(id)arg1 ;
-(id)attributeWithName:(id)arg1 ;
-(NSArray *)attributeNames;
-(long long)size;
-(id)init;
-(long long)count;
-(NSArray *)attributes;
-(id)initWithAttributes:(id)arg1 ;
@end
