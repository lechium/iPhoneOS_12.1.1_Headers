/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(unsigned)serializeString:(id)arg1 ;
-(void)serialize32:(unsigned)arg1 ;
-(void)serialize64:(unsigned long long)arg1 ;
-(id)copyContiguousData;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
@end
