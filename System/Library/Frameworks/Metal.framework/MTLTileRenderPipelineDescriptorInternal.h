/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rasterSampleCount;
-(unsigned long long)colorSampleCount;
-(void)setColorSampleCount:(unsigned long long)arg1 ;
-(id)tileBuffers;
-(void)setTileFunction:(id)arg1 ;
-(id)tileFunction;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(BOOL)threadgroupSizeMatchesTileSize;
-(id)colorAttachments;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

