/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray;

@interface NFTLV : NSObject {

	unsigned _tag;
	NSData* _value;
	NSArray* _children;

}

@property (nonatomic,readonly) unsigned tag; 
@property (nonatomic,readonly) NSData * value; 
@property (nonatomic,readonly) NSArray * children; 
+(id)simpleTLVsWithData:(id)arg1 ;
+(id)_parseTLVs:(const char**)arg1 end:(const char*)arg2 simple:(BOOL)arg3 ;
+(id)TLVsWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 value:(id)arg2 ;
+(id)_intToData:(unsigned)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 children:(id)arg2 ;
+(id)TLVWithData:(id)arg1 ;
+(id)TLVWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)simpleTLVsWithTag:(unsigned)arg1 fromData:(id)arg2 ;
+(id)TLVWithTag:(unsigned)arg1 unsignedLongValue:(unsigned)arg2 ;
-(id)asData;
-(id)valueAsString;
-(unsigned)valueAsUnsignedLong;
-(unsigned short)valueAsUnsignedShort;
-(unsigned long long)valueAsUnsignedLongLong;
-(id)childrenWithTag:(unsigned)arg1 ;
-(id)childWithTag:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)value;
-(unsigned)tag;
-(NSArray *)children;
@end

