/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLPointerType.h>

@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {

	unsigned long long _dataType;
	unsigned long long _elementType;
	MTLType* _elementTypeInfo;
	unsigned long long _access;
	unsigned long long _alignment;
	unsigned long long _dataSize;
	BOOL _elementIsArgumentBuffer;
	BOOL _isConstantBuffer;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
-(BOOL)elementIsArgumentBuffer;
-(id)elementTypeDescription;
-(BOOL)isConstantBuffer;
-(void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 ;
-(id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(BOOL)arg6 isConstantBuffer:(BOOL)arg7 ;
-(BOOL)elementIsIndirectArgumentBuffer;
-(unsigned long long)dataSize;
-(unsigned long long)elementType;
-(unsigned long long)dataType;
-(unsigned long long)access;
-(unsigned long long)alignment;
-(void)dealloc;
@end

