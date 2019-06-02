/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _PASBloomFilter : NSObject {

	/*function pointer*/void* _computeHashes;
	NSData* _data;
	unsigned _numBits;
	int _numHashFunctions;
	int _hashArrayLength;

}
+(id)bloomFilterWithPathToFile:(id)arg1 ;
-(id)initDummy;
-(BOOL)getWithHashes:(id)arg1 ;
-(id)initWithData:(id)arg1 numBits:(unsigned)arg2 hashFunctionCode:(unsigned)arg3 numHashFunctions:(int)arg4 ;
-(id)_computeHashesWithSeed:(int)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 reuse:(id)arg4 ;
-(id)newHashesArray;
-(int)numHashes;
-(id)computeHashesForString:(id)arg1 reuse:(id)arg2 ;
-(id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3 ;
-(id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4 ;
-(id)init;
@end

