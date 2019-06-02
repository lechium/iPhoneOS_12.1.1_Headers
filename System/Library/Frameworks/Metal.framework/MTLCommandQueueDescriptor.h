/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long maxCommandBufferCount; 
@property (assign,nonatomic) unsigned long long qosClass; 
@property (assign,nonatomic) long long qosRelativePriority; 
+(id)commandQueueDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
