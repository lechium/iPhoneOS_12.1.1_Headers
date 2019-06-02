/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDGLFrameBufferTextureLookupInfo : NSObject {

	unsigned _attachment;
	unsigned _name;
	long long _index;

}

@property (nonatomic,readonly) unsigned attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned name;                    //@synthesize name=_name - In the implementation block
+(id)textureLookupInfoWithAttachment:(unsigned)arg1 index:(long long)arg2 name:(unsigned)arg3 ;
-(id)initWithAttachment:(unsigned)arg1 index:(long long)arg2 name:(unsigned)arg3 ;
-(unsigned)name;
-(long long)index;
-(unsigned)attachment;
@end

