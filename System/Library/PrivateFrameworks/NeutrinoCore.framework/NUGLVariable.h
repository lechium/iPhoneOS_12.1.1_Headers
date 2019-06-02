/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NUGLVariable : NSObject {

	unsigned _type;
	int _size;
	int _location;

}

@property (readonly) unsigned type;                   //@synthesize type=_type - In the implementation block
@property (readonly) int size;                        //@synthesize size=_size - In the implementation block
@property (readonly) int location;                    //@synthesize location=_location - In the implementation block
@property (readonly) unsigned valueType; 
-(unsigned)valueType;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 location:(int)arg3 ;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 ;
-(BOOL)isEqualToVariable:(id)arg1 ;
-(int)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(int)location;
@end

