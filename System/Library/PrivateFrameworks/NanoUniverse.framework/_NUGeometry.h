/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoUniverse/NanoUniverse-Structs.h>
@interface _NUGeometry : NSObject {

	NUVertex* _vertices;
	unsigned short* _indices;
	int _vcount;
	int _icount;

}

@property (nonatomic,readonly) const NUVertex* vertices;                   //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) const unsigned short* indices;              //@synthesize indices=_indices - In the implementation block
@property (nonatomic,readonly) int vcount;                                 //@synthesize vcount=_vcount - In the implementation block
@property (nonatomic,readonly) int icount;                                 //@synthesize icount=_icount - In the implementation block
-(const NUVertex*)vertices;
-(const unsigned short*)indices;
-(int)addVertices:(const NUVertex*)arg1 count:(int)arg2 ;
-(int)addIndices:(const unsigned short*)arg1 count:(int)arg2 vbase:(int)arg3 ;
-(int)vcount;
-(int)icount;
-(void)dealloc;
@end

