/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSData, NSObject;

@interface CSDataWrapper : NSObject {

	BOOL _mapped;
	NSData* _data;
	unsigned long long _dataSize;
	NSObject*<OS_xpc_object> _xpcData;
	const void* _dataPtr;
	unsigned long long _mapSize;

}

@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
@property (nonatomic,readonly) const void* dataPtr;                           //@synthesize dataPtr=_dataPtr - In the implementation block
@property (assign,nonatomic) unsigned long long dataSize;                     //@synthesize dataSize=_dataSize - In the implementation block
@property (nonatomic,readonly) unsigned long long mapSize;                    //@synthesize mapSize=_mapSize - In the implementation block
@property (nonatomic,readonly) BOOL mapped;                                   //@synthesize mapped=_mapped - In the implementation block
-(void)setDataSize:(unsigned long long)arg1 ;
-(id)initWithXPCValue:(id)arg1 ;
-(BOOL)mapped;
-(NSObject*<OS_xpc_object>)xpcData;
-(unsigned long long)mapSize;
-(unsigned long long)dataSize;
-(const void*)dataPtr;
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

