/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBufferZone <NSObject>
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator; 
@required
-(id<MDLMeshBufferAllocator>)allocator;
-(unsigned long long)capacity;

@end

