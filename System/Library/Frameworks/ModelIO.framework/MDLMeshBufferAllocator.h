/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBufferAllocator <NSObject>
@required
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
-(id)newZone:(unsigned long long)arg1;
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;

@end

